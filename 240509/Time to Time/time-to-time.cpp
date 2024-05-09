#include <iostream>
using namespace std;

int main() {
    int start_h, start_m, end_h, end_m;
    int time=0;
    cin >> start_h >> start_m >> end_h >> end_m;
    while(true){
        if(start_h==end_h && start_m == end_m){
            break;
        }
        start_m++;
        time++;
        if(start_m==60){
            start_m=0;
            start_h++;
        }
    }
    cout << time;
    return 0;
}