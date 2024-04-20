#include <iostream>
using namespace std;

int len_a, len_b;
int arrA[66543], arrB[65432];

bool is_part(int arrA[], int arrB[],int len_a, int len_b){
    bool is_same = false;
    for(int i=0;i<=len_a-len_b;i++){
        for(int j=0;j<len_b;j++){
            if(arrA[i+j]==arrB[j]) is_same = true;
            else is_same=false;
        }
        if(is_same==true) return true;
    }
    return false;
}


int main() {
    // 여기에 코드를 작성해주세요.


    cin >> len_a >> len_b;

    for(int i=0;i<len_a;i++){
        cin >> arrA[i];
    }
    for(int i=0;i<len_b;i++){
        cin >> arrB[i];
    }

    if(is_part(arrA, arrB, len_a,len_b)) cout << "Yes";
    else cout << "No";


    return 0;
}