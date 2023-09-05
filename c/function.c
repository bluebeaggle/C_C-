#include <stdio.h>


int  print_hello();
int return_number();
int plus_4();
int plus_number(int number);
int fact();
int swap(int *a, int *b);
int array_function(int *parr);
int second_dimension_array_function(int (*parr)[10]);

int main(void) {

	int choice ;
	printf("함수를 불러보자!! \n");
	printf("1. Hello!! \n");
	printf("2. 함수 마무리 return 0 할 때 의 값은 ?; \n");
	printf("3. 입력값에 4를 더하는 함수! \n");
	printf("4. 이미 정해진 수에 입력값을 더하는 함수! \n");
	printf("5. 정수를 입력받아 소인수 분해 해드려요! \n");
	printf("6. Swap 해드려요! Pointer를 사용한 Swap! \n");
	printf("7. 연속된 배열 정수에 1씩 더하기! \n");
	printf("8. 2차원 배열10개에 정수 1씩 더하기!! \n");

	printf("출력하고 싶은 함수를 입력하시오 : ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1 : {
				 print_hello();
				 break;
			 }
		case 2 : {
				 printf("함수 return 0 할때 반환값을 표기하기 : %d \n", return_number());
				 printf("정말 0이 반환되기에, 0을 변수에 넣으면 되는군!! \n");
				 printf("호랑이는 죽어서 가죽을 남기고, 함수는 죽어서 리턴값을 남긴다!!! \n");
				 break;
			 }
		case 3: {
				printf("입력값에 4를 더하여 %d를 반환하였습니다. \n", plus_4());
				break;
			}
		case 4: {
				int a = 10;
				printf("입력값에 10을 더하여 %d가 반횐되는  함수 였습니다. \n ", plus_number(a));
				break;
			}
		case 5: {
				fact();	
				break;
			}
		case 6: {
			
				int a, b;
				printf("정수 2개를 입력하시오: " );
				scanf("%d %d", &a, &b);
				swap(&a, &b);
				printf("%d, %d 로 변경되었습니다. \n \n", a,b);
				break;

			}
		case 7: {
				int arr[3];
				int i;
				printf("정수 3개를 입력하시오: ");
				for(i=0; i<3; i++) scanf("%d", &arr[i]);
				array_function(arr);
				printf("배열의 각 원소 : %d %d %d\n", arr[0], arr[1], arr[2]);
				break;
			}
		case 8: {
				int arr[2][10];
				for(int i=0; i<2; i++)
					printf("정수 10개를 입력하시오 : " );
					for(int j=0; j<10; j++)
						scanf("%d", &arr[i][j]);
				second_dimension_array_function(arr);
				for(int i=0; i<2; i++)
                                        for(int j=0; j<10; j++)
                                                printf("arr[%d][%d] = %d \n", i,j, arr[i][j]);
				break;
			}
			

	}




	return 0;
}


int  print_hello() {
        printf("Hello!! \n");
        return 0;
}

int return_number() {return 0;}

int plus_4() {
        int input_number ;

        printf("정수를 입력하시오 : ");
        scanf("%d", &input_number);
        input_number += 4;
        return input_number;
}

int plus_number(int number) {
        int input_number;

        printf("정수를 입력하시오 : ");
        scanf("%d", &input_number);
        input_number += number;

        return input_number;
}
int fact() {
        int n, i;
        printf("정수를 입력하시오 : ");
        scanf("%d", &n);

        for(i=2; i<=n; i++) {
                while(n % i ==0) {
                        printf("%d", i);
                        n /= i;

                        if(n != 1) printf(" * ");
                        else printf("\n \n");
                }
        }
        return 0;
}

int swap(int *a, int *b) {

        int temp = *a;
        *a = *b;
        *b = temp;

        return 0;
}

int array_function(int *parr) {
	int i;
	for (i=0; i < 3; i++) {
		parr[i] ++ ;
	}
	return 0;
}

int second_dimension_array_function(int (*parr)[10]) {

	for(int i=0; i < 2; i++){ 
		for(int j=0; j <10; j ++){
			parr[i][j] += 1;
		}
	}
	return 0;
}
