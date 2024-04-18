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

    for(i=0;i<=len_A;i++){
        bool a = false;
        for(int j=0;j<len_B;j++){
            if(A[i+j]==B[j]){
                a = true;
            } else
                a = false;
        }
        if(a==true){
            A.erase(i,len_B);
            len_A -= len_B;
            i=0;
        }
    }

    cout << A;

    return 0;
}