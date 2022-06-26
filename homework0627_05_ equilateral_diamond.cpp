#include <stdio.h>
#include <iostream>

/*다이아몬드 출력하기 */
using namespace std;

int main()
{
    int num=6;

    for(int i=0; i<num;i++)
    {
        for (int j=num-1;j>i;j--)
        {
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=1; i<num; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout << " ";
        }
        for (int j=2*num-1;j>2*i;j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}