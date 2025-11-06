#include"Game.h"

int main() {
	Prince prince;
	prince.input();

	int numGate;
	cout << "Number gate: ";
	cin >> numGate;

	FactoryParser factory;
	for (int i = 0; i < numGate; i++) {
		cout << "********** The Prince Rescues the Princess **********" << endl << endl;
		cout << "1. Business Gate" << endl;
		cout << "2. Academic Gate " << endl;
		cout << "3. Power Gate" << endl;
		cout << "*****************************************************" << endl << endl;
		cout << "Enter number gate: ";
		int num;
		cin >> num;;
		Game* game = factory.create(num);
		game->input();
		system("cls");

		if (num == 1) {
			prince.setMoney(prince.getMoney() - game->getCondition());
			if (prince.getMoney() < 0) {
				cout << "The Prince failed in Business gate" << endl;
				break;
			}
			else {
				cout << "The Price passed Business gate" << endl;
				cout << "Infor[Money, Interlegence, Power]: " << "[" << prince.getMoney() << ", "
					<< prince.getIntelligence() << ", " << prince.getPower() << "]" << endl;
			}
			system("clc");
		}
		else if (num == 2) {
			if (prince.getIntelligence() < game->getCondition()) {
				cout << "The Prince failed in Academic gate" << endl;
				break;
			}
			else {
				cout << "The Price passed Academic gate" << endl;
				cout << "Infor[Money, Interlegence, Power]: " << "[" << prince.getMoney() << ", "
					<< prince.getIntelligence() << ", " << prince.getPower() << "]" << endl;
			}
			system("clc");
		}
		else if (num == 3) {
			prince.setPower(prince.getPower() - game->getCondition());
			if (prince.getPower() < 0) {
				cout << "The Prince failed in Power gate" << endl;
				break;
			}
			else {
				cout << "The Price passed Power gate" << endl;
				cout << "Infor[Money, Interlegence, Power]: " << "[" << prince.getMoney() << ", "
					<< prince.getIntelligence() << ", " << prince.getPower() << "]" << endl;
			}
			system("clc");
		}
		system("cls");
	}

	if (prince.getMoney() >= 0 && prince.getPower() >= 0 && prince.getIntelligence() >= 0) {
		cout << "The Prince Rescued the Princess" << endl;
	}
}