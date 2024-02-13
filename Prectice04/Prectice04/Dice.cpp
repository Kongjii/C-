#include "Dice.h"
#include <iostream>

Dice::Dice() {
	std::cout << "첫 번째 주사위 눈 값 입력 : ";
	std::cin >> Dice1;
	std::cout << "두 번째 주사위 눈 값 입력 : ";
	std::cin >> Dice2;
	std::cout << "세 번째 주사위 눈 값 입력 : ";
	std::cin >> Dice3;

	this->Dice1 = Dice1;
	this->Dice2 = Dice2;
	this->Dice3 = Dice3;
	this->Max = 0;
}

Dice::~Dice() {

}
void Dice::PrintEqualThree() {
	std::cout << 10000 + Dice1 * 1000 << std::endl;
}
void Dice::PrintEqualTwo() {
	std::cout << 1000 + Dice1 * 100 << std::endl;
}
void Dice::PrintDifferent() {
	std::cout << Max * 100 << std::endl;
}
void Dice::Dicision() {
	if (this->Dice1 == this->Dice2 && this->Dice2 == this->Dice3) {
		PrintEqualThree();
	}
	else if (this->Dice1 == this->Dice2) {
		PrintEqualTwo();
	}
	else if (this->Dice2 == this->Dice3) {
		PrintEqualTwo();
	}
	else if (this->Dice3 == this->Dice1) {
		PrintEqualTwo();
	}
	else {
		if (this->Max < this->Dice1) {
			this->Max = this->Dice1;
		}
		if (this->Max < this->Dice2) {
			this->Max = this->Dice2;
		}
		if (this->Max < this->Dice3) {
			this->Max = this->Dice3;
		}

		PrintDifferent();
	}
}