#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        int penalty;
};

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    Student *students=new Student[n];
    for(int i=0;i<n;i++){
        students[i].num = i+1;
    }
    for(int i=0;i<m;i++){
        int pen;
        cin>>pen;
        students[pen-1].penalty++;
    }

    for(int i=0;i<n;i++){
        if(students[i].penalty>=k){
            cout << students[i].num;
            return 0;
        }
    }
    cout << -1;
    return 0;
}