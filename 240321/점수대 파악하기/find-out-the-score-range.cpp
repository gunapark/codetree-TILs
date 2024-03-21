#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[11]={0,0,0,0,0,0,0,0,0,0,0};

    for(int i=0;i<100;i++){
        int score;
        cin >> score;
        if(score==0){
            break;
        }
        arr[score/10]++;
    }
    for(int i=10;i>=1;i--){
        cout << i*10 << " - " << arr[i] << endl;
    }
    return 0;
}