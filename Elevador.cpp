#include <iostream>

using namespace std;

class Elevador {

    private:
        int proximoAndar;
        int andarAnterior;
        int andarAtual = 0;

    public:    
        int const QUANTIDADEDEANDARES = 21;

        void setProximoAndar(int proximoAndar) {
            proximoAndar = proximoAndar;
        }

        void setAndarAnterior(int andarAnterior) {
            andarAnterior = andarAnterior;
        }

        void setAndarAtual(int andarAtual) {
            andarAtual = andarAtual;
        }

        int getProximoAndar(){
            return proximoAndar;
        }

        int getAndarAnterior(){
            return andarAnterior;
        }

        int getAndarAtual(){
            return andarAtual;
        }
};