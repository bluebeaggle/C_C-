#include <stdio.h>

int main(void) {

    int a ;
    a = 2;

    printf("%p \n", &a) ;
    
    
    int *p;
    p = &a;

    printf("포인터 p에 들어가 있는 값 : %p \n", p);
    printf("int변수 a가 저장된 주소 : &p \n", &a);

    return 0;
}