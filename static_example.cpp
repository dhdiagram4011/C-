#include <iostream>

using std::cout;

class Point {
    int x;
    int y;
    static int count; //선언
public:
    Point() { cout << ++count; }
    ~Point() { cout << --count; }

    void print()
    {
        cout << "hellow world";
    }
};
int Point::count = 0; //정의
int main()
{
    Point p1, p2, p3; //객체가 만들어 질적마다 x,y는 계속 만들어짐
    p1.print();
    return 0;
}


