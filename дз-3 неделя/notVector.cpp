#include<iostream>

class Storage
{
public:
    // Конструктор хранилища размерности n
    Storage(unsigned int n): _n(n){}

    // Добавьте нужный деструктор
    virtual ~Storage(){delete [] mass;}

    // Получение размерности хранилища
    unsigned getSize(){return _n;}

    // Получение значения i-го элемента из хранилища,
    // i находится в диапазоне от 0 до n-1,
    // случаи некорректных i можно не обрабатывать.
    int getValue(unsigned int i){return mass[i];}

    // Задание значения i-го элемента из хранилища равным value,
    // i находится в диапазоне от 0 до n-1,
    // случаи некорректных i можно не обрабатывать.
    void setValue(unsigned int i, int value) {mass[i] = value;}

private:
   unsigned int _n;
   int* mass = new int[_n];
};

// Класс TestStorage, наследуется от вашей реализации Storage
class TestStorage : public Storage {
protected:
    // Унаследованная реализация зачем-то хочет выделить ещё памяти. Имеет право.
    int* more_data;

public:
    // В конструкторе память выделяется,
    TestStorage(unsigned int n) : Storage(n) {
        more_data = new int[n];
    }
    // ... а в деструкторе освобождается - всё честно.
    ~TestStorage() {
        delete[] more_data;
    }
};

int main() {
    Storage *ts = new TestStorage(42);
    delete ts;
    return 0;
}
