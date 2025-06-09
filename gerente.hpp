#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "funcionario.hpp"

using namespace std;

//subclasse herdando funcionario como herança

class gerente : public funcionario {
    private:
        float bonusMensal;
    public:
        //pega o bonus mensal
        void setBonusMensal();

        //sobrescreve calculasal e exibir info
        float calculaSal() override;
        void exibirInfo() override;
};
#endif