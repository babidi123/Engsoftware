#include<iostream>
#include<string>

class instrutor{

private:
    char nome_instrutor[100];
    int matricula;
    int senha;

public:
    void cadastra_instrutor(){
        std::cin>>matricula;
        std::cin.getline(nome,100);
        std::cin>>senha;
    }

};

class aluno{

private:

    char nome_aluno[100];
    int cpf;
    int altura;
    float peso;
    float imc;
    float massam;

public:
void cadastra_aluno(){
        std::cin>>cpf;
        std::cin.getline(nome,100);
        std::cin>>altura;
        std::cin>>peso;
        std::cin>>imc;
        std::cin>>massam;
}
int getcpf(){
    return cpf;
}
};

class 
