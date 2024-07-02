#include <iostream>
#include <map>
using namespace std;

int n;
map<int,int> tmap;

int main() {
    cin >> n;

    for(int i=1;i<=n;i++){
        int num;
        cin >> num;
        if(tmap.find(num)==tmap.end()){
            tmap[num]=i;
        }
    }

    for(auto it=tmap.begin();it!=tmap.end();it++){
        cout << it->first << " " << it->second <<endl;
    }
    return 0;
}