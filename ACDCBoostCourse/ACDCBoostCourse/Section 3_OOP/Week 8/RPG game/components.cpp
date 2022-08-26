// components.h에서 선언한 메서드를 구현.
// class 생성자는 default 생성자로 구현하고,
// 이후 필요에 따라 추가적인 생성자 구현.

#include "components.h"

class User {
public:
	string const name;
	User(string name, int level, int money, int luck) {
		this->level = level;
		this->money = money;
		this->luck = luck;
	}
	virtual void attack() const { return; }
	void defend() { cout << name << " : 방어" << endl; }
	virtual void combinate() const { return; }

private:
	int level;
	int money;
	int luck;
	static bool isBurning;
};

class Warrior : User {
public:
	Warrior(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {
		cout << name << " : 검 휘두르기" << endl;
	}
};
class Magician : User {
public:
	Magician(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {
		cout << name << " : 마법 쓰기" << endl;
	}
};
class Archer : User {
public:
	Archer(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {
		cout << name << " : 활 쏘기" << endl;
	}
};

class Item {
	int P; // performance
	friend User;

	int const performance;
	string const name;

	int getP() const { return P; }
};

class Manager {
	string name;
	friend User;
	void openBurningEvent() {
		bool isBurning = true;
	};
	void closeBurningEvent() {
		bool isBurning = false;
	}
};
