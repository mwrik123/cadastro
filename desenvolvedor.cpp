#include "desenvolvedor.hpp"
#include <iostream>

using namespace std;

//pega a quantidade de projetos do desnvolvedor
void desenvolvedor :: setQntdprojetos(){
    cout << "Quantidade de projetos: " << endl;
    cin >> qntdprojetos; 
}

//calcula salario final
float desenvolvedor :: calculaSal(){
    return salarioBase + (500 * qntdprojetos);
}

//exibe informações do desenvolvedor e do funcionario
void desenvolvedor :: exibirInfo(){
    funcionario :: exibirInfo();
    cout << "Cargo: Desenvolvedor" << endl;
    cout << "Projetos: " << qntdprojetos << endl;
    cout << "Salario final $: " << calculaSal() << endl;
}