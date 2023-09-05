#include <stdio.h>

int main(void) {

    int a ;
    a = 2;

    int *p ;

    p = &a;

    printf("1. %d = a \n",a);
    printf("2. %p = &a \n", &a);
    printf("3. %p  = p \n", p);
    printf("4. %p = &p \n", &p);
    printf("5. %d = *p \n", *p);

	
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *parr = arr;
    int sum = 0;

    while(parr - arr <=9 ) {
	    sum += (*parr);
	    parr++;
    }
    printf("\n");
    printf("arr[10]'s sum = %d \n", sum);

    int b;
    int *pb;
    int **ppb;

    pb = &b;
    ppb = &pb;

    b = 3;

    printf("\n");
    printf("pointer's pointer \n \n");
    printf("1. b = %d \n", b);
    printf("2. *pb = %d \n", *pb);
    printf("3. **ppb = %d \n", **ppb);
    printf("\n");
    printf("4. &b = %p \n", &b);
    printf("5. pb = %p \n", pb);
    printf("6. *ppb = %p \n", *ppb);
    printf("\n");
    printf("7. &pb = %p \n", &pb);
    printf("8. ppb = %p \n", ppb);
    printf("\n");

    printf("\n");
    int brr[2][3] = {{1,2,3},{4,5,6}};
    int (*pbrr)[3] ;

    pbrr = brr;

    printf("pbrr[1][2] : %d, brr[1][2] : %d \n", pbrr[1][2], brr[1][2]);


    printf("\n function pointer \n");
    int max(int a, int b){
	    if (a>b) return a;
	    else return b;
    }
    int (*pmax)(int, int) = max;
    printf("max function's address = %p \n", &max);
    printf("pmax = %p \n", *pmax);
    printf("pmax function's address = %p \n", &pmax);






    return 0;
}
