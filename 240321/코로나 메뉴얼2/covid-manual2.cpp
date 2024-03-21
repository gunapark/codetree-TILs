#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int ABCD[4]={0,0,0,0};

    for(int i=0;i<3;i++){
        char cold;
        int tem;
        cin >> cold >> tem;
        if(cold=='Y' && tem>=37){
            ABCD[0]++;
        } else if(cold=='N' && tem>=37){
            ABCD[1]++;
        } else if(cold=='Y'){
            ABCD[2]++;
        } else{
            ABCD[3]++;
        }
    }
    for(int i=0;i<4;i++){
        cout << ABCD[i] << " ";
    }
    if(ABCD[0]>=2){
        cout << "E";
    }

    return 0;
}