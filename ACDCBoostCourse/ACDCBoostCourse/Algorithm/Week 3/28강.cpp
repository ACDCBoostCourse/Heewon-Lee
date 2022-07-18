// 28강. 포인터 배열 : 포인터들의 배열
//		 배열 포인터 : 배열을 가리키는 포인터

/* 예제1 */
#include <stdio.h>
int main() {
	int arr[4] = { 1,2,3,4 };
	int *ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
	}

	for (int i = 0; i < 4; i++) {
		printf("%d", *ptr[i]);
	}
	printf("\n");	
}

/* 예제2 */
#include <stdio.h>
int main() {
	char strings[3][10] = { "Hello", "World", "Doodle" };
	char *p_str[3];

	for (int i = 0; i < 3; i++) {
		p_str[i] = strings[i];
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", &strings[i][0]);
		printf("%s\n", p_str[i]);
	}
}