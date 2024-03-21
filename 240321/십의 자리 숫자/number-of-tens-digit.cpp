#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[9]={0,0,0,0,0,0,0,0,0};
    int i=0;
    while(true){
        int a;
        int num_of_10;
        cin >> a;
        if(a==0)
            break;
        num_of_10=(a/10)%10;
        arr[num_of_10-1]++;
    }
    for(int i=0;i<9;i++){
        cout << i+1 << " - " << arr[i] << endl;
    }
    return 0;
}