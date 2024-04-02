#include <iostream>
using namespace std;

class Student {

    public:

        double marks;

        Student(double m){
            marks = m;
        }
};


void calculateAverage(Student s1, Student s2) {//se pasan a los objetos como parametros
    
    double average = (s1.marks + s2.marks) / 2;
    
    cout << "Average Marks = " << average << endl;
}

int main() {

    Student student1(88.0), student2(56.0);
    
    calculateAverage(student1, student2);//si funciona.
    
    return 0;
}