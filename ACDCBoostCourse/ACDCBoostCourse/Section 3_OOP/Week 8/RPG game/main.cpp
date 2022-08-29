#include "components.h"

int main() {
	Warrior Warrior("����", 10, 1000, 30);
	Magician Magician("������", 20, 2000, 50);
	Archer Archer("�ü�", 30, 3000, 70);

	Manager Manager("�ý���");

	Item warrior1("��1", 10);
	Item warrior2("��2", 25);
	Item magician1("����1", 20);
	Item magician2("����2", 35);
	Item archer1("Ȱ1", 30);
	Item archer2("Ȱ2", 45);

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