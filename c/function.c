#include <stdio.h>


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




int main(void) {

	int choice ;
	printf("함수를 불러보자!! \n");
	printf("1. Hello!! \n");
	printf("2. 함수 마무리 return 0 할 때 의 값은 ?; \n");
	printf("3. 입력값에 4를 더하는 함수! \n");
	printf("4. 이미 정해진 수에 입력값을 더하는 함수! \n");
	printf("5. 정수를 입력받아 소인수 분해 해드려요! \n");

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
				printf("function 직동 전 \n");
				fact();			
				printf("function 작동 후 \n");
				break;
			}
			

	}




	return 0;

}
