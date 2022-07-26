// 27강. 2차원 배열과 배열 포인터

/* 예제1 */
#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	printf("%d\n", sizeof(arr));		// 24 = 전체 배열
	printf("%d\n", sizeof(arr[0]));		// 12 = 0번째 행
	printf("%d\n", sizeof(arr[0][0]));	// 4 = 0번째 행, 0번째 열

	printf("%d\n", &arr);		
	printf("%d\n", &arr[0]);		
	printf("%d\n", &arr[0][0]);		// 모두 동일한 값 출력
}

/* 예제2 */
#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	int(*ptr)[3] = arr;

	// 1. ptr[i] == arr[i]
	// 2. ptr[i][j] == arr[i][j]
	// ptr == arr

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", ptr[i][j]);
		}
		printf("\n");
	}
}

/* 예제3 */
#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	for (int(*row)[3] = arr; row < arr + 2; row++) {
		for (int *col = *row; col < *row + 3; col++) {
			printf("%d", *col);
		}
		printf("\n");
	}
}