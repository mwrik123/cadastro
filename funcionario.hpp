#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

using namespace std;

//cria classe fucnionario
class funcionario{
    protected:
        string nome;
        float salarioBase;

    private:
        int id;

    public:
        //pega o nome do funcionario
        void setNome(string& n);
        string getNome();

        //pega o salario base do funcionario
        void setSalarioBase(float s);
        float getSalarioBase();


        //pega o id do funcionario
        void setId(int i);
        int getId();

        //metodos virtuais para exibir informações
        virtual void exibirInfo();
        //metodo virtual puro, tornando a classe abstrata
        virtual float calculaSal() = 0;
        //destrutor
        virtual ~funcionario() {}
};
#endif