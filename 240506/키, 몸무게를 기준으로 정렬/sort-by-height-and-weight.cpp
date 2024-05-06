#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class person{
    public:
        string name;
        int h,w;
};

bool cmp(person a, person b){
    if(a.h==b.h) return a.w>b.w;
    return a.h<b.h;
}

int main() {
    int n;
    cin >> n;
    person *persons = new person[n];

    for(int i=0;i<n;i++){
        cin >> persons[i].name >> persons[i].h >> persons[i].w;
    }

    sort(persons,persons+n,cmp);

    for(int i=0;i<n;i++){
        cout << persons[i].name << " " << persons[i].h << " " <<persons[i].w << endl;
    }
    return 0;
}