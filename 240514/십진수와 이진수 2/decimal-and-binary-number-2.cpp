#include <iostream>
using namespace std;

int main() {
    int n,cnt=1;
    int ten=0;
    cin >> n;
    while(n>0){
        ten += n%10*cnt;
        cnt *=2;
        n/=10;
    }
    ten *= 17;
    int arr[20];
    cnt=0;

    while(true){
        if(ten<2){
            arr[cnt++]=ten;
            break;
        }
        arr[cnt++]=ten%2;
        ten/=2;
    }
    for(int i=cnt-1;i>=0;i--){
        cout << arr[i];
    }

    return 0;
}