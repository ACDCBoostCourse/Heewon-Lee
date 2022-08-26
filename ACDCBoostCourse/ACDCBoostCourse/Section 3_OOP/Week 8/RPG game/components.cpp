// components.h���� ������ �޼��带 ����.
// class �����ڴ� default �����ڷ� �����ϰ�,
// ���� �ʿ信 ���� �߰����� ������ ����.

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
	void defend() { cout << name << " : ���" << endl; }
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
		cout << name << " : �� �ֵθ���" << endl;
	}
};
class Magician : User {
public:
	Magician(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {
		cout << name << " : ���� ����" << endl;
	}
};
class Archer : User {
public:
	Archer(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {
		cout << name << " : Ȱ ���" << endl;
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
