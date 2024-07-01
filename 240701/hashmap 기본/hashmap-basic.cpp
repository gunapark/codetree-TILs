#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_map<int, int> hashmap;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string order;
        int key;
        int value;

        cin >> order >> key;

        if(order == "add"){
            cin >> value;
            if(hashmap.find(key) != hashmap.end()){
                hashmap.erase(key);
            }
            hashmap.insert({key,value});
        } else if(order == "remove"){
            hashmap.erase(key);
        } else if(order == "find"){
            if(hashmap.find(key) != hashmap.end()){
                cout << hashmap[key];
            }else {
                cout << "None";
            }
            cout << endl;
        }
    }
    return 0;
}