#include "estagiario.hpp"
#include <iostream>

using namespace std;

//pega as horas trabalhadas do estagiario
void estagiario :: setHorasTrabalhadas(){
    cout << "Horas trabalhadas: " << endl;
    cin >> horasTrabalhadas;
}

//calcula o salario final
float estagiario :: calculaSal(){
    return salarioBase * (horasTrabalhadas/160.0);
}


//exibe informações do estagiario e as basicas como funcionario
void estagiario :: exibirInfo(){
    funcionario :: exibirInfo();
    cout << "Cargo: Estagiario"<< endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salario final $: " << calculaSal() << endl;
}