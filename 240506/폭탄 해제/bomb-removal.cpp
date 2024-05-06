#include <iostream>
#include <string>
using namespace std;

class bomb{
    public:
        string code;
        char color;
        int sec;

        bomb(string code="", char color='a', int sec=0){
            this->code = code;
            this->color = color;
            this->sec = sec;
        }
};

int main() {
    bomb jong;
    cin >> jong.code >> jong.color >> jong.sec;
    cout << "code : " << jong.code << endl;
    cout << "color : " << jong.color << endl;
    cout << "second : " << jong.sec;
}