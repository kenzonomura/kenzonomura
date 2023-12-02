#include <iostream>
#include <typeinfo>
#include <string>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"
using namespace std;
int main(){
    Teste_Limite testeA;

    switch(testeA.run()){
        case Teste_Limite::Sucesso: cout<<"SUCESSO - LIMITE"<<endl;
                                    break;
        case Teste_Limite::Falha  : cout<<"FALHA - LIMITE"<<endl;
                                    break;
    }
Teste_Coluna testeB;

    switch(testeB.run()){
        case Teste_Coluna::Sucesso: cout<<"SUCESSO - COLUNA"<<endl;
                                    break;
        case Teste_Coluna::Falha  : cout<<"FALHA - COLUNA"<<endl;
                                    break;
    }

Teste_Codigo testeC;

    switch(testeC.run()){
        case Teste_Codigo::Sucesso: cout<<"SUCESSO - CODIGO"<<endl;
                                    break;
        case Teste_Codigo::Falha  : cout<<"FALHA - CODIGO"<<endl;
                                    break;
    }

Teste_Texto testeD;

    switch(testeD.run()){
        case Teste_Texto::Sucesso: cout<<"SUCESSO - TEXTO"<<endl;
                                    break;
        case Teste_Texto::Falha  : cout<<"FALHA - TEXTO"<<endl;
                                    break;
    }

Teste_Senha testeE;

    switch(testeE.run()){
        case Teste_Senha::Sucesso: cout<<"SUCESSO - SENHA"<<endl;
                                    break;
        case Teste_Senha::Falha  : cout<<"FALHA - SENHA"<<endl;
                                    break;
    }

Teste_Email testeF;

    switch(testeF.run()){
        case Teste_Email::Sucesso: cout<<"SUCESSO - EMAIL"<<endl;
                                    break;
        case Teste_Email::Falha  : cout<<"FALHA - EMAIL"<<endl;
                                    break;
    }

Teste_Conta testeG;

    switch(testeG.run()){
        case Teste_Conta::Sucesso: cout<<"SUCESSO - CONTA"<<endl;
                                    break;
        case Teste_Conta::Falha  : cout<<"FALHA - CONTA"<<endl;
                                    break;
    }
Teste_Quadro testeH;

    switch(testeH.run()){
        case Teste_Quadro::Sucesso: cout<<"SUCESSO - QUADRO"<<endl;
                                    break;
        case Teste_Quadro::Falha  : cout<<"FALHA - QUADRO"<<endl;
                                    break;
    }

Teste_Cartao testeI;

    switch(testeI.run()){
        case Teste_Cartao::Sucesso: cout<<"SUCESSO - CARTAO"<<endl;
                                    break;
        case Teste_Cartao::Falha  : cout<<"FALHA - CARTAO"<<endl;
                                    break;
    }
}
