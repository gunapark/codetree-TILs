#include <iostream>
#include <unordered_set>
using namespace std;

int n;

unordered_set<int> hset;

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        hset.insert(num);
    }

    int cnt=0;

    cout << hset.size();
    return 0;
}