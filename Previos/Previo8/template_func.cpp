#include <iostream>
using namespace std;

//utilizando template
template <typename T>

//Con template usar func add para el main
T add(T num1, T num2) {
    return (num1 + num2);
}
int main() {
    int result1;
    double result2;
    // Llamando a add con lo parametros dado 
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;
    // Llamando a add pero con variables double
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;
    return 0;
}