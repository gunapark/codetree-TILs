#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int A[1000000]={};
    int B[1000000]={};

    int time=0;
    for(int i=0;i<n;i++){
        int v, t;
        cin >> v >> t;
        while(t--){
            A[time+1]=A[time]+v;
            time++;
        }
    }

    time=0;
    for(int i=0;i<m;i++){
        int v,t;
        cin >> v >> t;
        for(int j=0;j<t;j++){
            B[time+1]=B[time]+v;
            time++;
        }
    }

    int trop[time]={};
    for(int i=1;i<time;i++){
        if(A[i]>B[i]) trop[i]=1;
        else if(A[i]==B[i]) trop[i]=2;
        else trop[i]=3;
    }


    int ans=1;
    for(int i=2;i<time;i++){
        if(trop[i]!=trop[i-1]) ans++;
        
    }
    cout << ans;
    return 0;
}