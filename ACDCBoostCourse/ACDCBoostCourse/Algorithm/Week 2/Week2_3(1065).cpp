#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;		//�ڿ��� N �Է�
	int unit = 0;		
	int ten = 0;			
	int hundred = 0;	
	int count = 0;		//�Ѽ��� ����

	if (N < 100)		//100���� ���� ��� ���� �Ѽ�
		cout << N;		
	else {			
		count = 99;
		for (int i = 100; i <= N; i++) {
			unit = i % 10;
			ten = (i / 10) % 10;
			hundred = i / 100;			
			 //100�̻� N������ �ڿ����� �� �ڸ��� ����

			if ((hundred - ten) == (ten - unit))  count++;				
			 //�� �ڸ��� ���������� ��� �Ѽ��� ���� ����
		}
		cout << count;
	}
}