#include <iostream>
using namespace std;

#define MI_PRIMER  10

enum seasons{
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32

};

enum enumcito{
    carro,
    casa,
    arbol,
    patio
};

int main(){
    seasons s;
    s = summer;
    cout << "Summer = " << s << endl;
    cout << "Define: " << MI_PRIMER << endl;
    return 0;
}