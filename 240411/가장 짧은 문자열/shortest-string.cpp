#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    int len1=str1.length(), len2=str2.length(), len3=str3.length();
    int arr[3]={len1,len2,len3};
    int min=20, max=0;
    for(int i=0;i<3;i++){
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }

    cout << max-min;
    return 0;
}