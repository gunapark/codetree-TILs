#include <iostream>
#include <unordered_set>
using namespace std;

int n,m;
unordered_set<int> arr1;


int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        arr1.insert(num);
    }
    cin >> m;

    for(int i=0;i<m;i++){
        int num;
        cin >> num;
        if(arr1.find(num)!=arr1.end()){
            cout << 1 << " ";
        }else cout << 0 << " ";
    }



    return 0;
}