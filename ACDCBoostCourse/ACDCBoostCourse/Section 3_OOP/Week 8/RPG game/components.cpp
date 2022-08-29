#include "components.h"
#include <cstdlib>
#include <ctime>

bool User::isBurning = false;

User::User(const string name, int level, int money, int luck) {
	this->name = name;
	this->level = level;
	this->money = money;
	this->luck = luck;
}
string User::Username() { return name; }

void User::defend(){ cout << Username() << " : ���" << endl; }
void Warrior::attack() { cout << Username() << " : �� �ֵθ���" << endl; }
void Magician::attack() { cout << Username() << " : ���� ����" << endl; }
void Archer::attack() { cout << Username() << " : Ȱ ���" << endl; }

int Item::GetPerformance() { return performance; }

Item::Item(string name, int performance) {
	this->name = name;
	this->performance = performance;
}

Item Item::operator+(Item i) {
	Item c;
	c.name = "���� ���� ������";
	c.performance = this->performance + i.performance;
	return c;
}

Item User::combinate(Item a, Item b) {
	int validLuck;
	if (isBurning) {
		validLuck = this->luck + 10;
		cout << "���� �̺�Ʈ ����" << endl;
		if (validLuck > 100) validLuck = 100;
	}
	else {
		validLuck = this->luck;
	}

	int randLuck = 0;
	srand((unsigned int)time(NULL));
	randLuck = rand() % 100;

	if (randLuck < validLuck) {
		cout << "���� ����!" << endl;
		return a + b;
	}
	else {
		cout << "���� ����!" << endl;
		return Item("���� ���� ������", 0);
	}
}

void Manager::openBurningEvent() { User::isBurning = true; }
void Manager::closeBurningEvent() { User::isBurning = false; }

