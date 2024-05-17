#include <iostream>
using namespace std;

int main() {
    int n,m;
    int a_dis[100000]={};
    int b_dis[100000]={};
    cin >> n >> m;

    int cnt_a_time=0;
    for(int i=0;i<n;i++){
        int v, t;
        cin >> v >> t;
        while(t--){
            a_dis[cnt_a_time+1]=a_dis[cnt_a_time]+v;
            cnt_a_time++;
        }
    }

    int cnt_b_time=0;
    for(int i=0;i<m;i++){
        int v, t;
        cin >> v >> t;
        while(t--){
            b_dis[cnt_b_time+1]=b_dis[cnt_b_time]+v;
            cnt_b_time++;
        }
    }
    int cnt=0;
    for(int i=1;i<=cnt_a_time;i++){
        if(a_dis[i]==b_dis[i] && a_dis[i+1]!=b_dis[i+1]) cnt++;
    }
    cout << cnt;
    return 0;
}