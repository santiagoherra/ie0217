#include <iostream>
#include "text_processor.hpp"

int main(int argc, char* argv[]){
    if(argc < 5){// Mensaje de error por si la cantidad de argumentos es insuficiente
        std::cerr << "Usage: " << argv[0] << "-f <filename> -o <outputfile> -search <search_pattern> -replace <replace_string>\n";
    }

    //Identifica los argumentos segun lo que son para el programa.
    std::string filename = argv[2];
    std::string outputfile = argv[4];
    std::string search_pattern = argv[6];
    std::string replace_string = argv[8];

    TextProcessor processor(filename, outputfile);
    processor.replace(search_pattern, replace_string);



    return 0;
}