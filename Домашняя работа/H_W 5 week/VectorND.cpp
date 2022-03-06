#include <iostream>
#include <vector>


class VectorN
{
public:
    // Конструктор вектора размерности n
    VectorN(unsigned int n): _n(n){
        coord.resize(n);
    }

    // Деструктор
    ~VectorN()= default;

    // Получение размерности вектора
    unsigned getSize() const{
        return _n;
    }

    // Получение значения i-ой координаты вектора,
    // i находится в диапазоне от 0 до n-1
    int getValue(unsigned int i) const{
        return  coord[i];
    }

    // Задание значения i-ой координаты вектора равным value,
    // i находится в диапазоне от 0 до n-1
    void setValue(unsigned int i, int value){
        coord[i] = value;
    }

    /*
     * Далее реализуйте перегруженные операторы
     */

    // Оператор == проверяет два вектора на равенство,
    // равны они, если строго равны всех их координаты

    bool operator== (const VectorN& v2) const{
        int sum = 0;
        for(int i = 0; i < v2.getSize(); i ++) {
            if(this->getValue(i) == v2.getValue(i)) sum++;
        }
        if(sum == v2.getSize()) return true;
        return false;
    }

    // Оператор != проверяет два вектора на неравенство,
    // они не равны, если хотя бы одна координата отличается
    bool operator!= (const VectorN& v2) const{
        int sum = 0;
        for(int i = 0; i < v2.getSize(); i ++) {
            if(this->getValue(i) == v2.getValue(i)) sum++;
        }
        if(sum == v2.getSize()) return false;
        return true;
    }

    // Оператор + складывает два вектора покоординатно,
    // возвращает результат как новый экземпляр вектора
    VectorN operator+ (const VectorN& v2) const{
        VectorN v3(v2.getSize());
        for(int i = 0; i < v2.getSize(); i++){
            v3.setValue(i, this->getValue(i) + v2.getValue(i));
        }
        return v3;
    }

    // Оператор * умножает вектор на скаляр типа int покоординатно,
    // возвращает результат как новый экземпляр вектора.
    // Умножение должно работать при любом порядке операндов.
    VectorN operator* (const int num) const{
        VectorN v3(this->getSize());
        for(int i = 0; i < this->getSize(); i++){
            v3.setValue(i, this->getValue(i) * num);
        }
        return v3;
    }
    friend VectorN operator* (int, const VectorN&);

private:
    std::vector<int> coord;
    unsigned int _n;

};
VectorN operator* (int num, const VectorN& v){
    VectorN v3(v.getSize());
    for(int i = 0; i < v.getSize(); i++){
        v3.setValue(i, v.getValue(i) * num);
    }
    return v3;
}

using namespace std;
int main(){
    VectorN a(4);
    a.setValue(0, 0);
    a.setValue(1, 1);
    a.setValue(2, 2);
    a.setValue(3, 3);

    VectorN b(4);
    b.setValue(0, 0);
    b.setValue(1, -1);
    b.setValue(2, -2);
    b.setValue(3, -3);

    cout << (a == b) << endl;
    cout << (a != b) << endl;

    VectorN c = a + b;
    VectorN d = 5 * c;

    for(unsigned int i = 0; i < a.getSize(); ++i)
        cout << d.getValue(i) << endl;
}