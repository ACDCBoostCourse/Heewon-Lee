#ifndef COMPONENTS
#include <iostream>
#include <string>

using namespace std;

class User {
public:
	User(string name, int level, int money, int luck) {}
	string name;
	string Username();

	virtual void attack() {}
	void defend();
	void combinate();
	Item combinate(Item a, Item b);
	
private:
	int level;
	int money;
	int luck;
	static bool isBurning;
	friend class Manager;
};

class Warrior : public User {
public:
	Warrior(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {}
};
class Magician : public User {
public:
	Magician(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {}
};
class Archer : public User {
public:
	Archer(string name, int level, int money, int luck)
		: User(name, level, money, luck) {}
	void attack() {}
};

class Item {
public:
	Item(string name, int performance) {}
	Item() {};
	int GetPerformance();
	Item operator+(Item i);
private:
	int performance;
	string name;
};

class Manager {
public:
	Manager(string name) {}
	void openBurningEvent() {}
	void closeBurningEvent() {}
private:
	string name;
};

#endif