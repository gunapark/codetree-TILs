#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
map<string, int> m;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    
    for(int i=0;i<n;i++){
        string color;
        cin >> color;
        m[color]++;
    }
    cout<<fixed;
    cout.precision(4);
    map<string,int>::iterator it;
    for(it = m.begin();it !=m.end();it++){
        cout <<(it->first)<< " " <<(float)(it->second)/n*100 << endl;
    }
    return 0;
}