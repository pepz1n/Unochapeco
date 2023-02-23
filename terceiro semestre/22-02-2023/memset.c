#include <stdio.h>

int fibonacci(int);
long long int fb[100];

int main(){
    memset(fb, -0x1, 100);
    fb[0] = 0;
    fb[1] = 1;
    fb[2] = 1;

    fibonacci(10);
    for (int i = 0; i < 10; ++i) {
        printf("%lld ", fb[i]);
    }
}

int fibonacci (int x) {
    if (fb[x-1] == -1) {
        fb[x-1] = fibonacci(x-1) + fibonacci(x-2);
    }
    return fb[x-1];
}