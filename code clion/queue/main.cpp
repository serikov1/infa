#include <iostream>
#include <deque>

template<typename T>
struct queue {
    void push(T element){
        elements.push_back(element);
    }
    void pop(){
        elements.pop_front();
    }
    T top(){
        return elements.front();
    }
    T tail(){
        return elements.back();
    }
    T size(){
       return elements.size();
    }

    std::deque<T> elements;
};
