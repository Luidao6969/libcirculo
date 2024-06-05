#include "Caminhao.hpp"

Caminhao::Caminhao (const string& marca, const string& modelo, int capacidade, int eixos) :
Veiculo(marca, modelo, capacidade), eixos(eixos) {}

void Caminhao::exibirDados()
{
    cout << "Caminhão - ";
 Veiculo::exibirDados();
 std::cout << "Eixos: " << eixos << "\n";
}