//
// Created by Maria Hilda Bermejo on 6/2/20.
//

#include "CRectangulo.h"

Tnumero CRectangulo::Area()
{
  return largo*ancho;
}

Tnumero CRectangulo::Perimetro()
{
  return 2*ancho + 2*largo;
}