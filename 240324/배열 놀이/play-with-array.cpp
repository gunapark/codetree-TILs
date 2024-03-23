#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,q;
    cin >> n >> q;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        if(a==1){
            int b;
            cin >> b;
            cout << arr[b-1];
        } else if(a==2){
            int b;
            cin >> b;
            int index=-1;
            for(int i=0;i<n;i++){
                if(arr[i]==b){
                    index = i+1;
                }
            } if(index==-1){
                cout << 0;
            } else {
                cout << index;
            }
        } else {
            int b, c;
            cin >> b >> c;
            for(i=b-1;i<=c-1;i++){
                cout << arr[i] << " ";
            }
        }
        cout <<endl;
    }
    
    return 0;
}