#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int day_of_week_count = 1;
    string day_of_week[7]={"Sun","Mon","Tue","Wed","The","Fri","Sat"};
    int day_of_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int start_month, start_day, end_month, end_day;
    cin >> start_month >> start_day >> end_month >> end_day;
    
    int sum_start = 0;
    for(int i=0;i<start_month-1;i++){
        sum_start += day_of_month[i];
    }
    sum_start += start_day;

    int sum_end=0;
    for(int i=0;i<end_month-1;i++){
        sum_end+= day_of_month[i];
    }
    sum_end += end_day;
    
    
    int gap = sum_end - sum_start;

    if(gap<0){
        gap %= -7;
        day_of_week_count += gap;
    } else{
        gap %=7;
        day_of_week_count +=gap;
        day_of_week_count%7;
    }
    cout << day_of_week[day_of_week_count];

    return 0;
}