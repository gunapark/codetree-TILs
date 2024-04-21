#include <iostream>
#include <string>
using namespace std;

bool is_yoon_year(int Y){
    if(Y%4==0){
        if(Y%100==0){
            if(Y%400==0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

bool is_in_day(int Y, int M, int D){
    if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12) return true;
    else{
        if(M==2 && is_yoon_year(Y)){
            if(D>29) return false;
            else return true;
        }
        if(D>29) return false;
        else return true;
    }
}



int main() {
    // 여기에 코드를 작성해주세요.
    int Y, M, D;
    cin >> Y >> M >> D;

    if(is_in_day(Y,M,D)){
        if(M>=3 && M <=5){
            cout << "Spring";
        } else if(M>=6 && M<=8){
            cout << "Summer";
        } else if(M>=9 && M<=11){
            cout << "Fall";
        } else cout << "Winter";

    } else cout << -1;

    return 0;
}