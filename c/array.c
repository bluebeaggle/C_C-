#include <stdio.h>

int main(void) {

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	printf("arr[3][3] = {1,2,3,4,5,6,7,8,9} 을 출력합니다 \n");
    for (int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
            printf("array[%d][%d] = %d \n", i,j,arr[i][j]);
        }
    }

    int Arr[10] = {1,2,3,4,5,6,7,8,10,};
    printf("Arr[2] = %d \n", Arr[2]);

    // 소수 찾기
    printf("\n");
    printf("소수 찾기\n");

    int guess = 5;
    int prime[1000];

    int index = 1;
    int i, ok;

    prime[0] = 2;
    prime[1] = 3;

    for(;;) {
	    ok = 0;
	    for (i=0; i <= index; i++) {
		    if (guess % prime[i] != 0)	ok++;
		    else break;
		}
	    if (ok == (index+1)) {
		    index ++;
		    prime[index] = guess;
		    printf("소수 %d \n", prime[index]);
		    if (index == 999) break;
	    }
	guess += 2;
	}
	



return 0;
}
