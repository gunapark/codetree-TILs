#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        int penalty;
        Student(int num=0,int penalty=0){
            this->num = num;
            this->penalty=penalty;
        }
};

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    Student *students=new Student[n+1];
    for(int i=1;i<=n;i++){
        students[i].num = i;
    }
    for(int i=0;i<m;i++){
        int pen;
        cin>>pen;
        students[pen].penalty++;
    }

    for(int i=1;i<=n;i++){
        if(students[i].penalty>=k){
            cout << students[i].num;
            return 0;
        }
    }
    cout << -1;
    return 0;
}