#include <stdio.h>
#include <iostream>

/*다이아몬드 출력하기 */
using namespace std;

int main()
{
    int num=6;

    for(int i=0; i<num;i++)
    {
        for (int j=num-1;j>i;j--) //다이아몬드 아래부분
        {
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++) //1,3,5,7,9.. 2차이로 다이아몬드 쌓기,
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
        for (int j=2*num-1;j>2*i;j--) //9,7,5,3,1  단위로 감소,, 다이아몬드 아랫부분
        {
            cout << "*";
        }
        cout << "\n";
    }
}