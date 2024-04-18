#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    string B;
    
    cin >> A >> B;

    
    int len_A = A.length();
    int len_B = B.length();
    int i;

    for(i=0;i<A.length();i++){
        bool a = false;
        for(int j=0;j<len_B;j++){
            if(A[i+j]==B[j]){
                a = true;
            }
        }
        cout << a << endl;
        if(a==true){
            A.erase(i,len_B);
            cout << A[0] << " " << A[1] << endl;
            i=0;
        }
    }

    cout << A;

    return 0;
}