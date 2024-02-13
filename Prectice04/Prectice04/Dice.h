#pragma once
class Dice {
    int Dice1;
    int Dice2;
    int Dice3;
    int Max;

public:
    Dice();
    ~Dice();

    void PrintEqualThree();
    void PrintEqualTwo();
    void PrintDifferent();
    void Dicision();
};