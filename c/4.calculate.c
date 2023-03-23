#include <stdio.h>

int main(void) {
    int a,b;
    a = 10;
    b=3;
    printf("a+b = %d \n",a+b);
    printf("a-b = %d \n",a-b);
    printf("a*b = %d \n",a*b);
    // int / int = int
    // int / int = Not float
    printf("a/b = %d \n",a/b);
    printf("a%%b = %d \n",a%b);
    return 0;
}