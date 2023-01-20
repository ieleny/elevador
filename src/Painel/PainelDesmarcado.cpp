#include <iostream>
using namespace std;

#include "../Interface/IPainel.h"

class PainelDesmarcado : public IPainel{

    public:
        PainelDesmarcado(){};

        void desenhaPainel(Andar andar)
        {
            desenharTituloPainel();
            painelDesmarcado(andar);
            desenharSubTituloPainel();
        }

        void desenharTituloPainel()
        {
            printf("  Painel do Elevador - INTERNO \n");
            printf(" -------------------------------\n");
        }

        void desenharSubTituloPainel()
        {
            printf(" | 21 - Botao de Emergencia |\n");
            printf(" ----------------------------\n");
        }

        void painelDesmarcado(Andar andar) 
        { 
            for(int i = 1; i <= andar.getQuantidadeDeAndares(); i++){
                printf(" |          ");
                printf(" |%d|",i );
                printf("           |\n");
            }
        }


};