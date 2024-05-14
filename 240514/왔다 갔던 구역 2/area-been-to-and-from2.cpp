#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, start;
    cin >> n;
    int arr[1000]={};
    start = 1000/2;

    for(int i=0;i<n;i++){
        int x;
        char op;
        cin >> x >> op;
        if(op=='L'){
            for(int i=0;i<x;i++){
                arr[start-1-i]++;
            }
            start-=x;
        } else{
            for(int i=0;i<x;i++){
                arr[start+i]++;
            }
            start+=x;
        }
    }
    int cnt=0;
    for(int i=0;i<1000;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}