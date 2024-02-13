/*
    class ���赵 ���� => class ���� Ÿ���� ����

    * ���� ���� : ������Ƽ/�޼ҵ忡 ���� ���� ����
        - public : ���� - Ŭ���� �ٱ� ��ġ���� ���� ����
        - private : ���� - Ŭ���� ���� ��ġ������ ���� ����
        - protected : ��� ���� - ��ӹ��� Ŭ�������� ���� ����
        - Ű���带 ������� ������ private�� ����Ʈ

        - ������Ƽ�� Ŭ���� �ܺο��� �������� ���ϰ� �ϴ� ��찡 �Ϲ���
        - ������Ƽ�� private ���·� ����
        - ������Ƽ�� �����ϴ� ���� �޼ҵ� �ʿ�
        - Ŭ���� �ܺο����� �޼ҵ常 ��� - �޼ҵ�� public ���� ����

    * Set/Get �޼ҵ�
        - Set : Ŭ���� ���� ������Ƽ�� �����͸� ����
        - Get : ������Ƽ�� �����͸� �о��
*/

class CarSUV {
public: // public �Ʒ��� ��� public
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
            std::cout << "�߸��Է��߽��ϴ�.";
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
