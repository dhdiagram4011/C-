#include <stdio.h>
#include <iostream>

/*정삼각형 출력하기 */
using namespace std;

int main(){
    int n;
    for (int i = 0; i <= 4; i++){ //총 쌓을 별의 갯수

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


//int main(){
//   int n;
//    for (int i = 0; i < n; i++){ //정삼각형의 총 줄 수
//        for (int j = 1; j<n; j++){
//            cout << " ";
//       }
//        for (int k = 0; k <= i*2+1; k++){ //+1을 하면 별의 갯수가 한개씩 추가됨
//            cout << "* ";
//       }
//        cout << "\n"; //정삼각형을 만들기 위한 줄바꿈
//    }
//    cout << "\n";
//}