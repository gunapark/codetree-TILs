#include <iostream>
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    int students[n+1]={};
    
    for(int i=0;i<m;i++){
        int penalty;
        cin >> penalty;
        students[penalty]++;
        if(students[penalty]>=k){
            cout << penalty;
            return 0;
        } 
        
    }

    cout << -1;
    return 0;
}