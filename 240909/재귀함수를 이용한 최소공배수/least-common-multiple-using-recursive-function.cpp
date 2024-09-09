#include <iostream>
#include <algorithm>
using namespace std;
bool is_same(int a,int b){
    int max = max(a,b);
    int min = min(a,b);
    for(int i=min;i<=max;i++){
        if()
    }
    else return 0;
}

int print_n(int n, int *arr){
    if(n==0) return arr[n];
    if(is_same(arr[n],print_n(n-1))) return max(arr[n],print_n(n-1,arr));
    else arr[n] * print_n(n-1,arr);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    cout << print_n(n-1, arr);
    return 0;
}