#include <iostream>

int main(int, char**){
    std::cout << "Hello, from ci-cd-sanitizers-lab1!\n";
    /*UndefinedBehavior*/
    int a = 2147483646z; // Максимальное значение для 32-битного знакового int
    a = a + 1; // Неопределенное поведение
    std::cout << a << std::endl;

    /*Address Error*/
    int values[3] = {1, 2, 3};
    std::cout << values[2] << '\n';

    

    return 0;
}
