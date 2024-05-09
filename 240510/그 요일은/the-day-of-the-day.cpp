#include <iostream>
#include <string>
using namespace std;

string day_of_week[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int day_of_month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int total_day(int m, int d){
    int total=0;
    for(int i=0;i<m-1;i++){
        total += day_of_month[i];
    }
    total+=d;
    return total;
}

int main() {
    int m1,d1,m2,d2;
    string dydlf;
    int day_of_week_cnt = 1;
    cin >> m1 >> d1 >> m2 >> d2 >> dydlf;
    int int_dydlf;
    for(int i=0;i<7;i++){
        if(day_of_week[i]==dydlf){
            int_dydlf = i;
        }
    }
    cout << int_dydlf << endl;

    int diff = total_day(m2,d2) - total_day(m1,d1);
    cout << diff << endl;
    int day_of_end = (diff%7+1)%7;
    int week=0;

    week = diff/7;
    if(day_of_end<=int_dydlf){
        week++;
    }

    cout << week;
    return 0;
}