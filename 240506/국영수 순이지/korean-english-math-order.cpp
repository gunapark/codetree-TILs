#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



class Student{
    public:
        string name;
        int kor, eng, math;
};


bool cmp(Student a, Student b){
    if(a.kor == b.kor){
        if(a.eng == b.eng){
            return a.math>b.math;
        }
        return a.eng>b.eng;
    }
    return a.kor>b.kor;
}

int main() {
    int n;
    cin >> n;
    Student *Students = new Student[n];

    for(int i=0;i<n;i++){
        cin >> Students[i].name >> Students[i].kor >> Students[i].eng >> Students[i].math;
    }

    sort(Students, Students+n, cmp);

    for(int i=0;i<n;i++){
        cout << Students[i].name <<" "<< Students[i].kor << ' '<< Students[i].eng << " " << Students[i].math << endl;
    }
    return 0;
}