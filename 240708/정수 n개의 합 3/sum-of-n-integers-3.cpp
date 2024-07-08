#include <iostream>
using namespace std;

#define MAX_N 500

int n,k;
int mat[MAX_N+1][MAX_N+1];
int mat_ps[MAX_N+1][MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >>k;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int num;
            cin >> num;
            mat[i][j] = num;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            mat_ps[i][j]=mat_ps[i-1][j]+mat_ps[i][j-1]-mat_ps[i-1][j-1]+mat[i][j];
        }
    }


    int max_area = -1;

    for(int i=k;i<=n;i++){
        for(int j=k;j<=n;j++){
            int area=mat_ps[i][j]-mat_ps[i-k][j]-mat_ps[i][j-k]+mat_ps[i-k][j-k];
            if(area>max_area) max_area=area;
        }
    }
    cout << max_area;
    return 0;
}