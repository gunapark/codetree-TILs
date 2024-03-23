#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,q;
    cin >> n >> q;
    int arr[n+1];

    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        if(a==1){
            int b;
            cin >> b;
            cout << arr[b];
        } else if(a==2){
            int b;
            cin >> b;
            int index=-1;
            for(int i=1;i<=n;i++){
                if(arr[i]==b){
                    index = i;
                    break;
                }
            } if(index==-1){
                cout << 0;
            } else {
                cout << index;
            }
        } else if(a==3){
            int b, c;
            cin >> b >> c;
            for(int i=b;i<=c;i++){
                cout << arr[i] << " ";
            }
        }
        cout <<endl;
    }
    
    return 0;
}