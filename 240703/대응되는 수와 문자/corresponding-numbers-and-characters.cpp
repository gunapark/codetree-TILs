#include <iostream>
#include <unordered_map>
#include <string>
#include <variant>
using namespace std;

int n,m;
unordered_map<string,int> map;
unordered_map<int,string> map2;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    cin >> m;


    for(int i=1;i<=n;i++){
        string str;
        cin >> str;
        map[str] = i;
        map2[i] = str;

    }
    for(int j=0;j<m;j++){
        string qus;
        cin >> qus;
        if(qus[0]>='0'&&qus[0]<='9'){
            cout<<map2[stoi(qus)]<<endl;
        }else{
            cout <<map[qus]<<endl;
        }
    }
    return 0;
}