#include <iostream>

int main(int, char**){
    std::cout << "Hello, from ci-cd-sanitizers-lab1!\n";
    int **a = new int*[10];
    for(int i = 0; i < 10; ++i) a[i] = new int[5];
    delete[] a;
}
