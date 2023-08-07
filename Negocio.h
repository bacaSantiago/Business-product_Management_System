#ifndef NEGOCIO_H
#define NEGOCIO_H
#include "Producto.h"
#include <string>
using namespace std;

class Negocio{
  private:
    string nombre;
    string slogan;
    string url;
    string direccion;
    string telefono;
    Producto productos[5];
  public:
    Negocio();
    Negocio(string nombre, string slogan, string url, string direccion, string telefono);
    string getNombre();
    void setNombre(string nombre);
    string getSlogan();
    void setSlogan(string slogan);
    string getURL();
    void setURL(string url);
    string getDireccion();
    void setDireccion(string direccion);
    string getTelefono();
    void setTelefono(string telefono);
    Producto* getProductos();
    void setProductos(Producto* productos);
    void imprimirNegocio();
};
#endif