#include "Producto.h"
#include <iostream>
using namespace std;

double promedio;

Producto::Producto(){
  nombre = "Sin nombre";
  modelo = "Sin modelo";
  descripcion = "Sin descripción";
  stock = 0;
  precio = 0.0;
  descuento = 0.0;
}
Producto::Producto(string nombre, string modelo, string descripcion, int stock, double precio, double descuento){
  this->nombre=nombre;
  this->modelo = modelo;
  this->descripcion=descripcion;
  this->stock=stock;
  this->precio = precio;
  this->descuento = descuento;
}
string Producto::getNombre(){
  return nombre;
}
string Producto::getModelo(){
  return modelo;
}
string Producto::getDescripcion(){
  return descripcion;
}
int Producto::getStock(){
  return stock;
}
double Producto::getPrecio(){
  return precio;
}
double Producto::getDescuento(){
  return descuento;
}
void Producto::setNombre(string nombre){
  this->nombre=nombre;
}
void Producto::setModelo(string modelo){
  this->modelo=modelo;
}
void Producto::setDescripcion(string descripcion){
  this->descripcion=descripcion;
}
void Producto::setStock(int stock){
  this->stock=stock;
}
void Producto::setPrecio(double precio){
  this->precio=precio;
}
void Producto::setDescuento(double descuento){
  this->descuento=descuento;
}
void Producto::imprimirProducto(){
  cout<<"Nombre: "<<nombre<<"\nModelo : "<<modelo<<"\nDescripción: "<<descripcion<<"\nCantidad en stock: "<<stock<<"\nPrecio: $"<<precio << endl;
  if ((descuento!=0.0) && (descuento!=0)){
    cout << "Descuento: "<<descuento<<"%"<<endl;
  }
}