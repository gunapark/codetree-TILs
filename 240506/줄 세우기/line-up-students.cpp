#include <string>
#include <algorithm>
using namespace std;
#include <iostream>

class student{
    public:
        int h;
        int w;
        int number;
};

bool cmp(student a, student b){
    if(a.h==b.h){
        if(a.w==a.w){
            return a.number<b.number;
        }
        return a.w>b.w;
    } return a.h>b.h;
}

int main() {
    int n;
    cin >> n;
    student *students = new student[n];

    for(int i=0;i<n;i++){
        cin >> students[i].h >> students[i].w;
        students[i].number = i+1;
    }

    sort(students, students +n,cmp);

    for(int i=0;i<n;i++){
        cout << students[i].h << " "<<students[i].w <<" "<<students[i].number<< endl;
    }
    return 0;
}