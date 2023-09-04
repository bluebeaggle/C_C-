#include <stdio.h>

int main(void) {


	int nFirst = 1;
	int nSecond = 1;
	int nNumber ;
	int sum = 0;
	int nN;

	printf("피보나치 수열의 짝수 항들의 합을 구하는 프로그램입니다.\n");
	printf("피보나치 수열의 N번째 항을 입력하시오: ");
	scanf("%d", &nN);
	
	if (nN==0)                         printf("0번째 합은 없습니다.\n");
	else if (nN==1)                    printf("%d번째 항은 = %d \n",nN, nFirst);
	else if (nN==2)                    printf("%d번째 항은 = %d \n",nN, nSecond);
	else {
		for (int i = 2; i < nN; i++) {
			nNumber = nFirst + nSecond;
	
			nFirst = nSecond;
			nSecond = nNumber;
		
			if (i!=2 && i%2==0) sum += nNumber;
		}	
		printf("%d번째 항은 = %d \n",nN,nNumber);
		printf("%d번째 항까지 짝수번째들의 합은 = %d \n", nN, sum);
	}


	return 0;

}
