#include <stdio.h>

int main(void) {

	// sizeof는 크기를 알려주는 연산자
	
	int arr[6] = {1,2,3,4,5,6};

	int *parr = arr;

	printf("sizeof(arr) : %ld \n", sizeof(arr));
	printf("sizeof(parr) : %ld \n", sizeof(parr));

	int brr[2][3] = {{1,2,3},{4,5,6}};
	printf("\n");
	printf("b[2][3] 의 전체 크기 sizeof(brr) : %ld \n", sizeof(brr));
	printf("총 행의 개수 sizeof(brr) / sizeof(brr[0]) : %ld \n", sizeof(brr) / sizeof(brr[0]));
	printf("총 열의 개수 sizeof(brr[0]) / sizeof(brr[0][0] : %ld \n", sizeof(brr[0]) / sizeof(brr[0][0]));





	return 0;
}
