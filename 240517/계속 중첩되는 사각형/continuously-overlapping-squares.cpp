#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int area[201][201]={};
    for(int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=100;
        y1+=100;
        x2+=100;
        y2+=100;
        if(i%2==0){
            for(int i=x1;i<x2;i++){
                for(int j=y1;j<y2;j++){
                    area[i][j]=1;
                }
            }
        }else{
            for(int i=x1;i<x2;i++){
                for(int j=y1;j<y2;j++){
                    area[i][j]=-1;
                }
            }
        }
    }
    int cnt_blue_area=0;
    for(int i=0;i<201;i++){
        for(int j=0;j<201;j++){
            if(area[i][j]==-1){
                cnt_blue_area++;
            }
        }
    }
    cout << cnt_blue_area;
    return 0;
}