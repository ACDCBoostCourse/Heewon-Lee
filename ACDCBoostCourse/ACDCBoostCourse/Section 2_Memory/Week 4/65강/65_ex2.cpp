				/* 배열의 동적 할당 */
#include <iostream>
using namespace std;

int main() {
	int *arr;	// &arr[0]=arr
	int len;

	cout << "동적할당할 배열 길이 입력 : ";
	cin >> len;

	arr = new int[len];

	for (int i = 0; i < len; i++) {
		arr[i] = len - i;
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;	// delete arr 할 경우 arr[0]만 해제됨
}