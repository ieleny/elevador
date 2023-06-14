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
            printf(" ----------------------------\n");
        }

        void painelDesmarcado(Andar andar) 
        { 
            const int quantidadeAndares = andar.getQuantidadeDeAndares();

            for(int i = 1; i <= quantidadeAndares; i++){

                if(i == quantidadeAndares){
                    printf(" | %d - Botao de Emergencia |\n",i);
                }else{
                    printf(" |          ");
                    printf(" |%d|",i );
                    printf("           |\n");
                }
            }
        }


};