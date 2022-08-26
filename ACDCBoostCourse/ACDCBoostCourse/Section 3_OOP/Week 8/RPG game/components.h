// 클래스 선언
// 메서드는 구현하지 않고 선언만

#ifndef COMPONENTS
#include <iostream>
#include <string>

using namespace std;

class User {
public:
	string const name;
	User(string name, int level, int money, int luck) {}
	virtual void attack() {}
	void defend() {}
	virtual void combinate() {}

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
	void attack() {}
};
class Magician : User {
public:
	Magician(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {}
};
class Archer : User {
public:
	Archer(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {}
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
	void openBurningEvent() {};
	void closeBurningEvent() {}
};

#endif