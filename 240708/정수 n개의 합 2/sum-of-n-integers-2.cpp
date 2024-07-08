#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> arr;
vector<int> ps;

void make_ps(){
    int sum=0;
    ps.push_back(0);
    for(int i=1;i<(int)arr.size();i++){
        sum += arr[i];
        ps.push_back(sum);
    }
}

int main() {
    cin >> n >> k;

    arr.push_back(0);

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    make_ps();



    int max=-1;
    for(int i=0;i!=n-k+1;i++){
        if(ps[i+k]-ps[i]>max) max=ps[i+k]-ps[i];
    }
    cout <<max;
    return 0;
}