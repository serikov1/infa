#include <SFML/Graphics.hpp>
#include <ctime>

using namespace sf;

//ширина клетка
int w = 32;
int gridLogic[12][12];
int gridView[12][12];

bool selected = false;
bool end_game = false;

int col_mines = 0;
int find_mines = 0;

int main()
{
    srand(time(0));
    RenderWindow app(VideoMode(387,387), "Minesweeper");

    Texture t;
    t.loadFromFile(R"(D:\code clion\SAPER\tiles.jpg)");
    Sprite s(t);

    //создание мин и расстановка их
    for(int i=0; i<= 11; i++) {
        for (int j = 0; j <= 11; j++)
        {
            gridView[i][j] = 10;
            if(rand() % 5 == 0) {
                gridLogic[i][j] = 9;
                col_mines++;
            }
            else gridLogic[i][j] = 0;
        }
    }

    //подсчет мин вокруг клетки
    for(int i=0; i<= 11; i++) {
        for (int j = 0; j <= 11; j++) {
            int n = 0;
            if (gridLogic[i][j] == 9) continue;
            if (gridLogic[i + 1][j] == 9) n++;
            if (gridLogic[i][j + 1] == 9) n++;
            if (gridLogic[i + 1][j + 1] == 9) n++;
            if (gridLogic[i - 1][j] == 9) n++;
            if (gridLogic[i][j - 1] == 9) n++;
            if (gridLogic[i - 1][j - 1] == 9) n++;
            if (gridLogic[i - 1][j + 1] == 9) n++;
            if (gridLogic[i + 1][j - 1] == 9) n++;
            gridLogic[i][j] = n;
        }
    }

    //начальное состояние поля
    for(int i=0; i<= 11; i++) {
        for (int j = 0; j <= 11; j++) {
            gridView[i][j] = 10;
        }
    }

    while(app.isOpen()) {
        Vector2i pos = Mouse::getPosition(app);
        int x = pos.x / w;
        int y = pos.y / w;
        Event e;
        while (app.pollEvent(e)) {
            if (e.type == Event::Closed)
                app.close();

            if (e.type == Event::MouseButtonPressed) {
                if (e.key.code == Mouse::Left) {
                    gridView[x][y] = gridLogic[x][y];
                    selected = true;
                } else if (e.key.code == Mouse::Right and gridView[x][y] != 11) {
                    gridView[x][y] = 11;
                    if (gridLogic[x][y] == 9 and gridView[x][y] == 11) find_mines++;
                } else {
                    gridView[x][y] = 10;
                    if (gridLogic[x][y] == 9 and !selected) find_mines--;
                }
            }
        }

        app.clear(Color::White);

        if (selected) {
            if (e.key.code == Mouse::Left and gridView[x][y] == 9) {
                for (int i = 0; i <= 11; i++) {
                    for (int j = 0; j <= 11; j++) {
                        gridView[i][j] = gridLogic[i][j];
                        end_game = true;
                    }
                }
            } else if (e.key.code == Mouse::Left) {
                int random = 1 + rand() % 2;
                for (int i = x; i <= x + random; i++) {
                    for (int j = y; j <= y + random; j++) {
                        int ver = 1 + rand() % 4;
                        if (ver == 1 and gridLogic[i][j] != 9) {
                            gridView[i][j] = gridLogic[i][j];
                        }
                        ver = 0;
                    }
                }
            }
        }
        if (find_mines == col_mines) end_game = true;

        for (int i = 0; i <= 11; i++) {
            for (int j = 0; j <= 11; j++) {
                if (gridView[i][j] == 9) gridView[i][j] = gridLogic[i][j];
                s.setTextureRect(IntRect(gridView[i][j] * w, 0, w, w));
                s.setPosition(i * w, j * w);
                app.draw(s);
            }
        }
        app.display();
    }

    if (end_game) {
        RenderWindow end(VideoMode(360, 60), "Game over!");
        Font font;
        font.loadFromFile(R"(D:\code clion\SAPER\20995.otf)");

        while(end.isOpen()){
            Text text("", font, 20);
            Text record("", font, 17);
            if(find_mines != col_mines)
                text.setString("The game is over! You lost!");
            else text.setString("The Game is over! You win!!!");

            record.setString("Bombs found "+std::to_string(find_mines) + "from" + std::to_string(col_mines) + "!");

            text.setFillColor(Color::Green);
            text.setPosition(Vector2f(10,5));

            record.setFillColor(Color::Green);
            record.setPosition(Vector2f(10,25));

            Event close;
            while(end.pollEvent(close)){
                if(close.type == Event::Closed) end.close();
                }
            }
        }


    return 0;
}
