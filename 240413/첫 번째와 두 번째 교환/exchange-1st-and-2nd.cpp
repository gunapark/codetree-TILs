#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    char val_0 = a[0];
    char val_1 = a[1];

    for(int i=0;i<a.length();i++){
        if(a[i]==val_0)
            a[i]=val_1;
        else if(a[i]==val_1)
            a[i]=val_0;
    }

    cout << a;

    return 0;
}