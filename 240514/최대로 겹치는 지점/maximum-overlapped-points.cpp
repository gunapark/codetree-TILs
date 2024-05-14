#include <iostream>
using namespace std;

int main() {
    int n;
    int max=0;
    cin >> n;
    int arr[100]={};

    for(int i=0;i<n;i++){
        int start, end;
        cin >> start >> end;
        start--;
        end--;
        for(int i=start;i<=end;i++){
            arr[i]++;
        }
    }
    
    for(int i=0;i<100;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout << max;
    return 0;
}