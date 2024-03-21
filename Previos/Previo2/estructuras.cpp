#include <iostream>
#include <cstring> // Para usar la función strcpy

using namespace std;

// Definición de la estructura Books
struct Books {
    char title[100];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    // Declaración de dos variables de tipo Books
    struct Books Book1;
    struct Books Book2;

    // Especificaciones del primer libro (Book1)
    strcpy(Book1.title, "Learn C Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C Programming");
    Book1.book_id = 6495407;

    // Especificaciones del segundo libro (Book2)
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Imprimir la información de Book1
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;

    // Imprimir la información de Book2
    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;

    return 0;
}
