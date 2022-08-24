/* 76강_상속이 필요한 이유(1) */
#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};

class Message { // 부모 클래스 - 공통적인 멤버 관리에 용이
public:
	Message(int sendTime, string sendName) {
		this->sendTime = sendTime;
		this->sendName = sendName;
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }

private:
	int sendTime;
	string sendName;
};

class TextMessage : public Message { // 상속
public:
	TextMessage(int sendTime, string sendName, string text) 
		: Message (sendTime, sendName){
		this->text = text;
	}

	string GetText() const { return text; }

private:
	string text;
};

class ImageMessage : public Message { // 상속
public:
	ImageMessage(int sendTime, string sendName, Image *image) 
		: Message(sendTime, sendName) {
		this->image = image;
	}

	Image *GetImage() const { return image; }

private:
	Image *image;
};

int main() {
	// 두들 : 강아지 사진
	Image *p_dogImage = new Image();
	// 두들 : "안녕"
	TextMessage *hello = new TextMessage(10, "두들", "안녕");
	ImageMessage *dog = new ImageMessage(20, "두들", p_dogImage);

	cout << "보낸 시간 : " << hello->GetSendTime() << endl;
	cout << "보낸 사람 : " << hello->GetSendName() << endl;
	cout << "  내 용   : " << hello->GetText() << endl;
	cout << endl;

	cout << "보낸 시간 : " << dog->GetSendTime() << endl;
	cout << "보낸 사람 : " << dog->GetSendName() << endl;
	cout << "  내 용   : " << (string) * dog->GetImage() << endl;
	cout << endl;

	delete hello;
	delete dog;
	delete p_dogImage;
}