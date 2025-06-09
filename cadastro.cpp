#include "funcionario.hpp"
#include "desenvolvedor.hpp"
#include "estagiario.hpp"
#include "gerente.hpp"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    //i como contador do vetor, p para escolher o tipo de funcionario, id do funcionario
    int i = 0, p, id;
    //nome, salario base do funcionario e vetor de ponteiros
    string nome;
    float salarioBase;
    vector<funcionario*> func(10);
    //tela para cadastrar os funcionarios
    while(i < 6 || i < 10 ){
        cout << "Escolha o tipo de funcionário:" << endl;
        cout << "1. Estagiario" << endl;
        cout << "2. Desenvolvedor" << endl;
        cout << "3. Gerente" << endl;
        cout << "4. Encerrar" << endl;
        cout << "----------------------------" << endl;
        cin >> p;
        //condição de parada
        if(i > 5 && p == 4){
            break;
        } else if(i < 6 && p == 4){
            //caso nao tenha 6, pede para que cadastre mais funcionarios
            cout << "Cadastre mais funcionarios!" << endl;
            cout << "----------------------------" << endl;
            continue;
        }
        //recolhendo dados comuns
        cout << "Nome: " << endl;
        cin >> nome;
        cin.ignore();
        cout << "ID: " << endl;
        cin >> id;
        cout << "Salario base: " << endl;
        cin >> salarioBase;
        //ponteiro nulo para funcionario
        funcionario * f = nullptr;
        //chamadas de funcionarios especificos e upcasting
        if(p == 1){
            estagiario* e = new estagiario;
            e->setHorasTrabalhadas();
            cout << "----------------------------" << endl;
            f = e;
        } else if(p == 2){
            desenvolvedor* d = new desenvolvedor;
            d->setQntdprojetos();
            cout << "----------------------------" << endl;
            f = d;
        } else if(p == 3){
            gerente* g = new gerente;
            g->setBonusMensal();
            cout << "----------------------------" << endl;
            f = g;
        }
        //vinculando o fucnionario ao vetor
        if(f){
            f->setId(id);
            f->setNome(nome);
            f->setSalarioBase(salarioBase);
            func[i] = f;
        }
        i++;
    }
    //exibição de funcionarios
    for(int j = 0; j < i; j++){
        func[j]->exibirInfo();
        cout << "----------------------------" << endl;
    }

    //libera memoria alocada
    for(int j = 0 ; j < i; j++){
        delete func[j];
    }
}