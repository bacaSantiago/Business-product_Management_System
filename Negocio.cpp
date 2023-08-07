#include "Negocio.h"
#include <iostream>
using namespace std;

int selecc;
double promedioNeg;

Negocio::Negocio()
{
  nombre = "Sin nombre";
  slogan = "Sin slogan";
  url = "Sin url";
  direccion = "Sin dirección";
  telefono = "Sin teléfono";
}
Negocio::Negocio(string nombre, string slogan, string url, string direccion, string telefono)
{
  this->nombre = nombre;
  this->slogan = slogan;
  this->url = url;
  this->direccion = direccion;
  this->telefono = telefono;
}
string Negocio::getNombre()
{
  return nombre;
}
void Negocio::setNombre(string nombre)
{
  this->nombre = nombre;
}
string Negocio::getSlogan()
{
  return slogan;
}
void Negocio::setSlogan(string slogan)
{
  this->slogan = slogan;
}
string Negocio::getURL()
{
  return url;
}
void Negocio::setURL(string url)
{
  this->url = url;
}
string Negocio::getDireccion()
{
  return direccion;
}
void Negocio::setDireccion(string direccion)
{
  this->direccion = direccion;
}
string Negocio::getTelefono()
{
  return telefono;
}
void Negocio::setTelefono(string telefono)
{
  this->telefono = telefono;
}
Producto *Negocio::getProductos()
{
  return productos;
}
void Negocio::setProductos(Producto *productos)
{
  this->productos[0] = productos[0];
  this->productos[1] = productos[1];
  this->productos[2] = productos[2];
  this->productos[3] = productos[3];
  this->productos[4] = productos[4];
}
void Negocio::imprimirNegocio()
{
  cout << "Nombre: " << nombre << "\nSlogan: " << slogan << "\nURL: " << url << "\nDirección: " << direccion << "\nTeléfono: " << telefono << endl;
}
