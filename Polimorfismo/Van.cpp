#include "Van.hpp"
#include <iostream>
using std::cout;

Van::Van(const std::string& marca, const std::string& modelo, int
capacidade, int passageiros) : Veiculo(marca, modelo, capacidade), passageiros(passageiros)
{}
 void Van::exibirDados()
{
 std::cout << "Van - ";
 Veiculo::exibirDados();
 std::cout << "Passageiros: " << passageiros << "\n";
}
