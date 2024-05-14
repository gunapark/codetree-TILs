#include <iostream>
using namespace std;
int main() {
    int a, b, n, num=1;
    int a_to_ten=0;
    cin >> a >> b >> n;
    while(n>0){
        a_to_ten+=n%10*num;
        num *= a;
        n/=10;
    }

    int cnt=0;
    int arr_b[20];
    while(true){

        if(a_to_ten<b){
            arr_b[cnt] = a_to_ten;
            break;
        }
        
        arr_b[cnt++]=a_to_ten%b;
        a_to_ten/=b;
    }

    for(int i=cnt;i>=0;i--){
        cout << arr_b[i];
    }
    return 0;
}