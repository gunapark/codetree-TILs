#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>& a,pair<int,int>& b){
    if(a.second == b.second){
        return a.first>b.first;
    }
    return a.second>b.second;
}
int n,k;
unordered_map<int,int> map;

int main() {
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        map[num]++;
    }

    
    vector<pair<int,int>> bigi;
    for(auto it=map.begin();it!=map.end();it++){
        bigi.push_back({it->first,it->second});
    }

    sort(bigi.begin(),bigi.end(),compare);

    for(int i=0;i<k;i++){
        cout << bigi[i].first<<" ";
    }

    return 0;
}