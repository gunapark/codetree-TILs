#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string A,B;
    cin >> A >> B;
    sort(A.begin(),A.end());
    sort(B.begin(), B.end());

    int len = A.length();

    for(int i=0;i<len;i++){
        if(A[i]=!B[i]){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}