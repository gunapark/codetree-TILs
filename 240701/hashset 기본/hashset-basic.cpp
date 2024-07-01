#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int n;
unordered_set<int> set;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i=0;i<n;i++){
        string command;
        int val;

        cin >> command >> val;

        if(command == "add"){
            set.insert(val);
        }
        else if(command == "remove"){
            set.erase(val);
        }
        else{
            if(set.find(val) ==set.end()){
                cout << "false";
            }else cout << "true";
            cout<<endl;
        }
    }
    return 0;
}