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
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int left = 1;
    int right = 100000;
    int ans=0;
    while(left <= right){
        int mid = (left+right)/2;
        if(IsPossible(mid)){
            left = mid +1;
            ans = min(mid,ans);
        }
        else {
            right = mid -1;
        }
    }
    cout << ans;
    return 0;
}