#include <iostream>
#include <string>
using namespace std;

auto aoc(int a, char o, int c){
    if(o=='+')
        return a+c;
    else if(o=='-')
        return a-c;
    else if(o=='/')
        return a/c;
    else if(o=='*')
        return a*c;
    else return -300;
    
}
int main() {
    int a, c;
    char o;

    cin >> a >> o >> c;

    if(aoc(a,o,c)==-300){
        cout << "False";
    } else  cout <<a<<" "<<o<<" "<<c<<" = " <<aoc(a,o,c);

    return 0;
}