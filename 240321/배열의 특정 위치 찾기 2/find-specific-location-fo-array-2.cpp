#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum_0=0, sum_1=0;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=0;i<10;i++){
        if((i+1)%2==0){
            sum_0+=arr[i];
        } else
            sum_1+=arr[i];
    }
    if(sum_0>=sum_1)
        cout << sum_0-sum_1;
    else
        cout << sum_1-sum_0;
    
    return 0;
}