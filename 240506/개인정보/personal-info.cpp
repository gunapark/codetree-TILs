#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class person{
    public:
        string name;
        int h, num;
        double w;
};

bool cmp_name(person a, person b){
    return a.name<b.name;
}

bool cmp_h(person a, person b){
    return a.h>b.h;
}
int main() {
    person group[5] = {};
    for(int i=0;i<5;i++){
        cin >> group[i].name >> group[i].h >> group[i].w;
        group[i].num = i;
    }
    sort(group,group+5,cmp_name);

    cout << "name" <<endl;
    for(int i=0;i<5;i++){
        cout << group[i].name << " " << group[i].h << " " << group[i].w <<endl;
    }

    cout << endl <<"height" << endl;
    sort(group,group+5,cmp_h);
    for(int i=0;i<5;i++){
        cout << group[i].name << " " << group[i].h << " " << group[i].w <<endl;
    }
    return 0;
}