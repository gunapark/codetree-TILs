#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int i;
    for(i=0;i<100;i++){
        int a;
        cin >> a;
        if(a==999 || a== -999){
            break;
        }
        arr[i]=a;
    }
    
    int max = arr[0];
    int min = arr[0];

    for(int j=1;j<i;j++){
        if(arr[j]>max)
            max = arr[j];
        if(arr[j]<min)
            min = arr[j];
    }
    cout << max << " " << min;
    return 0;
}