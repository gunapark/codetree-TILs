#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    int c = (int)a, d = (int)b;
    
    cout <<c+d<< " " <<max(c,d)-min(c,d);
    
    return 0;
}