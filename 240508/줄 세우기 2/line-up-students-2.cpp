#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int h,w,num;
        Student(int h, int w, int num){
            this->h = h;
            this->w = w;
            this->num = num;
        }
        Student(){};
};

bool cmp(Student a, Student b){
    if(a.h==b.h){
        return a.w>b.w;
    } return a.h<b.h;
}

int main() {
    int n;
    cin >> n;

    Student students[n];

    for(int i=0;i<n;i++){
        int h,w,num;
        cin >> h >> w;
        num = i+1;
        students[i]=Student(h,w,num);
    }

    sort(students, students+n, cmp);

    for(int i=0;i<n;i++){
        cout << students[i].h << " " << students[i].w << " " << students[i].num << endl;
    }
    return 0;
}