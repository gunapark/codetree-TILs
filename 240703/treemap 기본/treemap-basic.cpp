#include <iostream>
#include <map>
#include <string>
using namespace std;

int n;
map<int,int> tmap;

int main() {
    cin >> n;

    for(int i=0;i<n;i++){
        string command;
        cin >> command;
        if(command=="add"){
            int k,v;
            cin >> k >> v;
            tmap[k]=v;
        }else if(command=="remove"){
            int k;
            cin >> k;
            tmap.erase(k);
        }else if(command =="find"){
            int k;
            cin >> k;
            if(tmap.find(k)!=tmap.end()){
                cout << tmap.find(k)->second<<endl;
            }else cout << "None"<<endl;
        }else{
            if(tmap.empty()==true){
                cout << "None"<<endl;
                continue;
            }
            for(auto it=tmap.begin();it!=tmap.end();it++){
                cout << it->second << " ";
            }
            cout << endl;
        }
    }
    return 0;
}