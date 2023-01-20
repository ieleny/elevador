#include <iostream>

#include "../Interface/IPainel.h"

class PainelMarcado : public IPainel{

    public:

        PainelMarcado(){};

        void desenhaPainel(Andar andar)
        {
            desenharTituloPainel();
            painelMarcado(andar);
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

        void painelMarcado(Andar andar) 
        { 
            const int andarAtual = andar.getAndarAtual();
            const int quantidadeAndares = andar.getQuantidadeDeAndares();

            for(int i = 1; i <= quantidadeAndares; i++){

                printf(" |          ");

                    if(andarAtual == i){
                        printf(" (%d)",i);
                    }else{
                        printf(" |%d|",i);
                    }

                printf("           |\n");
            }
        }
};