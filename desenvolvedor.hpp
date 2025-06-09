#ifndef DESENVOLVEDOR_HPP
#define DESENVOLVEDOR_HPP

#include "funcionario.hpp"

using namespace std;

//subclasse herdando funcionario como herança

class desenvolvedor : public funcionario {
    private:
        int qntdprojetos;
    public:
        //pega a quantidade de projetos
        void setQntdprojetos();

        //sobrescreve calculasal e exibir info
        float calculaSal() override;
        void exibirInfo() override;
    
};
#endif