#include <iostream>
#include <unordered_map>
using namespace std;

int n, m;
unordered_map<int, int> cnt;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        
        //x가 증가한 횟수를 1증가시킨다.
        cnt[x] += 1;
    }

    for(int i=0;i<m;i++){
        int y;
        cin >> y;
        cout << cnt[y] <<' ';
    }
    return 0;
}