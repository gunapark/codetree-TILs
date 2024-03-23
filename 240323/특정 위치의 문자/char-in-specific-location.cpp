#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char word[6]={'L','E','B','R','O','S'};

    char n;
    cin >> n;
    int index = -1;

    for(int i=0;i<6;i++){
        if(n==word[i]){
            index = i;
        }
    }
    if(index==-1){
        cout << "None";
    } else {
        cout << index;
    }

    
    return 0;
}