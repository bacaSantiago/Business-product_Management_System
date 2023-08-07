#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;


class Producto{
private:
  string nombre;
  string modelo;
  string descripcion;
  int stock;
  double precio;
  double descuento;
public:
  Producto();
  Producto(string nombre, string modelo, string descripcion, int stock, double precio, double descuento);  
  string getNombre();
  string getModelo();
  string getDescripcion();
  int getStock();
  double getPrecio();
  double getDescuento();
  void setNombre(string nombre);
  void setModelo(string modelo);
  void setDescripcion(string descripcion);
  void setStock(int stock);
  void setPrecio(double precio);
  void setDescuento(double descuento);
  void imprimirProducto();
};

#endif