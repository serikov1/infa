### Каким образом можно распараллелить части программы? 
- Распараллелить программу можно с помощью класса `std::thread`, он создает отдельный поток, в котором получает 
функцию, с которой дальше работает.

### Как получить результат, вычисленный в другом потоке, если известно, что возвращаемое значение функции (`return ...`) игнорируется?
- Полученный в потоке результат необходимо передать по ссылке используя `std::ref`и только тогда получится не потерять результат.
