#include "src/Application/Elevador.cpp"

using namespace std;

int main(int argc, char *argv[])
{
   Elevador elevador;

   int LOOP = 0;

   do{
      elevador.painelElevador();
      elevador.digitarAndar();

      LOOP += 1;
   }while(LOOP != 21);


   system("PAUSE");
};