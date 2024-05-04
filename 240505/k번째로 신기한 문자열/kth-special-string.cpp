#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n, k, index = 0;
    string T;
    cin >> n >> k >> T;
    int len_T = T.length();
    string str[n];
    string copy[n];

    for(int i=0;i<n;i++){
        cin >> str[i];
        bool a=false;
        for(int j=0;j<len_T;j++){
            if(str[i][j]!=T[j]){
                a = false;
                break;
            } else {a = true;}
        }
        if(a){
            copy[index] = str[i];
            index++;
        }
    }

    sort(copy,copy+index);

    cout << copy[k-1];
    
    return 0;
}