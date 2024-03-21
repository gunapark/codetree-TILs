#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0,sum1=0,cnt=0;

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    for(int i=1;i<10;i+=2){
        sum += arr[i];
    }
    for(int i=0;i<10;i++){
        if((i+1)%3==0){
            sum1 += arr[i];
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum1)/cnt;

    return 0;
}