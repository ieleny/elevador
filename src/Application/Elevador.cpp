#include "../Painel/Painel.cpp"

class Elevador {

    private:
        Painel painel;

    public:
        void painelElevador()
        {
            painel.desenharPainel();
        }

        void digitarAndar()
        {
            painel.digiteNumeroAndar();
        }

};