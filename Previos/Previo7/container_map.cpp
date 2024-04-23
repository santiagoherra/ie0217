#include <iostream>
#include <map> 
using namespace std;

int main(){
    //Definicion de map con key = int y valores = string
    map<int, string> student; 
    //Agregando estudiantes en el map
    student [1] = "Jacqueline";
    student [2] = "Blake";

    //Agregar estudiantes con insert
     student.insert(make_pair(3, "Denise"));
     student.insert(make_pair(4, "Blake"));

    //Se sobre escriben, solo puede haber un solo key
     student[5] = "Timothy";
     student[5] = "Aaron"; 


     for (int i=1; i <= student.size();++i){
        cout<< "Student [" << i <<"]:"<< student[i]<< endl;
     }

    return 0;
}

