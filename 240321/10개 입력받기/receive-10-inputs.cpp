#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int a;
    int sum=0;

    for(int i=0;i<10;i++){
        int n;
        cin >> n;
        if(n==0)
            break;
        arr[i] = n;
        a=i;

    }
    for(int i=0;i<=a;i++){
        sum += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum)/(a+1);

    return 0;
}