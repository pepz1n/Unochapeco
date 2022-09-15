#include <iostream>
#include "classes.h"
using namespace std;

int main () {
  cout << "Motorista: " << endl ;
  Motorista motorista;
  motorista.setCnh("07671446974");
  motorista.setNome("Mariana");

  motorista.listar();
  
  cout << "\n\n" << "Passeio: " << endl;
  
  Passeio passeio;
  passeio.setPlaca("abc-123");
  passeio.setAno(2004);
  passeio.setModelo("Celta");
  passeio.setMarca("chevrolet");
  passeio.setNumPortas(2);
  passeio.setVolume(3.5);

  passeio.dados();
  
  cout << "\n\n" << "Carga: " << endl;

  Carga carga;
  carga.setPlaca("abc-123");
  carga.setAno(2004);
  carga.setModelo("ls 750");
  carga.setMarca("Volvo");
  carga.setTonelagem(2.5);
  carga.setCombustivel("diesel");
  carga.setConsumo(7.3);

  carga.dados();

  cout << "\n\n" << "Viagem:" << endl;

  Viagem viagem; 
  viagem.setOrigem("Chapeco");
  viagem.setDestino("Florianopolis");
  viagem.setDistancia(577.0);
  viagem.setDataIda("01/12/2022");
  viagem.setDataVolta("10/12/2022");
  viagem.setMotorista(&motorista);
  viagem.setCarga(&carga);

  viagem.listar();
  cout << "\n\n\nAbastecer: " << endl;
  viagem.abastecer();
}