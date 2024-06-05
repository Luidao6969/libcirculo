#include "Veiculo.hpp"
#include "Van.hpp"
#include "Caminhao.hpp"
#include <vector>
#include <iostream>
using std::vector;
using std::endl;
using std::cout;

int main(){

    Van escolar("Volkswagen", "V8", 3, 15);
    Van transporte("BMW", "V10", 5, 22);
    Caminhao carga("Mercedes", "C33", 100, 8);
    Caminhao mudanca("Fiat", "C29", 30, 3);
    Veiculo charrete("De madeira", "Bois", 1);
    Veiculo bicicleta("BMX", "Manobras", 0.2);

    vector<Veiculo*> veiculos;
    veiculos.push_back(&escolar);
    veiculos.push_back(&transporte);
    veiculos.push_back(&carga);
    veiculos.push_back(&mudanca);
    veiculos.push_back(&charrete);
    veiculos.push_back(&bicicleta);

    for(auto v : veiculos)
    {
        v->exibirDados();
    } 
    system("pause");
    return 0;
}
