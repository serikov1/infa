#include <SFML/Graphics.hpp>
#include <ctime>
using namespace sf;

const int M = 20; //высота поля
const int N = 10; //ширина поля

int field[M][N] = {0}; //поле

// массив фигурок
int figures[7][4] =
        {
        1,3,5,7, // I
        2,4,5,7, // S
        3,5,4,6, // Z
        3,5,4,7, // T
        2,3,5,7, // L
        3,5,7,6, // J
        2,3,4,5, // O
        };

struct Point
{
    int x, y;
} a[4],b[4]; // два вспомогательных массива

bool check()
{
    for (int i =0; i < 4; i++)
        if (a[i].x < 0 || a[i].x >= N || a[i].y >= M) return 0;
        else if (field[a[i].y][a[i].x]) return 0;

    return 1;
}

int main()
{
    srand(time(0));
   RenderWindow window(VideoMode(320,480), "The Tetris!");

   // создаем и загружаем текстуры
   Texture texture;
   texture.loadFromFile(R"(D:\code clion\TETRIS\tiles.png)");

   // создаем спрайт
   Sprite sprite(texture);

    // вырежем квадратик 18х18 пикселей
    sprite.setTextureRect(IntRect(0,0,18,18));

    int dx = 0; bool rotate = 0;//переменные для горизонтального перемещения и вращения
    int colorNum = 1; // цвет тетрамино
    float timer = 0, delay = 0.3; //таймер и задержка
    bool beginGame = true;
    int n = rand() % 7;

    Clock clock;
   // основной цикл, пока открыто окно
   while (window.isOpen())
   {
       // получаем время, прошедшее с начала отсчета, и конвентрируем его в секунды
       float time = clock.getElapsedTime().asSeconds();
       clock.restart();
       timer += time;

       // обработка событий
       Event event;
       while (window.pollEvent(event))
       {
           // нажали на крестик и хотим закрыть окно
           if (event.type == Event::Closed)
               window.close();

           if (event.type == Event::KeyPressed) // была нажата кнопка на клавиатуре?
               //стрелка вверх?
               if (event.key.code == Keyboard::Up) rotate = true;
               //стрелка влево?
               else if (event.key.code == Keyboard::Left) dx = -1;
               //стрелка вправо?
               else if (event.key.code == Keyboard::Right) dx = 1;
       }
       if (Keyboard::isKeyPressed(Keyboard::Down)) delay = 0.05;

       for (int i = 0; i < 4; i++) // горизонтальное перемещение
       {
           b[i] = a[i]; // вспомогательный массив
           a[i].x += dx;
       }

       //при выходе за границу, возвращаем старые координаты
       if(!check())
       {
           for(int i = 0; i < 4; i++)
               a[i] = b[i];
       }

       //вращение
       if (rotate)
       {
           Point p = a[1]; // центр вращения
           for (int i = 0; i < 4; i++)
           {
               int x = a[i].y - p.y; //y-y0
               int y = a[i].x - p.x; //x-x0
               a[i].x = p.x - x;
               a[i].y = p.y + y;
           }
           // проверка границ при повороте
           if(!check())
           {
               for(int i = 0; i < 4; i++)
                   a[i] = b[i];
           }
       }

       if(timer > delay)
       {
           for (int i = 0; i < 4; i++){ b[i] = a[i]; a[i].y += 1;}
           if (!check())
           {
               for (int i = 0; i < 4; i++) field[b[i].y][b[i].x] = colorNum;
               colorNum = 1 + rand() % 7;
               n = rand() % 7;
               for (int i = 0; i < 4; i++){
                   a[i].x = figures[n][i] % 2;
                   a[i].y = figures[n][i] / 2;
               }
           }
           timer = 0;
       }

       int k = M - 1;
       for(int i = M - 1; i > 0; i--){
           int count = 0;
           for (int j = 0; j < N; j++){
               if (field[i][j]) count++;
               field[k][j] = field[i][j];
           }
           if (count < N) k--;
       }

       // первое тетрамино на поле?
       if (beginGame)
       {
           beginGame = false;
           n = rand() % 7;
           for (int i = 0; i < 4; i++)
           {
               a[i].x = figures[n][i] % 2;
               a[i].y = figures[n][i] / 2;
           }
       }

       dx = 0; rotate = 0; delay = 0.3;


       // установим фон
       window.clear(Color::White);
      for (int i =0; i < M; i++)
          for(int j = 0; j < N; j++)
          {
              if (field[i][j] == 0) continue;
              sprite.setTextureRect(IntRect(field[i][j] * 18, 0, 18, 18));
              sprite.setPosition(j*18, i*18);
              window.draw(sprite);
          }
      for (int i =0; i < 4; i++)
      {
          sprite.setTextureRect(IntRect(colorNum * 18, 0, 18, 18));

          sprite.setPosition(a[i].x * 18, a[i].y * 18);

          window.draw(sprite);
      }

       // отрисуем окно
       window.display();
   }

    return 0;
}
