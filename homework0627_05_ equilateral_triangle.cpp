#include <stdio.h>
#include <iostream>

/*정삼각형 출력하기 */
using namespace std;

int main(){
    int n;
    for (int i = 0; i <= 4; i++){ //총 쌓을 별의 단수

        for(int k = i; k <= 5; k++){
        cout << " ";
        }

        for (int j = 1; j <= i*2+1; j++){ //별을 쌓을적에 쌓는 갯수의 차이 1,3,5,7,9.....
            cout << "*";
        }

        cout << "\n";
    }
    cout << "\n";
}
