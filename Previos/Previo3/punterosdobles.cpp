#include  <iostream>
using namespace std;

int main(){

    int var = 20;
    int* ptr_var;
    ptr_var = &var;

    cout << "var = " << var <<  ", ptr_var = " << ptr_var << endl;
    int** ptr_ptr_var;
    ptr_ptr_var = &ptr_var;
    cout << " ptr_ptr_var = " << ptr_ptr_var <<  endl;


    return 0;

}
