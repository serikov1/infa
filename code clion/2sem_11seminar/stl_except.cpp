#include <iostream>
#include <vector>

class IncorrectIndexException: public std::exception{
public:
    IncorrectIndexException(const std::string& message): message(message){}

    const char *what() const noexcept override{
        return message.c_str();
    }

private:
    std::string message;
};


class Storage
{
public:
    // Конструктор хранилища размерности n
    Storage(unsigned int n): n(n){
        storage.resize(n);
    }

    // Добавьте деструктор, если нужно

    // Получение размерности хранилища
    unsigned int getSize() const{
        return n;
    }

    // Получение значения i-го элемента из хранилища
    // Если индекс некорректен, нужно выбросить IncorrectIndexException
    int getValue(unsigned int i) const{
        if(i >= storage.size()) throw IncorrectIndexException("Incorrect index, please choose other");
        return storage[i];
    }

    // Задание значения i-го элемента из хранилища равным value
    // Если индекс некорректен, нужно выбросить IncorrectIndexException
    void setValue(unsigned int i, int value){
        if(i >= storage.size()) throw IncorrectIndexException("Incorrect index, please choose other");
        storage[i] = value;
    }

private:
    unsigned int n;
    std::vector<int> storage;
};

