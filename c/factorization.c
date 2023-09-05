#include <stdio.h>

int main(void) {

	int N, i, j;
	printf("소인수 분해할 자연수 N을 입력하시오: ");
	scanf("%d", &N);

	for(i=2; i <= N; i++) {
		while (N % i == 0) {
			printf("%d", i);
			N /= i;

			if (N != 1) printf(" * ");
			else printf("\n");
		}
	}
	 










	return 0;
}
