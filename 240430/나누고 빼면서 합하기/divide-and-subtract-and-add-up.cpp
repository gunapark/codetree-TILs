#include <iostream>
using namespace std;

int ssibal(int &m, int *arr){
    int sum=arr[m-1];
    while(m!=1){
        if(m%2!=0){
            m--;
            sum += arr[m-1];
        } else{
            m = m/2;
            sum += arr[m-1];
        }
    }
    return sum;
}



int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << ssibal(m, arr);
    return 0;
}