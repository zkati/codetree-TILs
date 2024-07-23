#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout<<fixed;
    cout.precision(1);
    double n;
    cin>>n;
    double result = n* 30.48;
    cout<<result;
    return 0;
}