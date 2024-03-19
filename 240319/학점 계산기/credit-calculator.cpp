#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    double sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        double score;
        cin >> score;
        arr[i] = score;
        sum +=score;
    }
    cout << fixed;
    cout.precision(1);
    
    cout << sum/n << endl;
    if(sum/n>=4.0){
        cout << "Perfect";
    } else if(sum/n >=3)
        cout << "Good";
    else
        cout << "Poor";

    return 0;
}