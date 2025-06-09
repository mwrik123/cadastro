#include "gerente.hpp"
#include <iostream>

using namespace std;

//pega o bonus mensal
void gerente :: setBonusMensal(){
    cout << "Bonus mensal: " << endl;
    cin >> bonusMensal;
}

//calcula o salario final
float gerente :: calculaSal(){
    return salarioBase + bonusMensal;
}

//exibe informações do gerente
void gerente :: exibirInfo(){
    funcionario :: exibirInfo();
    cout << "Cargo: Gerente" << endl;
    cout << "Bonus mensal: " << bonusMensal << endl;
    cout << "Salario final $: " << calculaSal() << endl;
}