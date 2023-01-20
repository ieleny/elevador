#ifndef ANDAR_H
#define ANDAR_H

class Andar {

    private:
        int proximoAndar = 0;
        int andarAnterior = 0;
        int andarAtual = 0;
        int const QUANTIDADEDEANDARES = 20;

        void setProximoAndar(int proximoAndar) {
            this->proximoAndar = proximoAndar;
        }

        void setAndarAnterior(int andarAnterior) {
            this->andarAnterior = andarAnterior;
        }

        void setAndarAtual(int andarAtual) {
            this->andarAtual = andarAtual;
        }

    public:    
        int getProximoAndar(){
            return this->proximoAndar;
        }

        int getAndarAnterior(){
            return this->andarAnterior;
        }

        int getAndarAtual(){
            return this->andarAtual;
        }

        int getQuantidadeDeAndares(){
            return QUANTIDADEDEANDARES;
        }

        bool andarTerreo()
        {
            if(this->andarAtual == 0){
                return true;
            }

            return false;
        }

        void definirAndar(int andar)
        {
            if(getAndarAtual() == 0){
               setAndarAtual(andar);
               setProximoAndar(andar);
            }else{
               setAndarAnterior(this->andarAtual);
               setProximoAndar(andar);
               setAndarAtual(andar);
            }
        }

};

#endif