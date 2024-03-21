//no utilizar el goto nunca, es mala practica

#include <iostream>
using namespace std;

int main() {
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        
        if(num < 0.0){ // condicion goto
            goto jump;
        
        }
        sum += num;
    
    }
    jump: //salto al label de jump, la logica se vuelve confusa
    average = sum / (i - 1);
    cout << "\nAverage = " << average;

    return 0;
}
