// 24강. 변수 가리키기 (포인터)

/* 예제1 */ 
// 포인터(pointer): 변수의 주소를 저장하는 변수
#include <stdio.h>
int main() {
	int a = 20;

	int *ptr_a;
	ptr_a = &a;

	printf("a의 값 : %d\n", a);
	printf("a의 주소값 : %d\n", &a);
	printf("ptr_a에 저장된 값 : %d\n", ptr_a);
	printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);
}

/* 예제2 */
#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;

	int *ptr;

	ptr = &a;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);

	ptr = &b;
	printf("ptr이 가리키는 변수에 저장된 값 : %d\n", *ptr);
}

/* 예제3 */
#include <stdio.h>
int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	printf("a의 값 : %d\n", a);
	
	*ptr = 20;
	printf("a의 값 : %d\n", a);
}

/* 예제4 */
#include <stdio.h>
int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	int **ptr_ptr;
	ptr_ptr = &ptr;

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("**ptr_ptr = %d\n", **ptr_ptr);
}