
#include <stdio.h>



int soma(int num, int num2){
    num+=num2;
    return num;
}

int main(){
    int a, b;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("\n\n%d",soma(a,b));
}
