#include "ahorcado.hpp"

#include <random>
#include <string>
using namespace std;

std::string listaPalabras[100];
int palabras_agregadas = 0;

int dificultad(){
    int decision;
    int intentos;

    cout << "Escogengiendo dificultad:\n 1) Facil (7 intentos)\n 2) Media (5 intentos)\n 3) Dificil (3 intentos)" << endl;
    cout << "Si no se escoge opcion se pondra en dificultad facil" << endl;
    cin >> decision;

    enum dificultad{
        facil = 1,
        media,
        dificil
    };

    switch (decision)
    {
    case facil:
        intentos = 7;
        break;

    case media:
        intentos = 5;
        break;
    
    case dificil:
        intentos = 3;
        break;

    default:
        intentos = 7;
        break;
    }    
    
    return intentos;
};

void mostrar_estado(ahorcado* juego){
    cout << "Palabra a adivinar = " << juego->palabraAdivinada << endl;
    cout << "Intentos restantes = " << juego->intentos_max - juego->intentos_realizados << endl;
};


void encontrar_letra(ahorcado* juego){
    char letra;
    cout << "Ingrese una letra " << endl;
    cin >> letra;

    bool acierto = false;
    for(int i = 0; i < juego->palabra.length(); ++i){
        if(juego->palabra[i] == letra){
            juego->palabraAdivinada[i] = letra;
            acierto = true;
        }
    }

    if(acierto == false){
        cout << "letra incorrecta = " << endl;
        juego->intentos_realizados++;
    }
};

bool termino_juego(ahorcado* juego){
    if(juego->palabraAdivinada == juego->palabra){
        cout << "Felicidades terminaste el juego" << endl;
        return false;
    }

    if(juego->intentos_max == juego->intentos_realizados){
        string palabra_ultimo_intento;
        cout << "Te has quedado sin intentos:("<< endl;
        cout << "Puedes ingresar la palabra completa si ya la adivinaste " << endl;
        cin >> palabra_ultimo_intento;

        if (juego->palabra == palabra_ultimo_intento){
            cout << "Felicidades terminaste el juego en el ultimo intento"<< endl;
            return false;
        }
        else{
            cout << "No adivinaste la palabra:( " << endl;
            return false;
        }
        
    }
    return true;
};

void agregar_palabra(string listaPalabras[], int &palabras_agregadas){
    string palabra_incluir;
    cout << "Agrega una palabra: " << endl;
    cin >> palabra_incluir;

    listaPalabras[palabras_agregadas] = palabra_incluir;
    palabras_agregadas++;

}

void ver_palabras(const string listaPalabras[], int palabras_agregadas){

    for(int i = 0; i < palabras_agregadas; ++i){

        cout << listaPalabras[i] << "\n" << endl;
    };
}

int conseguir_numero_aleatorio(int min, int max){
    //generador de numeros aleatorios
    random_device rd; 
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max); 
    
    return dist(gen);
};

void iniciar_juego(int intentos, string listaPalabras[], int palabras_agregadas){
    //para continuar o terminar juego
    bool continuar = true;

    //consiguiendo la palabra para poder jugar
    int numero_aleatorio = conseguir_numero_aleatorio(0,palabras_agregadas);

    ahorcado juego;

    juego.intentos_max = intentos;

    juego.palabra = listaPalabras[numero_aleatorio];

    juego.palabraAdivinada = string(juego.palabra.length(),'_');

    //palabra a jugar ya conseguida en un array

    do{
        //imprimiendo interfaz de juego:
        mostrar_estado(&juego);

        //verificar si termino juego
        continuar = termino_juego(&juego);
        
        //encontrar la letra adivinada
        encontrar_letra(&juego);
        
    }
    while(continuar);
    

};