/* 79강_상속이 필요한 이유(2) */
#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};

class Message {
public:
	Message(int sendTime, string sendName)
		: sendTime(sendTime), sendName(sendName) {}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	virtual string GetContent() const { return ""; } // 가상함수

private:
	int sendTime;
	string sendName;
};

class TextMessage : public Message {
public:
	TextMessage(int sendTime, string sendName, string text)
		: Message(sendTime, sendName), text(text) {}

	string GetText() const { return text; }
	string GetContent() const { return text; } // 오버라이딩
private:
	string text;
};

class ImageMessage : public Message {
public:
	ImageMessage(int sendTime, string sendName, Image* image)
		: Message(sendTime, sendName), p_image(image) {}

	Image* GetImage() const { return p_image; }
	string GetContent() const { return (string)*p_image; } // 오버라이딩
private:
	Image* p_image;
};

/* 두개의 함수로 표현
void printMessage(TextMessage *m) { 
	cout << "보낸 시간 : " << m->GetSendTime() << endl;
	cout << "보낸 사람 : " << m->GetSendName() << endl;
	cout << "  내 용   : " << m->GetText() << endl;
	cout << endl;
}
void printMessage(ImageMessage *m) {
	cout << "보낸 시간 : " << m->GetSendTime() << endl;
	cout << "보낸 사람 : " << m->GetSendName() << endl;
	cout << "  내 용   : " << (string)*m->GetImage() << endl;
	cout << endl;
}*/

/* 하나의 함수로 표현
void printMessage(Message *m) { // 부모 클래스의 포인터
	cout << "보낸 시간 : " << m->GetSendTime() << endl;
	cout << "보낸 사람 : " << m->GetSendName() << endl;
	cout << "  내 용   : " << m->GetContent() << endl;
	cout << endl;
}*/

// 레퍼런스로 표현
void printMessage(const Message& m) { 
	cout << "보낸 시간 : " << m.GetSendTime() << endl;
	cout << "보낸 사람 : " << m.GetSendName() << endl;
	cout << "  내 용   : " << m.GetContent() << endl;
	cout << endl;
}


int main() {
	Image *p_dogImage = new Image();

	/*
	TextMessage *hello = new TextMessage(10, "두들", "안녕");
	ImageMessage *dog = new ImageMessage(20, "두들", p_dogImage);
	*/

	Message *messages[] = {
		new TextMessage(10, "두들", "안녕"),
		new TextMessage(10, "두들", "안녕"),
		new TextMessage(10, "두들", "안녕"),
		new ImageMessage(10, "두들", p_dogImage)
	};

	/* 
	1. printMessage(Message *m)
	printMessage(hello);
	printMessage(dog);

	2. printMessage(const Message &m)
	printMessage(*hello);
	printMessage(*dog);
	*/

	for (Message* m : messages) {
		printMessage(*m);
	}
	
	/*
	for (int i = 0; i < 4; i++) {
		printMessage(*messages[i]);
	}*/

	delete p_dogImage;
}