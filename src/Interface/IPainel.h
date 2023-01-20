#ifndef IPAINEL_H
#define IPAINEL_H

#include "../Application/Andar.h"

class IPainel {

    public:
        virtual void desenhaPainel(Andar andar) = 0;
        virtual void desenharTituloPainel() = 0;
        virtual void desenharSubTituloPainel() = 0;
};

#endif