#include <iostream>
#include <iterator>
#include <stdio.h>
#include <set>

using namespace std;

int main(void)
{
    int arr[5] = {10,20,30,40,50};
    set<int> st(arr, arr+3);
    cout << "현재 모든 집합의 요소는 다음과 같습니다 :" << endl;
    copy(st.begin(), st.end(), ostream_iterator<int>(cout, " ")); // 10,20,30
    cout << endl; 

    st.insert(60);
    st.insert(70);
    st.erase(80);
    cout << "현재 집합의 모든 요소는 다음과 같습니다" << endl;
    copy(st.begin(), st.end(), ostream_iterator<int>(cout, "")); //10,20,30,60,70
    return 0;
}