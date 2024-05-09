#include <iostream>
using namespace std;

int main() {
    int cnt_min=0;
    int day, hour, min;
    cin >> day >> hour >>min;

    while(true){
        if(day==11 && hour ==11 && min==11)
            break;
        cnt_min++;
        min--;
        if(min<0){
            hour--;
            min=59;
        }
        if(hour<0){
            day--;
            hour=23;
        }
    }
    cout << cnt_min;
    return 0;
}