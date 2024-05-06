#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class info{
    public:
        string name;
        int height;
        int weight;
};

bool cmp(info a, info b){
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    info *datas = new info[n];

    for(int i=0;i<n;i++){
        cin >> datas[i].name >> datas[i].height >> datas[i].weight;
    }

    sort(datas, datas+n,cmp);

    for(int i=0;i<n;i++){
        cout << datas[i].name << " " << datas[i].height << " " << datas[i].weight << endl;
    }
    return 0;
}