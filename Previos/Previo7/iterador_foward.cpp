#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    //Lista de numeros
    forward_list<int> nums{1, 2, 3, 4};
    //iterador de la lista de numeros
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()){
        int original_value = *itr;
        //Modificando los valores
        *itr = original_value * 2;

        itr ++;
    }

    for (int num : nums){
        cout << num << ", ";
    }
    return 0;
}