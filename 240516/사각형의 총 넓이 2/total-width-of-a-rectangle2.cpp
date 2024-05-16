#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int area[200][200]={};
    for(int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=100;
        y1+=100;
        x2+=100;
        y2+=100;
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                if(area[i][j]==0){
                    area[i][j]++;
                }
            }
        }
    }
    int cnt_area=0;
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            if(area[i][j]==1){
                cnt_area++;
            }
        }
    }
    cout << cnt_area;
    return 0;
}