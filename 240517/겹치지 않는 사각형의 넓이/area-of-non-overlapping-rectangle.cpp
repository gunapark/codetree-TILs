#include <iostream>
using namespace std;

int main() {
    int rec[12];
    int area[2000][2000]={};
    for(int i=0;i<12;i++){
        cin >> rec[i];
        rec[i]+=1000;
    }
    for(int i=rec[0];i<rec[2];i++){
        for(int j=rec[1];j<rec[3];j++){
            area[i][j]++;
        }
    }
    for(int i=rec[4];i<rec[6];i++){
        for(int j=rec[5];j<rec[7];j++){
            area[i][j]++;
        }
    }
    for(int i=rec[8];i<rec[10];i++){
        for(int j=rec[9];j<rec[11];j++){
            area[i][j]--;
        }
    }
    int cnt_area=0;
    for(int i=0;i<2000;i++){
        for(int j=0;j<2000;j++){
            if(area[i][j]==1) cnt_area++;
        }
    }
    cout << cnt_area;
    return 0;
}