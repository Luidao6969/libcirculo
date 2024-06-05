#ifndef VAN
#define VAN

#include "Veiculo.hpp"
#include <string>
#include <iostream>
using std::string;
using std::cout;

class Van : public Veiculo {
private:
 int passageiros;
public:
 Van(const string& marca, const string& modelo, int capacidade, int passageiros);
 void exibirDados() override;
};

#endif