#include <iostream>
#include "BasicSyntax.h"

int main()
{
    CarSUV Carnival;

    int _Number = 0;
    std::cin >> _Number;

    // 메소드 호출
    Carnival.CarPrint();
    Carnival.SetNumber(_Number);
    std::cout << Carnival.GetNumber() << std::endl;
    Carnival.CarPrint();

    // 클래스 객체 변수 동적 생성
    CarSUV* Sonata = new CarSUV;

    // 동적 생성된 객체 메소드 호출
    Sonata->CarPrint();

    Phone IPhone('W', 'A', 123);
    std::cout << IPhone.Get('C') << std::endl;
    std::cout << IPhone.Get('B') << std::endl;
}

Phone::Phone(char _Color, char _Brand, int _ModelNumber) {
    Color = _Color;
    Brand = _Brand;
    ModelNumber = _ModelNumber;
}

Phone::~Phone() {
    std::cout << "Bye" << std::endl;
}

char Phone::Get(char Item) {
    switch (Item) {
    case 'C':
        return Color;
        break;
    case 'B':
        return Brand;
        break;

    }
}

CarSUV::CarSUV() { // 생성자
    std::cout << "Constructor" << std::endl;
}

CarSUV::~CarSUV() { // 소멸자
    std::cout << "Destructor" << std::endl;
}

void CarSUV::CarPrint() {
    std::cout << Number << std::endl; // .은 멤버라는 의미
    std::cout << Brand << std::endl;
    std::cout << Colour << std::endl;
    std::cout << Door << std::endl;
    std::cout << Seat << std::endl;
}