#include <iostream>
int main(){
    int   entero = 0;
    bool  booleano = true;
    char  letra = 'A';
    float decimal =0.5;

    std::cout << "Tamaño Entero: " << sizeof(entero) << std::endl;
    std::cout << "Tamaño booleano: " << sizeof(booleano) <<std:: endl;
    std::cout << "Tamaño letra: " << sizeof(letra) << std::endl;
    std::cout << "Tamaño decimal: " << sizeof(decimal) << std::endl;

    return 0;
    
    }