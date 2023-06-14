#include <iostream>
using namespace std;

#include "PainelDesmarcado.cpp"
#include "PainelMarcado.cpp"
#include "../Application/Andar.h"
#include "../Validation/Validation.cpp"

class Painel {

    private:
        int andarPressionado = 0;
        Andar andar;
        PainelDesmarcado painelDesmarcado;
        PainelMarcado painelMarcado;
        Validation validation;

    public: 

        void desenharPainel()
        {
            cout << "Andar Atual: " << andar.getAndarAtual() << endl;
            cout << "Andar Anterior: " << andar.getAndarAnterior() << endl;

            if(andar.andarTerreo() == 1){
                painelDesmarcado.desenhaPainel(andar);
            }else{
                painelMarcado.desenhaPainel(andar);
            }
        }

        void digiteNumeroAndar()
        {
            printf(" DIGITE SEU ANDAR: ");
            scanf("%d",&andarPressionado);

            salvar(andarPressionado);
        }

        void salvar(int andarPressionado)
        {
            if(validation.validarExisteAndar(andarPressionado, andar.getQuantidadeDeAndares()) == 1 && validation.validarAndarEmergencia(andarPressionado, andar.getQuantidadeDeAndares()) == 0){
                andar.definirAndar(andarPressionado);
            }else if(andarPressionado == andar.getQuantidadeDeAndares() ){
                cout << "Aguarde! Que em algum momento alguem irá te ajudar" << endl;
            }else{
                cout << "Esse andar nao existe, por favor digite outro numero" << endl;
            }
        }

};