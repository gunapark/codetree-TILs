#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
    return a>b;
}

class info{
    public:
        string name;
        string adress;
        string location;
};

int main() {
    int n;
    cin >> n;
    info *client = new info[n];
    string strarr[n];
    for(int i=0;i<n;i++){
        cin >> client[i].name >> client[i].adress >> client[i].location;
        strarr[i] = client[i].name;
    }
    sort(strarr, strarr+n,compare);

    for(int i=0;i<n;i++){
        if(strarr[0]==client[i].name){
            cout << "name " << client[i].name <<endl;
            cout << "addr " << client[i].adress <<endl;
            cout << "city " << client[i].location;
        }
    }
    return 0;
}