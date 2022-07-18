// 25강. 배열과 포인터와의 관계

/* 예제1 */
#include <stdio.h>
int main() {
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1);
}

/* 예제2 */
#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);
		printf("arr + %d = %d\n", i, arr + i);
	}
}

/* 예제3 */
#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d", *(arr + i));
	}
	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d", *ptr);
	}
	printf("\n");
}