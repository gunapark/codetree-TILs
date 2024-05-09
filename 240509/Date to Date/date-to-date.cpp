#include <iostream>
using namespace std;

int main() {
    int start_m, start_d, end_m, end_d, day=1;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> start_m >> start_d >> end_m >> end_d;
    while(true){
        if(start_d==end_d && end_m==start_m)
            break;
        start_d++;
        day++;
        if(start_d>num_of_days[start_m]){
            start_m++;
            start_d = 1;
        }
    }

    cout << day;
    return 0;
}