#include "text_processor.hpp"
#include <fstream>
#include <regex>

//Constructor de la clase TextProccesor
TextProcessor::TextProcessor(const std::string& input_filename, const std::string& output_filename) :
    input_filename(input_filename), output_filename(output_filename){}

//Constructor del metodo replace
void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string){
    std::ifstream input_file(input_filename); //Escoge el inputfile
    std::ofstream output_file(output_filename);// Escoge el outputfile
    std::string line;

    std::regex pattern(search_pattern);

    // Reemplaza las lineas deseadas
    if(input_file && output_file){
        while(getline(input_file, line)){
            std::string replaced =  std::regex_replace(line, pattern, replace_string);
            output_file << replaced << "\n";
        }
    }
}

