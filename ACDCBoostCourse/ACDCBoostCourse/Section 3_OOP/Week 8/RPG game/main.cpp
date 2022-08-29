#include "components.h"

int main() {
	Warrior Warrior("전사", 10, 1000, 30);
	Magician Magician("마법사", 20, 2000, 50);
	Archer Archer("궁수", 30, 3000, 70);

	Manager Manager("시스템");

	Item warrior1("검1", 10);
	Item warrior2("검2", 25);
	Item magician1("마법1", 20);
	Item magician2("마법2", 35);
	Item archer1("활1", 30);
	Item archer2("활2", 45);

	Warrior.attack();
	Warrior.defend();
	Magician.attack();
	Magician.defend();
	Archer.attack();
	Archer.defend();
	cout << endl;

	cout << 
		Warrior.combinate(warrior1, warrior2).GetPerformance() << endl;
	
	cout << endl;
	Manager.openBurningEvent();
	cout <<
		Magician.combinate(magician1, magician2).GetPerformance() << endl;

	cout << endl;
	Manager.closeBurningEvent();
	cout << 
		Archer.combinate(archer1, archer2).GetPerformance() << endl;
}