#include <iostream>
#include <unordered_map>
using namespace std;


int n,k,cnt=0;
unordered_map<int,int> map;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n>>k;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        map[a]++;
    }

    for(auto it=map.begin();it!=map.end();it++){
        if(map.find(k-(it->first))!=map.end()){
            if(map[k-(it->first)]==1&&it->first==1){
                cnt++;
                map.erase(it->first);
            }else{
                for(int i=map[k-it->first]-1;i!=0;i--){
                    cnt+=i;
                }
            }
        }else{
            continue;
        }
    }
    cout << cnt;
    return 0;
}