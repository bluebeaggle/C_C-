#include <stdio.h>
#define TEXT "Welcome to C Programming!!\n"  



int main(void) {
    printf(TEXT);
    printf("Hello World !!! \n");
    printf("Hello Ubuntu !!!\n");

    //변수
    int c;
    c = 127;

    printf("a의 값은 :%d \n", c);
    printf("a 의 값은 %d 진수로 %o 입니다. \n", 8, c);
    printf("a 의 값은 %d 진수로 %d 입니다. \n", 10, c);
    printf("a 의 값은 %d 진수로 %x 입니다. \n", 16, c);

    //실수
    //float 변수 뒤 f를 붙이면 double이 아닌 float 형을 확실하게 표현해줌
    float a = 3.141592f;
    double b = 3.141592;
    printf("a : %f \n", a);
    printf("b : %f \n", b);










    return 0;
}