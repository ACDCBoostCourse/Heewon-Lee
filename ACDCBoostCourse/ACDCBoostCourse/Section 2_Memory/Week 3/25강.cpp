// 25��. �迭�� �����Ϳ��� ����

/* ����1 */
#include <stdio.h>
int main() {
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a�� �� : %d\n", ptr_a);
	printf("ptr_a + 1�� �� : %d\n", ptr_a + 1);
}

/* ����2 */
#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);
		printf("arr + %d = %d\n", i, arr + i);
	}
}

/* ����3 */
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