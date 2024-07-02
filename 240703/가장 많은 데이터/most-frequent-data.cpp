#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int n;
unordered_map<string,int> map;


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i=0;i<n;i++){
    string color;
    cin >> color;
    map[color]++;
    }
    int max=0;

    for(auto it=map.begin(); it!=map.end();it++){
        if(it->second>max){
            max=it->second;
        }
    }
    cout << max;
    return 0;
}