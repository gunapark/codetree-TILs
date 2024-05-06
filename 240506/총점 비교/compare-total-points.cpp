#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class student{
    public:
        string name;
        int kor, eng, math;
        int sum;
        student(string name, int kor, int eng, int math){
            this->name=name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
            this->sum = kor+eng+math;
        }
        student(){};
};

bool cmp(student a, student b){
    return a.sum<b.sum;
}
int main() {
    int n;
    cin >> n;
    student students[n]={};
    
    for(int i=0;i<n;i++){
        string name;
        int kor,eng,math;
        cin >> name >> kor >>eng>> math;
        students[i] = student(name, kor, eng, math);
    }

    sort(students,students+n,cmp);

    for(int i=0;i<n;i++){
        cout << students[i].name << " "<< students[i].kor << " "<< students[i].eng <<" "<< students[i].math<<endl;
    }
    return 0;
}