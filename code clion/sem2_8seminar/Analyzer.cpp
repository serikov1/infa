#include <iostream>
#include <vector>

class Task
{
protected:
    int cpuNum;
    int size;

public:
    Task(int cpuNum, int size) {
        this->cpuNum = cpuNum;
        this->size = size;
    }

    // На каком ядре процессора выполняется задача
    int getCPU() const {
        return cpuNum;
    }

    // Оценка сложности задачи (в попугаях)
    int getSize() const {
        return size;
    }
};

class Analyzer
{
public:
    // Создать анализатор для системы с numCores ядер
    Analyzer(int numCores): numCores(numCores){
        data.resize(numCores);
    }

    // Проанализировать текущие задачи
    void analyze(const std::vector<Task>& tasks)
    {
        for(auto& elem: tasks){
            data[elem.getCPU()] += elem.getSize();
        }
    }

    // Сообщить общую нагрузку на заданное ядро
    int getLoadForCPU(int cpuNum){
        return data[cpuNum];
    }
private:
    int numCores;
    std::vector<int> data;
};

int main(){
    int numberOfCores = 4;
    std::vector<Task> data = { {0, 1}, {1, 10}, {0, 6}, {2, 12}, {3, 5} };
    Analyzer a(numberOfCores);
    a.analyze(data);
    for(int i = 0; i < numberOfCores; i++)
        std::cout << a.getLoadForCPU(i) << std::endl;
}