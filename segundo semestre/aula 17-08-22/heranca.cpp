#include <iostream>
#include "classe1.h"
using namespace std;


int main()
{
  Pessoa Mateus(1, "Mateus", "xaxim", "SC");
  Mateus.mostrar();
  Atleta usingBolt(1011, "jao", 78, 1.78, "XAXIM", "SC");
  usingBolt.listar();
}