#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    week today;
    today = Wednesday;
    cout << "Day: " << today + 1;//ejemplo de la asignacion que posee los enums sin nombrar.
    // el today + 1 es jueves por la manera en que C asigna los valores
    return 0;
}
