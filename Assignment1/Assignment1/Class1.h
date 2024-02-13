#pragma once
class Number {
	int n;
	int evensum = 0;
	int oddsum = 0;

public:
	Number();
	~Number();

	void PrintEven();
	void PrintOdd();
	void PrintError();
	void Result();
};