#include <iostream>
#include <TazoDorado>
int main ()
{
    TazoDorado coqueto;

    coqueto.Flotar();

    std::cout<<"El coqueto esta flotando?"
    <<std::endl
    <<coqueto.Flotando()
    <<std::endl;
}