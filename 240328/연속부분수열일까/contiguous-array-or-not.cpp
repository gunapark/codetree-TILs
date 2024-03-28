#include <iostream>
using namespace std;

int main() {

    //A, B 수열의 원소 개수 입력
    int n1, n2;
    cin >> n1 >> n2;
    bool a = false;
    int arrA[n1];
    int arrB[n2];

    for(int i=0;i<n1;i++){
        cin >> arrA[i];
    }
    for(int i=0;i<n2;i++){
        cin >> arrB[i];
    }
    int j;
    for(int i=0;i<n1;i++){
        if(arrA[i]==arrB[0]){
            for(j=1;j<n2;j++){
                if(arrA[i+j]==arrB[j]){
                    continue;
                } else{
                    break;
                }
            } if(j==n2){
                a = true;
                cout << "Yes";
                break;
            } 
        }
    }
    if(a==false){
        cout << "No";
    }
    
    return 0;
}