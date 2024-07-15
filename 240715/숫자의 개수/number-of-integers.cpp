#include <iostream>
using namespace std;


int n,m;

int arr[100001];

int main() {
    
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<m;i++){
        int x;
        cin >> x;

        int left = 1, right=n+1, min_idx = n+1, max_idx=n+1;
        while(left <= right){
            int mid = (left+right)/2;
            if(arr[mid] >= x){
                right = mid -1;
                min_idx = mid;
            } else{
                left = mid +1;
            }
        }

        left = 1;
        right = n+1;
        while(left <= right){
            int mid = (left+right)/2;
            if(arr[mid] > x){
                right = mid -1;
                max_idx = mid;
            } else{
                left = mid +1;
            }
        }
        cout << max_idx - min_idx << endl;
    }
    return 0;
}