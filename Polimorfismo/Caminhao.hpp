#ifndef CAMINHAO
#define CAMINHAO

#include "Veiculo.hpp"
#include <string>
#include <iostream>
using std::string;
using std::cout;

class Caminhao : public Veiculo {
private:
 int eixos;
public:
 Caminhao(const string& marca, const string& modelo, int capacidade, int eixos);
 void exibirDados() override;
};

#endif