#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main() {
    int n, k;
    cin >> n >> k;
    int block[n+1]={};
    for(int i=1;i<=k;i++){
        int start, end;
        cin >> start >> end;
        for(int j=start;j<=end;j++){
            block[j] +=1;
        }
    }
    int max = -1;
    int max_index;
    for(int i=0;i<n+1;i++){
        if(block[i]>max) max=block[i];
    }
    cout << max;
    return 0;
}