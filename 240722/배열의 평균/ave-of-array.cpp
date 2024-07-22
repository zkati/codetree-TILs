#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    // 가로 평균
    for(int i=0;i<2;i++){
        double sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<fixed;
        cout.precision(1);
        cout<<sum/4<<" ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        double sum=0;
        for(int j=0;j<2;j++){
            sum+=arr[j][i];
        }
        cout<<sum/2<<" ";
    }
    cout<<endl;
     double Sum=0;
     for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            Sum+=arr[i][j];
        }
    }
    cout<<Sum/8;
    return 0;
}