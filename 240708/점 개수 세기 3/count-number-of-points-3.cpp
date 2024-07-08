#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

#define MAX_N 100000

int n, q;
set<int> dot_set;
unordered_map<int,int> dot_map;
int ps_dot[MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> q;

    for(int i=0;i<n;i++){
        int dot;
        cin >> dot;
        dot_set.insert(dot);
    }
    int cnt=1;
    for(auto it=dot_set.begin();it!=dot_set.end();it++){
        ps_dot[cnt] = cnt;
        dot_map[*it]=cnt;
        cnt++;
    }

    for(int i=0;i<q;i++){
        int start, end;
        cin >> start >> end;
        start = dot_map[start];
        end = dot_map[end];
        cout << ps_dot[end] - ps_dot[start] +1 << endl;
    }

    return 0;
}