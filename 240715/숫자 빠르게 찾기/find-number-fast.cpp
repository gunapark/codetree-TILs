#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> A;
vector<int> B;
int main() {
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        int num;
        cin >> num;
        A.push_back(num);
    }

    for(int i=0;i<m;i++){
        int x;
        cin >> x;

        int left=0, right=n-1, res=-1;

        while(left <= right){
            int mid = (left+right)/2;

            if(A[mid]==x){
                res = mid;
                break;
            }
            else if(A[mid]<x){
                left = mid+1;
            } else{
                right = mid-1;
            }
        }
        if(res == -1){
            cout << -1;
        } else{
            cout << res+1;
        }
        cout << endl;
    }
    return 0;
}