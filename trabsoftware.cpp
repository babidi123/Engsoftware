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
        std::cin.getline(nome_instrutor,100);
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
    int get_matricula(){
        return matricula;
    }
    char get_nome_instrutor(){
        return nome_instrutor;
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
int codexercicio;
exercicio E[100];
public:
void exerc_fazer(){
        std::cin>>codexercicio;
        for(i=0;i<=100,i++)
        {
        if(codexercicio==E[i].getcodexe){
            std::cin>>repeticoes;
            std::cin>>tempo;
            std::cin>>carga;  
            }
        else{
            i=0
            std::cout<<"exercício inexistente"
                
        }
            

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
class avaliar{
private:

    int nota;
    instrutor I[10];
    aluno A;
    
public:

    void inserir_avaliacao(char nome[],int cpf){
        if(cpf==A.getcpf()){
            for(i=0;i<10;i++){

                if(std::string::compare(nome,I[i].get_nome_instrutor())){
                    std::cin>>nota;
                }
            }
        }
    }
    int getnota(){
        return nota;
    }
}

class gestor{
private:
    int matricula_gestor;
    char nome_gestor[100];
    int senha;

public:
    void cadastra_gestor(){
        std::cin>>matricula_gestor;
        std::cin.getline(nome_gestor,100);
        std::cin>>senha;
    }
};
class gestao{

private:
    avaliar AV[100];
    instrutor I[10];
    aluno A[100];
    gestor G;
public:
    int fluxo_aluno(){
        std::cout<<"implementaremos ainda";
        return 0;
    }
    float media_instrutor(char nome_instrutor[]){

        float soma=0.0;
        int n=0;
        for(j=0;j<100;j++){
            for(k=0;k<10,k++){
                if(std::string::compare(nome_instrutor=I[k].get_nome_instrutor())){
                    soma=soma+AV[j].inserir_avaliacao(nome_instrutor,A[j].getcpf())
                    n++;
                }
            }
        }
        return soma/n
    }

};
