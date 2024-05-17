#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int A[1000000]={};
    int B[1000000]={};

    int time_a=1;
    for(int i=0;i<n;i++){
        int t;
        char d;
        cin >> t >> d;
        for(int i=0;i<t;i++){
            if(d=='R') A[time_a+i]=A[time_a+i-1]+1;
            else A[time_a+i]=A[time_a+i-1]-1;
        }
        time_a +=t;
    }

    for(int i=time_a;i<1000000;i++){
        A[i]=A[time_a-1];
    }

    
    int time_b=1;
    for(int i=0;i<m;i++){
        int t;
        char d;
        cin >> t >> d;
        for(int i=0;i<t;i++){
            if(d=='R') B[time_b+i]=B[time_b+i-1]+1;
            else B[time_b+i]=B[time_b+i-1]-1;
        }
        time_b +=t;
    }

    for(int i=time_b;i<1000000;i++){
        B[i]=B[time_b-1];
    }


    int cnt=0;
    for(int i=1;i<max(time_a,time_b);i++){
        if(A[i]==B[i] && A[i-1]!=B[i-1])cnt++;
    }
    cout << cnt;
    return 0;
}