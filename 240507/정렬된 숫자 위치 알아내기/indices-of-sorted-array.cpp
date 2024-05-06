#include <iostream>
#include <algorithm>
using namespace std;

class num{
    public:
        int number, value;
        bool check = false;
        num(){};
};

bool cmp(num a, num b){
    if(a.value == b.value){
        return a.number<b.number;
    } return a.value<b.value;
}

int main() {
    int n;
    cin >> n;
    num nums[n];
    num nums_2[n];

    for(int i=0;i<n;i++){
        cin >> nums[i].value;
        nums[i].number = i+1;
        nums_2[i].value = nums[i].value;
        nums_2[i].number = nums[i].number;
    }
    
    sort(nums,nums+n,cmp);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums_2[i].value == nums[j].value && nums[j].check == false){
                cout << j+1 << " ";
                nums[j].check = true;
                break;
            }
        }
    }
    return 0;
}