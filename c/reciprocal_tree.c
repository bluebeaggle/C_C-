#include <stdio.h>

int main(void) {


	int nHeight;
	printf("높이를 입력하시오: ");
	scanf("%d", &nHeight);

	for (int height=0; height < nHeight; height++) {
		int nStar;
		int nSpace;
			
		for (nSpace=0; nSpace < height; nSpace++)
			printf(" ");
		
		for (nStar=0; nStar <2*nHeight-2*nSpace-1; nStar++)
			printf("*");
		
		printf("\n");


	}

	return 0;
}
