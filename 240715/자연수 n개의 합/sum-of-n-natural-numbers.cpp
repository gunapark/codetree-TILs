#include <iostream>
#include <limits.h>
using namespace std;

int s;

int main() {
    cin >> s;

    int left = 1, right = 4000, res, mid;
    while(left<=right){
        mid = (left+right)/2;
        if(mid*(mid+1)/2 >= s){
            right = mid-1;
            res = mid;
        }
        else{
            left = mid+1;
        }
    }
    cout << res-1;
    return 0;
}