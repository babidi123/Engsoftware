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
     void login(matricula,senha){

        if (matricula == matricula and senha == senha){
            std::cout<<"acesso garantido";
            return 1;
        }
        else{
            std::cout<<"Matricula ou senha errados";
            return 0;
        }
    }
    void get_matricula(){
        return matricula;
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

    }

    int getcpf(){
        return cpf;
    }
    void atualiza_ficha(){
        std::cin>>altura;
        std::cin>>peso;
        std::cin>>imc;
        std::cin>>massam;
    }
};
class exercicio{
private:
    int codexercicio;
    char nomeexercicio[100];
public:
    void cadastra_exercicio(){
        std::cin>>codexercicio;
        std::cin.getline(nome,100);
       
    }
    int getcodexe(){

        return codexercicio;
    }
};
class fazer_exercicio{
private:
int repeticoes;
int tempo;
int carga;
exercicio E[100];
public:
void exerc_fazer(){

    E[i].getcodexe();
    std::cin>>repeticoes;
    std::cin>>tempo;
    std::cin>>carga;
    
}
};
class serie{
private:
    aluno A;
    fazer_exercicio F[100];
public:
    void nova_serie(int cpf_aluno){
        if(cpf_aluno==A.getcpf()){
            i=0;
            while(1){
                F[i].exerc_fazer();
            }
        }
    }
}
