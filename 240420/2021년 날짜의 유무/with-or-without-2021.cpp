#include <iostream>
using namespace std;

bool is_in_2021(int M, int D){
    if(M==1){
        if(D>31) return false;
        else return true;
    }
    if(M==2){
        if(D>28) return false;
        else return true;
    }
    if(M==3){
        if(D>31) return false;
        else return true;
    }
    if(M==4){
        if(D>30) return false;
        else return true;
    }
    if(M==5){
        if(D>31) return false;
        else return true;
    }
    if(M==6){
        if(D>30) return false;
        else return true;
    }
    if(M==7){
        if(D>31) return false;
        else return true;
    }
    if(M==8){
        if(D>31) return false;
        else return true;
    }
    if(M==9){
        if(D>30) return false;
        else return true;
    }
    if(M==10){
        if(D>31) return false;
        else return true;
    }
    if(M==11){
        if(D>30) return false;
        else return true;
    }
    if(M==12){
        if(D>31) return false;
        else return true;
    }
    return false;
}

int main() {
    int M, D;

    cin >> M >> D;

    if(is_in_2021(M,D)) cout << "Yes";
    else cout << "No";
    return 0;
}