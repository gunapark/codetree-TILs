#include <iostream>
#include <string>
using namespace std;

void print_star(int n){
    for(int i=0;i<n;i++){
        cout << "12345^&*()_" << endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    print_star(n);
    return 0;
}