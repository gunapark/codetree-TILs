#include <iostream>
#include <string>
using namespace std;

class abc{
    public:
        string seccode;
        char place;
        int time;

    abc(string _seccode, char _place, int _time){
        this->seccode = _seccode;
        this->place = _place;
        this->time = _time;
    }
};

int main() {
    string code;
    char point;
    int time;
    cin >> code >> point >> time;
    abc qwe = abc(code,point,time);
    cout << "secret code : " << qwe.seccode << endl;
    cout << "meeting point : " << qwe.place << endl;
    cout << "time : " << qwe.time;
    return 0;
}