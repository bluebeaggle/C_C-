#include <stdio.h>

int main(void) {

	int choice;
	printf("1 : 입력한 숫자가 행운의 숫자?\n");
	printf("2 : 숫자 나눗셈\n");
	printf("3 : 점수에 따른 합격/불합격 통보 \n");
	printf("4 : 크기 비교하기 \n");
	printf("5 : 0 일때만 실행되는 !p 구문 \n");
	printf("작동할 프로그램을 선택하시오: ");
	
	scanf("%d", &choice);

	switch (choice) {
		case 1:
			int a;
			printf("입력하고 싶은 숫자를 입력하시오: ");
			scanf("%d", &a);
			if (a ==7) {
				printf("행운의 숫자\n");
			}
			break;
		case 2: 
			double i, j;	
			printf("나누고싶은 숫자를 입력하시오: ");
			scanf("%lf %lf", &i, &j);

			if (j==0) {
				printf("0으로 나눌 수 없습니다\n");
				break;
			}
		 	printf("%f 를 %f로 나눈 결과는: %f \n",i,j, i/j);
			break;

		case 3:
			int score;
			printf("당신의 점수를 입력하세요: ");
			scanf("%d", &score);

			if (score >= 90) printf("당신은 합격입니다.\n");
			if (score < 90) printf("당신은 불합격입니다. \n");
			break;
		case 4:
			int i_size, j_size ;
			printf("크기를 비교할 두 수를 입력해주세요: ");
			scanf("%d %d", &i_size, &j_size);

			if (i_size > j_size) printf("%d 는 %d보다 큽니다 \n", i_size,j_size);
			else if (i_size < j_size) printf("%d 는 %d보다 작습니다.\n", i_size, j_size);
			else if (i_size == j_size) printf("%d 는 %d는 같습니다,\n",i_size,j_size);
		       	break;	

		case 5 :
			int p = 0;
			printf(" p의 값을 입력하시오 : ");
			scanf("%d", &p );
			if (!p) printf("p == 0 입니다\n");
			else printf("p !=0 입니다.\n");
			break;
	return 0;
	}
}
