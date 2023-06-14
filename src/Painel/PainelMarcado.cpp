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
            printf(" ----------------------------\n");
        }

        void painelMarcado(Andar andar) 
        { 
            const int andarAtual = andar.getAndarAtual();
            const int quantidadeAndares = andar.getQuantidadeDeAndares();

            for(int i = 1; i <= quantidadeAndares; i++){
                    if(andarAtual == i){  
                        printf(" |          ");
                        printf(" (%d)",i);
                        printf("           |\n");
                    }else if(i == quantidadeAndares){
                        printf(" | %d - Botao de Emergencia |\n",i);
                    }else{
                        printf(" |          ");
                        printf(" |%d|",i);
                        printf("           |\n");
                    }
            }
        }
};