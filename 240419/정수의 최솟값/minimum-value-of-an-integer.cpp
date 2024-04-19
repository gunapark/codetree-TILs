#include <iostream>
using namespace std;

int sum(int a, int b, int c){
    int min;
    if(a>b) min = b;
    else min = a;
    if(min>c) min = c;
    
    
    return min;
}
int main() {
    int a, b, c;

    cin >> a >> b >> c;

    cout << sum(a,b,c);
    return 0;
}