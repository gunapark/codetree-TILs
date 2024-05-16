#include <iostream>
using namespace std;

int main() {
    int area[2001][2001]={};
    int rec_x[2];
    int rec_y[2];
    for(int i=0;i<2;i++){
        cin >> rec_x[i] >> rec_y[i];
        rec_x[i]+=1000;
        rec_y[i]+=1000;
    }
    for(int i=rec_x[0];i<rec_x[1];i++){
        for(int j=rec_y[0];j<rec_y[1];j++){
            area[i][j]++;
        }
    }

    for(int i=0;i<2;i++){
        cin >> rec_x[i] >> rec_y[i];
        rec_x[i]+=1000;
        rec_y[i]+=1000;
    }

    for(int i=rec_x[0];i<rec_x[1];i++){
        for(int j=rec_y[0];j<rec_y[1];j++){
            area[i][j]--;
        }
    }
    int min_x=2001, max_x=-2001, min_y=2001, max_y=-2001;
    int cnt_area=0;
    for(int i=0;i<2001;i++){
        for(int j=0;j<2001;j++){
            if(area[i][j]==1){
                if(i<min_x) min_x=i;
                else max_x=i;
                if(j<min_y) min_y=j;
                else max_y=j;
                cnt_area++;
            }
        }
    }
    if(cnt_area==0){
        cout << 0;
        return 0;
    }
    cout << (max_x-min_x+1)*(max_y-min_y+1);
    return 0;
}