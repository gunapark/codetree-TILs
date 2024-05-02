#include <iostream>
using namespace std;

void print_str(int n){
    if(n==0) return;
    cout << "HelloWorld" << endl;
    print_str(n-1);
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    print_str(n);
    return 0;
}