//
// Created by bernardo on 15/02/23.
//
#include "iostream"
using namespace std;

int fibonacci(int);

int main() {
    int a = 10, i;
    for (i = 0; i < a; ++i) {
        printf("0 fb do N: %d e: %d\n", i+1, fibonacci(i+1));
    }
}

int fibonacci(int x) {
    if ((x == 1) || (x == 2)) {
        return 1;
    } else {
        return fibonacci(x-1) + fibonacci(x-2);
    }
}