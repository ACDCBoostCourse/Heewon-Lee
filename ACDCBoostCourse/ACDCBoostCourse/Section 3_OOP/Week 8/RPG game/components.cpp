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

void User::defend(){ cout << Username() << " : 방어" << endl; }
void Warrior::attack() { cout << Username() << " : 검 휘두르기" << endl; }
void Magician::attack() { cout << Username() << " : 마법 쓰기" << endl; }
void Archer::attack() { cout << Username() << " : 활 쏘기" << endl; }

int Item::GetPerformance() { return performance; }

Item::Item(string name, int performance) {
	this->name = name;
	this->performance = performance;
}

Item Item::operator+(Item i) {
	Item c;
	c.name = "조합 성공 아이템";
	c.performance = this->performance + i.performance;
	return c;
}

Item User::combinate(Item a, Item b) {
	int validLuck;
	if (isBurning) {
		validLuck = this->luck + 10;
		cout << "버닝 이벤트 적용" << endl;
		if (validLuck > 100) validLuck = 100;
	}
	else {
		validLuck = this->luck;
	}

	int randLuck = 0;
	srand((unsigned int)time(NULL));
	randLuck = rand() % 100;

	if (randLuck < validLuck) {
		cout << "조합 성공!" << endl;
		return a + b;
	}
	else {
		cout << "조합 실패!" << endl;
		return Item("조합 실패 아이템", 0);
	}
}

void Manager::openBurningEvent() { User::isBurning = true; }
void Manager::closeBurningEvent() { User::isBurning = false; }

