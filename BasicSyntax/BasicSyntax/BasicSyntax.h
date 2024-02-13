/*
    class 설계도 생성 => class 변수 타입을 생성

    * 정보 은닉 : 프로퍼티/메소드에 접근 권한 설정
        - public : 공용 - 클래스 바깥 위치에서 접근 가능
        - private : 전용 - 클래스 내부 위치에서만 접근 가능
        - protected : 상속 전용 - 상속받은 클래스에서 접근 가능
        - 키워드를 사용하지 않으면 private이 디폴트

        - 프로퍼티는 클래스 외부에서 접근하지 못하게 하는 경우가 일반적
        - 프로퍼티는 private 상태로 설정
        - 프로퍼티에 접근하는 내부 메소드 필요
        - 클래스 외부에서는 메소드만 사용 - 메소드는 public 상태 설정

    * Set/Get 메소드
        - Set : 클래스 내부 프로퍼티의 데이터를 변경
        - Get : 프로퍼티의 데이터를 읽어옴
*/

class CarSUV {
public: // public 아래는 모두 public
    int Number = 1234;
    char Brand = 'A';
    char Colour = 'R';
    int Door = 5;
    int Seat = 7;

public:
    CarSUV();
    ~CarSUV();

public:
    void SetNumber(int _Number) {
        if (_Number >= 9999) {
            std::cout << "잘못입력했습니다.";
        }
        else {
            Number = _Number;
        }
    }

    int GetNumber() {
        return Number;
    }

    void CarPrint();
};

class Phone {
private:
    char Color;
    char Brand;
    int ModelNumber;

public:
    Phone(char _Color, char _Brand, int _ModelNumber);
    ~Phone();
    char Get(char Item);
};
