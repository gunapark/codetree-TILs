#include <iostream>
using namespace std;

int main() {
    int n, b;
    int cnt = 0;
    int arr[10]={-1};
    cin >> n >> b;
    while(true){
        if(n<b){
            arr[cnt++]=n;
            break;
        }
        arr[cnt++] = n%b;
        n/=b;
    }

    for(int i=cnt-1;i>=0;i--){
        cout << arr[i];
    }
    return 0;
}