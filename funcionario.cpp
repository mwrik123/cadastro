#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

//pega o nome do funcionairo por parametro
void funcionario :: setNome(string& n){
    nome = n;
}
string funcionario :: getNome(){
    return nome;
}

//pega o salariobase do funcionario por parametro
void funcionario :: setSalarioBase(float s){
    salarioBase = s;
}
float funcionario :: getSalarioBase(){
    return salarioBase;
}

//pega o id do funcionario por parametro
void funcionario :: setId(int i){
    id = i;
}
int funcionario :: getId(){
    return id;
}

//exibe informações comuns do funcionario
void funcionario :: exibirInfo(){
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Salario base $: " << salarioBase << endl;
}