#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    int index_arr[10001] = {0,};
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max = -1;
    int cnt =0;

    for(int i=0;i<n;i++){
        index_arr[arr[i]]++;
    }
    int max_index=-1;
    for(int i=0;i<10001;i++){
        if(index_arr[i]==1 && i>max_index)
            max_index = i;
    }
    
    cout <<max_index;
    return 0;
}