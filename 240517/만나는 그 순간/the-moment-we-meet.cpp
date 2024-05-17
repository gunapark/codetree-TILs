#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    int A_dis[100000]={};
    int B_dis[100000]={};
    cin >> n >> m;
    
    int time_cnt =0;
    int last_dis=0;
    for(int i=0;i<n;i++){
        char d;
        int t;
        cin >> d >> t;
        
        if(d=='R'){
            for(int j=1;j<=t;j++){
                A_dis[time_cnt+j]=last_dis+1;
                last_dis++;
            }
        }else{
            for(int j=1;j<=t;j++){
                A_dis[time_cnt+j]=--last_dis;
            }
        }
        time_cnt+=t;
    }

    int time_cnt_b=0;
    last_dis=0;
    for(int i=0;i<m;i++){
        char d;
        int t;
        cin >> d >> t;
        
        if(d=='R'){
            for(int j=1;j<=t;j++){
                B_dis[time_cnt_b+j]=last_dis+1;
                last_dis++;
            }
        }else{
            for(int j=1;j<=t;j++){
                B_dis[time_cnt_b+j]=--last_dis;
            }
        }
        time_cnt_b+=t;
    }
    int max_time_cnt = max(time_cnt,time_cnt_b);

    for(int i=1;i<=max_time_cnt;i++){
        if(A_dis[i]==B_dis[i]){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;

    cout << endl;
    for(int i=0;i<=time_cnt;i++){
        cout << A_dis[i] << " ";
    }
    cout << endl;
    for(int i=0;i<=time_cnt_b;i++){
        cout << B_dis[i] << " ";
    }
    return 0;
}