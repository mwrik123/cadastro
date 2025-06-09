#ifndef ESTAGIARIO_HPP
#define ESTAGIARIO_HPP

#include "funcionario.hpp"
using namespace std;

//subclasse herdando funcionario como herança

class estagiario : public funcionario{
    private:
        int horasTrabalhadas;
    public:
        //pega as horas trabalhadas
        void setHorasTrabalhadas();
        
        //sobrescreve calculasal e exibir info
        float calculaSal() override;
        void exibirInfo() override;
};
#endif