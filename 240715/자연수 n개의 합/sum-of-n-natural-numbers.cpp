#include <iostream>
#include <limits.h>
using namespace std;

int s;

int main() {
    cin >> s;

    long long left = 1, right = 200000000000, res=0, mid;
    while(left<=right){
        long long mid = (left+right)/2;
        if(mid*(mid+1)/2 <= s){
            left = mid+1;
            res = max(mid,res);
        }
        else{
            right = mid-1;
        }
    }
    cout << res;
    return 0;
}