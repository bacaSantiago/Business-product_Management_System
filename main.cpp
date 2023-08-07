#include "Producto.h"
#include "Negocio.h"
#include <iostream>
#include <string>
#include <algorithm>  // funcion 'transform' para convertir texto en mayúsculas
using namespace std;

int respuestaI, subOpcion, pos, pos_2, contador;
string respuestaS;
bool hayNegocio, hayProducto;
double respuestaD, respuestaD_2;
Negocio negocios[5];

void crearNegocio(){
  cout << "\nPara crear un nuevo negocio es necesario conocer su nombre, posicion en lista, entre otra información" << endl;
  do{
    cout << "\nDel 0 al 4 ¿en qué posición de la lista de negocios desea añadirlo? ";
    cin >> pos;
    cout << "\n";
    if (negocios[pos].getNombre() != "Sin nombre"){
      cout << "La posición ingresada está ocupada por el negocio: " << negocios[pos].getNombre() <<". \nSi desea reemplazarlo digite '1', si desea cambiar de posición digite '2': ";
      cin >> respuestaI;
      switch(respuestaI){
        case 1:
          subOpcion=0;
          break;
        case 2:
          subOpcion=1;
          break;
      }
    }
    else{
      subOpcion=0;
    }
  }
  while (subOpcion!=0);
  
  cout << "Digite el nombre del negocio: ";
  getline(cin >> ws, respuestaS);
  negocios[pos].setNombre(respuestaS);
  cout << "Establezca su slogan: ";
  getline(cin >> ws, respuestaS);
  negocios[pos].setSlogan(respuestaS);
  cout << "Introduzca la URL del sitio web: ";
  getline(cin >> ws, respuestaS);
  negocios[pos].setURL(respuestaS);
  cout << "Ingrese la dirección física del negocio: ";
  getline(cin >> ws, respuestaS);
  negocios[pos].setDireccion(respuestaS);
  cout <<"Agregue un teléfono de contacto: ";
  getline(cin >> ws, respuestaS);
  negocios[pos].setTelefono(respuestaS);
  cout << "\nEl negocio creado luce así: " << endl;
  negocios[pos].imprimirNegocio();
}

void comprobarNegocio(){
  hayNegocio=false;
  for (int i=0;i<5;i++){
    if (negocios[i].getNombre()!="Sin nombre"){
      hayNegocio=true;
      contador++; 
      }
  }
  if (hayNegocio==false){
    cout << "Aún no has registrado ningún negocio. ¿Deseas crear uno? \nDigite 'SI' o 'NO': ";
    cin >> respuestaS;
    transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
    if (respuestaS=="SI"){
      crearNegocio();
    }
  }
}

void editarNegocio(){
  comprobarNegocio();
  if (hayNegocio==true){
    cout << "¿Qué negocio quieres editar? "<<endl;
    for (int i=0;i<5;i++){
      if (negocios[i].getNombre()!="Sin nombre"){
      cout << "Posición: " << i << ". " << negocios[i].getNombre() << endl;
      }
    }

    cout << "\nPor favor digite únicamente el número su posición: ";
    cin >> pos;
    if (negocios[pos].getNombre()!="Sin nombre"){
        do{
            cout << "\n¿Qué atributo desea modificar? \n  1) Su nombre \n  2) El slogan \n  3) La URL \n  4) La dirección \n  5) Su teléfono \n  0) Es todo. Salir al menú principal \n\nPor favor, digite únicamente el número de la opción: "; 
            cin >> subOpcion; cout << "\n";
            switch(subOpcion){
                case 1:
                cout << "Nombre actual : " << negocios[pos].getNombre() << endl;
                cout << "Digite el nuevo nombre del negocio: ";
                getline(cin >> ws, respuestaS);
                negocios[pos].setNombre(respuestaS);
                break;
                case 2:
                cout << "Slogan actual : " << negocios[pos].getSlogan() << endl;
                cout<<"Establezca el nuevo slogan: ";
                getline(cin >> ws, respuestaS);
                negocios[pos].setNombre(respuestaS);
                break;
                case 3:
                cout << "URL actual : " << negocios[pos].getURL() << endl;
                cout << "Introduzca la nueva URL: ";
                getline(cin >> ws, respuestaS);
                negocios[pos].setURL(respuestaS);
                break;
                case 4:
                cout << "Dirección actual : " << negocios[pos].getDireccion() << endl;
                cout << "Ingrese la nueva dirección física del negocio: ";
                getline(cin >> ws, respuestaS);
                negocios[pos].setDireccion(respuestaS);
                break;
                case 5:
                cout << "Teléfono actual : " << negocios[pos].getTelefono() << endl;
                cout << "Modifique el teléfono de contacto: ";
                getline(cin >> ws, respuestaS);
                negocios[pos].setTelefono(respuestaS);
                break;
            }
        }
        while (subOpcion!=0);
    }
    else{
        cout << "No existe ningún negocio registrado en esa posición. \n¿Deseas crear uno? \nDigite 'SI' o 'NO': ";
        cin >> respuestaS;
        transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
        if (respuestaS=="SI"){
        crearNegocio();
        }
    }
  }
}

void crearProducto(){
  comprobarNegocio();
  if (hayNegocio==true){
    cout << "¿A qué negocio desea agregar el nuevo producto? "<< endl;
    for (int i=0;i<5;i++){
      if (negocios[i].getNombre()!="Sin nombre"){
        cout << "Posición: " << i << ". " << negocios[i].getNombre() << endl;
      }
    }
    cout << "\nPor favor digite únicamente el número su posición: ";
    cin >> pos;
    cout << "Para crear un nuevo producto es necesario conocer su nombre, posicion en lista, entre otra información." << endl;
    do{
      cout << "\nDel 0 al 4 ¿en qué posición de la lista de productos de " << negocios[pos].getNombre() << " desea añadirlo? ";
      cin >> pos_2;
      if (negocios[pos].getProductos()[pos_2].getNombre() != "Sin nombre"){
        cout << "La posición ingresada está ocupada por el producto: " << negocios[pos].getProductos()[pos_2].getNombre() <<". \nSi desea reemplazarlo digite '1', si desea cambiar de posición digite '2'";
        cin >> respuestaI;
        switch(respuestaI){
          case 1:
            subOpcion=0;
            break;
          case 2:
            subOpcion=1;
            break;
        }
      }
      else{
        subOpcion=0;
      }
    }
    while (subOpcion!=0);
    
    cout << "Digite el nombre del producto: ";
    getline(cin >> ws, respuestaS);
    negocios[pos].getProductos()[pos_2].setNombre(respuestaS);
    cout << "Introduzca su modelo: ";
    getline(cin >> ws, respuestaS);
    negocios[pos].getProductos()[pos_2].setModelo(respuestaS);
    cout << "Añada una descripción: ";
    getline(cin >> ws, respuestaS);
    negocios[pos].getProductos()[pos_2].setDescripcion(respuestaS);
    cout << "Ingrese el stock disponible: ";
    cin >> respuestaI;
    negocios[pos].getProductos()[pos_2].setStock(respuestaI);
    cout << "Establezca el precio del producto: ";
    cin >> respuestaD;
    negocios[pos].getProductos()[pos_2].setPrecio(respuestaD);
    cout << "Agrega el porcentaje de descuento del producto: ";
    cin >> respuestaD;
    negocios[pos].getProductos()[pos_2].setDescuento(respuestaD);
    cout << "\nEl producto creado luce así: " << endl;
    negocios[pos].getProductos()[pos_2].imprimirProducto();
  }
}

void editarProducto(){ 
  comprobarNegocio(); 
  if (hayNegocio==true){
    cout << "¿En qué negocio está el producto que desea modificar?" << endl;
    for (int i=0;i<5;i++){
      if (negocios[i].getNombre()!="Sin nombre"){
      cout << "Posición: " << i << ". " << negocios[i].getNombre() << endl;
      }
    }
    cout << "Digite únicamente el número de posición."; 
    cin >> pos;
    hayProducto=false;
    for (int i=0;i<5;i++){
      if (negocios[pos].getProductos()[i].getNombre()!="Sin nombre"){
        cout << "Posición: " << i << ". " << negocios[pos].getProductos()[i].getNombre() << endl;
        hayProducto=true;
      }
    }  
    if (hayProducto==false){
      cout << "Parece que no hay ningún producto registrado en este negocio. ¿Deseas crear uno? \nDigite 'SI' o 'NO': ";
      cin >> respuestaS;
      transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
      if (respuestaS=="SI"){
        crearProducto();
      }
    }
    else{
      cout << "¿Qué producto es el que desea modificar? \nPor favor digite únicamente el número de su posición: ";
      cin >> pos_2;
      do{
        cout << "\n¿Qué atributo desea modificar? \n  1) Su nombre \n  2) El modelo \n  3) La descripción \n  4) El stock \n  5) Su precio \n  6) El porcentaje de descuento \n  0) Es todo. Salir al menú principal \n\nPor favor, digite únicamente el número de la opción: "; 
        cin >> subOpcion; 
        cout<<"\n";
        switch(subOpcion){
          case 1:
            cout << endl;
            cout << "Nombre actual : " << negocios[pos].getProductos()[pos_2].getNombre() << endl;
            cout << "Digite el nuevo nombre del producto: ";
            getline(cin >> ws, respuestaS);
            negocios[pos].getProductos()[pos_2].setNombre(respuestaS);
            break;
          case 2:
            cout << "Modelo actual : " << negocios[pos].getProductos()[pos_2].getModelo() << endl;
            cout << endl;
            cout << "Introduzca el nuevo modelo : ";
            getline(cin >> ws, respuestaS);
            negocios[pos].getProductos()[pos_2].setModelo(respuestaS);
            break;
          case 3:
            cout << "Descripción actual : " << negocios[pos].getProductos()[pos_2].getDescripcion() << endl;
            cout << "Añada una descripción: ";
            getline(cin >> ws, respuestaS);
            negocios[pos].getProductos()[pos_2].setDescripcion(respuestaS);
            break;
          case 4:
            cout << "Stock actual : " << negocios[pos].getProductos()[pos_2].getStock() << endl;
            cout << endl;
            cout << "Ingrese el stock disponible: ";
            cin >> respuestaI;
            negocios[pos].getProductos()[pos_2].setStock(respuestaI);
            break;
          case 5:
            cout << "Precio actual : " << negocios[pos].getProductos()[pos_2].getPrecio() << endl;
            cout << endl;
            cout << "Establezca el nuevo precio del producto: ";
            cin >> respuestaD;
            negocios[pos].getProductos()[pos_2].setPrecio(respuestaD);
            break;
          case 6:
            cout << "Descuento actual : " << negocios[pos].getProductos()[pos_2].getDescuento() << endl;
            cout << endl;
            cout << "Agrega el nuevo descuento del producto: ";
            cin >> respuestaD;
            negocios[pos].getProductos()[pos_2].setDescuento(respuestaD);
            break;
        }
      }
      while (subOpcion!=0);
    }
  }
}

void comprobarProducto(){
  hayProducto=false;
  for (int i=0; i<5; i++){
    for (int j=0; i<5; i++){
      if (negocios[i].getProductos()[j].getNombre() != "Sin nombre"){
        hayProducto=true;
      }
      
    }
  }
  if (hayProducto==false){
    cout << "Aún no has registrado ningún producto. ¿Deseas crear uno? \nDigite 'SI' o 'NO' según su preferencia: ";
    cin >> respuestaS;
    transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
    if (respuestaS=="SI"){
      crearProducto();
    }
  }
}

void cabeNegocio(){
  cout << "La base de datos permite almacenar hasta 5 negocios con, cada uno, hasta 5 productos." << endl;
  hayNegocio=false;
  contador=0;
  for (int i=0;i<5;i++){
    if (negocios[i].getNombre()!="Sin nombre"){
      hayNegocio=true;
      contador++;
      }
  }
  
  if (hayNegocio==false){
    cout << "Aún no has registrado ningún negocio. \nDisponibilidad: 5 negocios." << endl;
    cout << "¿Deseas crear uno? \nDigite 'SI' o 'NO': ";
    cin >> respuestaS;
    transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
    if (respuestaS=="SI"){
      crearNegocio();
    }
  }
  else{
    cout << "\nDisponibilidad: " << (5-contador) << " negocios." << endl; //(-contador+5) si no funciona
    cout << "Posiciones disponibles: " << endl;
    for (int i=0;i<5;i++){
      if (negocios[i].getNombre()=="Sin nombre"){
        cout << i << ". " << endl; // i+1 si es que queremos cambiar TODOS los couts de posisiones del programa
      }
    }
    cout << "Desea crear o editar algún negocio? \nTeclea 'CREAR' o 'EDITAR' según su preferencia: ";
    cin >> respuestaS;
    transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
    if (respuestaS=="CREAR"){
      crearNegocio();
    }
    else if (respuestaS=="EDITAR"){
      editarNegocio();
    }
  }
}

void cabeProducto(){
  cout << "La base de datos permite almacenar hasta 5 productos por negocio";
  comprobarNegocio();
  if (hayNegocio==true){
    cout << "¿En qué negocio estás interesada en revisar su disponibilidad? \n";
    for (int i=0;i<5;i++){
      if (negocios[i].getNombre()!="Sin nombre"){
        cout << i << ". " << negocios[i].getNombre();
      }
    }
    cout << "Por favor digite únicamente el número de su posición: ";
    cin >> pos;
    contador=0;
    hayProducto=false;
    for (int i=0; i<5; i++){
      if (negocios[pos].getProductos()[i].getNombre() != "Sin nombre"){
        contador++;
        hayProducto=true;
      }
    }
    if (hayProducto==false){
      cout << "Parece que no hay ningún producto registrado en este negocio. ¿Deseas crear uno? \nDigite 'SI' o 'NO': ";
      cin >> respuestaS;
      transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
      if (respuestaS=="SI"){
        crearProducto();
      }
    }
    else{
      cout << "\nDisponibilidad: " << (5-contador) << " productos." << endl; //(-contador+5) si no funciona
      cout << "Posiciones disponibles: " << endl;
      for (int i=0;i<5;i++){
        if (negocios[pos].getProductos()[i].getNombre() == "Sin nombre"){
          cout << i << ". " << endl; // i+1 si es que queremos cambiar TODOS los couts de posisiones del programa
        }
      }
      cout << "Desea crear o editar algún producto? \nTeclea 'CREAR' o 'EDITAR' según su preferencia: ";
      cin >> respuestaS;
      transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
      if (respuestaS=="CREAR"){
        crearProducto();
      }
      else if (respuestaS=="EDITAR"){
        editarProducto();
      }
    }
  }
}

void rangoPrecio(){
  comprobarNegocio();
  if (hayNegocio==true){
    cout << "Rango de precio incial: ";
    cin >> respuestaD;
    cout << "Rango de precio final: ";
    cin >> respuestaD_2;
    bool hayPrecioEnRango=false;
    hayProducto=false;
    cout << "\nProductos dentro del rango: $" << respuestaD << " a $" << respuestaD_2 << ": \n" << endl;
    for (int i=0;i<5;i++){
      for (int j=0;j<5;j++){
        if ((negocios[i].getProductos()[j].getPrecio()>=respuestaD) && (negocios[i].getProductos()[j].getPrecio()<=respuestaD_2) && (negocios[i].getNombre()!="Sin nombre")){
          cout << "\n\nNegocio: " << negocios[i].getNombre() << ". \n" << j << ") Producto: ";
          cout << endl;
          negocios[i].getProductos()[j].imprimirProducto();
          hayPrecioEnRango = true;
        }
        else if (negocios[pos].getProductos()[i].getNombre()!="Sin nombre"){
          hayProducto=true;
        }
      }
    }
    if (hayProducto==false){
      cout << "Parece que no hay ningún producto registrado en este negocio. ¿Deseas crear uno? \nDigite 'SI' o 'NO': ";
      cin >> respuestaS;
      transform(respuestaS.begin(), respuestaS.end(),respuestaS.begin(), ::toupper);
      if (respuestaS=="SI"){
        crearProducto();
      }
    }
    else if ((hayProducto == true) && (hayPrecioEnRango==false)){
      cout << "Lo sentimos. No hay ningún producto registrado en ese rango de precio." << endl;
    }
  }
}

void imprimirMenu(){
  int opcionMenu=0;
  do{
      cout << "\nBienvenido usuario. Este programa te permite crear una base de datos con hasta 5 negocios y cada uno con hasta 5 productos para abstraer información específica.\n¿Qué deseas realizar? \n  1) Crear o editar un negocio. \n  2) Agregar o editar un producto de un negocio existente. \n  3) Conocer el espacio disponible de su base de datos en cuanto a negocios o productos. \n  4) Mostrar los productos en un cierto rango de precio \n  0) Salir \n\nPor favor, digite únicamente el número de la opción: "; 
      cin>>opcionMenu; cout<<"\n";
      switch(opcionMenu){
        case 1:
          cout << endl << endl;
          cout<<"Digite: \n1. Para crear un nuevo negocio. \n2. Para editar un negocio existente. \n\nPor favor, digite únicamente el número de la opción: ";
          cin>>respuestaI;
          if (respuestaI==1){
            cout << endl;
            crearNegocio();
          }
          else if (respuestaI==2){
            cout << endl;
            editarNegocio();
          }
          break;
        case 2:
          cout << endl << endl;
          cout << "Digite: \n1. Agregar un nuevo producto a un negocio existente. \n2. Para editar un producto existente. \n\nPor favor, digite únicamente el número de la opción: ";
          cin >> respuestaI;
          if (respuestaI==1){
            cout << endl;
            crearProducto();
          }
          else if (respuestaI==2){
            cout << endl;
            editarProducto();
          }
          break;
        case 3:
          cout << endl << endl;
          cout << "Digite: \n1. Averiguar el espacio disponible de negocios. \n2. Examinar los espacios disponible para productos de un negocio. \n\nPor favor, digite únicamente el número de la opción: ";
          cin >> respuestaI;
          if (respuestaI==1){
            cout << endl;
            cabeNegocio();
          }
          else if (respuestaI==2){
            cout << endl;
            cabeProducto();
          }
          break;
        case 4:
          cout << endl << endl;
          rangoPrecio();
          break;
      }
    }
    while (opcionMenu!=0);
}

int main() {
    imprimirMenu();
  return 0;
}