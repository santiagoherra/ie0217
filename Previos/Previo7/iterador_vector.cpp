#include <iostream>
#include <vector>

using namespace std;

int main() {
   //Se crea contenedor vector
   vector <string> languages= {"Python", "C++","Java"};
   //Se crea el ierador de strings
   vector <string>:: iterator itr;
   // Se imprime con el iterador
   for (itr = languages.begin(); itr != languages.end();itr++){ 
      cout << *itr<< ", "; 
   }

   return 0;
}

