#include <stdio.h>
#define TEXT "Welcome to C Programming!!\n"  



int main(void) {
    printf(TEXT);
    printf("Hello World !!! \n");
    printf("Hello Ubuntu !!!\n");

    //����
    int c;
    c = 127;

    printf("a�� ���� :%d \n", c);
    printf("a �� ���� %d ������ %o �Դϴ�. \n", 8, c);
    printf("a �� ���� %d ������ %d �Դϴ�. \n", 10, c);
    printf("a �� ���� %d ������ %x �Դϴ�. \n", 16, c);

    //�Ǽ�
    //float ���� �� f�� ���̸� double�� �ƴ� float ���� Ȯ���ϰ� ǥ������
    float a = 3.141592f;
    double b = 3.141592;
    printf("a : %f \n", a);
    printf("b : %f \n", b);










    return 0;
}