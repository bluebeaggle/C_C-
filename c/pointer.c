#include <stdio.h>

int main(void) {

    int a ;
    a = 2;

    printf("%p \n", &a) ;
    
    
    int *p;
    p = &a;

    printf("������ p�� �� �ִ� �� : %p \n", p);
    printf("int���� a�� ����� �ּ� : &p \n", &a);

    return 0;
}