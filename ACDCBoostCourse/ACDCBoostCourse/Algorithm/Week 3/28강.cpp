// 28��. ������ �迭 : �����͵��� �迭
//		 �迭 ������ : �迭�� ����Ű�� ������

/* ����1 */
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

/* ����2 */
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