#include <iostream>
using namespace std;

class String {
public:
	String() {
		strData = NULL;
		len = 0;
	}
	String(const char *str) {
		len = strlen(str);
		strData = new char[len + 1]; //NULL문자 고려해서 +1
		strcpy(strData, str); // 깊은 복사
	}
	~String() {
		delete[] strData;
	}

	char *GetStrData() const {
		return strData;
	}

	int GetLen() const {
		return len;
	}

private:
	char *strData;
	int len;
};

int main() {
	String s;
}