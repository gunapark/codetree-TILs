#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[n][4];
    int pass_cnt=0;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            int score;
            cin >> score;
            arr[i][j] = score;
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if (sum/4 >= 60){
            pass_cnt++;
            cout << "pass" << endl;
        } else
            cout << "fail" << endl;
        
    }
    cout << pass_cnt;
    return 0;
}