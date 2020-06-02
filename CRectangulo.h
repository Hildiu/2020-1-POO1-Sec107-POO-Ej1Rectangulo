//
// Created by Maria Hilda Bermejo on 6/2/20.
//

#ifndef EJEMPLO_01_CRECTANGULO_H
#define EJEMPLO_01_CRECTANGULO_H

#include <iostream>
using namespace std;

using Tnumero=double;

class CRectangulo {
private:
  Tnumero largo;
  Tnumero ancho;
public:
  CRectangulo(){}  //-- constructor por defecto
  CRectangulo(Tnumero _largo, Tnumero _ancho):largo(_largo), ancho(_ancho){};
  virtual ~CRectangulo(){ cout << "Destruyendo el objeto...\n"; };

  //-- metodos de acceso
  void    setLargo(Tnumero  _largo) { largo = _largo; }
  Tnumero getLargo(){ return largo;}
  void    setAncho(Tnumero _ancho){ ancho=_ancho;}
  Tnumero getAncho(){ return ancho;}
  //--- mas metodos
  Tnumero Area();
  Tnumero Perimetro();
};


#endif //EJEMPLO_01_CRECTANGULO_H
