#include <iostream>
using namespace std;
/*
int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    int cnt=0,max=0;
    for(int i=-100;i<=100;i++){
        for(int j=0;j<n;j++){
            if(i>=arr[j][0]&&i<arr[j][1])
                cnt++;
        }
        if(cnt>max) max=cnt;
        cnt = 0;
    }
    cout << max;
    return 0;
}
*/
int main(){
    int n;
    cin >> n;
    int arr[201]={};
    for(int i=0;i<n;i++){
        int start, end;
        cin >> start >> end;
        for(int j=start;j<end;j++){
            arr[j]++;
        }
    }
    int max=0;
    for(int i=0;i<201;i++){
        if(arr[i]>max) max = arr[i];
    }
    cout << max;
}