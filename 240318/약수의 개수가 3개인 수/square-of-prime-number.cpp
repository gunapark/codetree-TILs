#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    int count_num=0;
    cin >> start >> end;

    for(int i=start;i<=end;i++){
        int cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==3){
            count_num++;
        }
    }
    cout << count_num;
    return 0;
}