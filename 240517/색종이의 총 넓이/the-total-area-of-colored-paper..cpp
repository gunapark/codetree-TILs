#include <iostream>
using namespace std;

int main() {
    int n;
    int area[201][201]={};
    cin >> n;
    for(int i=0;i<n;i++){
        int x1,y1;
        cin >> x1 >> y1;
        x1+=100; y1+=100;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                area[x1+i][y1+j]++;
            }
        }
    }
    int cnt_area=0;
    for(int i=0;i<201;i++){
        for(int j=0;j<201;j++){
            if(area[i][j]>0) cnt_area++;
        }
    }
    cout << cnt_area;
    return 0;
}