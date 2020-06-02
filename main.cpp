//-- Datos de entrada: largo, ancho (double)
//-- Datos de salida : area, perimetro (double)

#include <iostream>
#include "CRectangulo.h"

using namespace std;

int main()
{
  CRectangulo   R1;  //-- se esta utilizando el constructor por defecto.

  R1.setLargo(45.0);
  R1.setAncho(23.50);
  cout << "El area es : " << R1.Area() << "\n";
  cout << "El perimetro es : " << R1.Perimetro() << "\n";

  CRectangulo R2;
  Tnumero l,a;

  cout << "Largo : ";
  cin >> l;
  cout << "Ancho : ";
  cin >> a;
  R2.setAncho(a);
  R2.setLargo(l);
  cout << "El valor del area es : " << R2.Area() <<"\n";
  cout << "El valor del perimetro : " << R2.Perimetro() << "\n";

  cout << "Tercer objeto de la clase CRectangulo\n";
  cout << "Largo : "; cin>>l;
  cout <<"Ancho  :  ", cin>>a;
  CRectangulo R3(l,a);
  cout << "El area es " << R3.Area() <<"\n";
  cout << "El perimetro es : " << R3.Perimetro() << "\n";

  return 0;
}

