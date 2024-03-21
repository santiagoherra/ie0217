#include <iostream>
using namespace std;

enum seasons {spring = 34,
             summer = 4,
             autumn = 9,
             winter = 32}; //enumeracion, es como un diccionario pero para C

int main() {
    seasons s;
    s = summer; 
    
    cout << "Summer: " << s << endl; //invocacion de enum para print
    
    return 0;
}
