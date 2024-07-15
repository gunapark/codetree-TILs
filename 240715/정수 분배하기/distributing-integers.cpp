#include <iostream>
using namespace std;

#define MAX_N 10000

int n,m;
int arr[MAX_N+1];
int min_val;

bool IsPossible(int mid){
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=arr[i]/mid;
    }
    if(cnt>=m) return true;
    else return false;
}

int main() {
    cin >> n >> m;
    min_val = 10000000;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        min_val = min(arr[i],min_val);
    }
    int left = 1;
    int right = min_val*2;
    int ans;
    while(left <= right){
        int mid = (left+right)/2;
        if(IsPossible(mid)){
            left = mid +1;
            ans = mid;
        }
        else {
            right = mid -1;
        }
    }
    cout << ans;
    return 0;
}