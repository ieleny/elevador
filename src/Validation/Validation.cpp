
class Validation {

    public:
        bool validarExisteAndar(int andarPressionado, int quantidadeAndares)
        {

            if(andarPressionado > quantidadeAndares){
                return false;
            }

            return true;
        }

        bool validarAndarEmergencia(int andarPressionado, int quantidadeAndares)
        {

            if(andarPressionado == quantidadeAndares){
                return true;
            }

            return false;
        }

};