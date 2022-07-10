#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
class Dot
{
    private:
        T x;
        T y;
    public:
        Dot(T _x, T _y) : x(_x) , y(_y)
        { }

        void Show() const
        {
            cout << '[' << x << "," << y << ']' << endl;
        }
};

int main(void) {
    
    Dot<int> dot1(1,2);
    Dot<double> dot2(1.5 , 2.5);

    dot1.Show();
    dot2.Show();

    return 0;
}
