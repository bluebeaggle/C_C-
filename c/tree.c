#include <stdio.h>

int main(void) {


	int iHeight ;

	printf("트리의 높이를 입력하시오 : ");
	scanf("%d", &iHeight);

	// Height
	for (int height=0; height < iHeight; height++) {
		// Space
		int space;
		int star;
		for (space=0; space < iHeight - height -1; space++)
			printf(" ");	
		// Star
		for (star=0; star < 2*height+1; star ++)
			printf("*");
		printf("\n");
	}
	return 0;

}
