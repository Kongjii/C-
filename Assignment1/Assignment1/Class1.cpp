#include "Class1.h"
#include <iostream>

Number::Number() {
	std::cout << "양수 입력 : ";
	std::cin >> n;
	
	n = n;
}

Number::~Number() {

}

void Number::PrintEven() {
	std::cout << evensum << std::endl;
}
void Number::PrintOdd() {
	std::cout << oddsum << std::endl;
}
void Number::PrintError() {
	std::cout << "양수가 아닙니다." << std::endl;
}

void Number::Result() {
	if (n % 2 == 1) {
		for (int i = 1; i <= n; i+=2) {
			evensum += i;
		}
		PrintEven();
	}
	else if (n % 2 == 0) {
		for (int i = 2; i <= n; i+=2) {
			oddsum += i;
		}
		PrintOdd();
	}
	else
		PrintError();
}