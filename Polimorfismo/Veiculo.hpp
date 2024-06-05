#ifndef VEICULO
#define VEICULO
#include <string>
using std::string;

class Veiculo {
protected:
 string marca;
 string modelo;
 int capacidade; // Capacidade de carga em toneladas
public:
 Veiculo(const string& marca, const string& modelo, int capacidade);
 virtual void exibirDados();
 };

#endif