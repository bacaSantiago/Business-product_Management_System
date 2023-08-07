# README.txt - C++ Bussiness and Product Management System

This is a C++ program that allows you to manage a database of businesses and their associated products. The program is designed to handle up to 5 businesses, and each business can have up to 5 products. The main functionalities of the program include creating and editing businesses and products, checking available space in the database for businesses and products, and displaying products within a certain price range.

## Program Files

The program consists of three header files and three corresponding implementation files:

1. Negocio.h and Negocio.cpp: These files define and implement the `Negocio` class, which represents a business with its attributes such as name, slogan, URL, address, and phone number. It also includes functionalities to create, edit, and print business details.

2. Producto.h and Producto.cpp: These files define and implement the `Producto` class, representing a product with attributes like name, model, description, stock, price, and discount. The class includes functionalities to create, edit, and print product details.

3. main.cpp: This file contains the main function that integrates the functionalities and presents a user-friendly menu to interact with the database.

## How to Use

1. Clone or download the entire C++ project.

2. Compile the program using your preferred C++ compiler (e.g., g++ or Visual Studio).

3. Run the compiled executable to start the program.

4. Follow the instructions provided in the interactive menu to create, edit, and manage businesses and products.

5. Use the menu options to check available space in the database for businesses and products, and to display products within a certain price range.

## Features

1. Create/Edit Businesses: The program allows you to create and edit businesses, specifying their name, slogan, URL, address, and phone number.

2. Create/Edit Products: You can create and edit products associated with existing businesses. Each product can have attributes such as name, model, description, stock, price, and discount.

3. Check Available Space: You can check the available space for businesses and products in the database.

4. Display Products by Price Range: The program allows you to display products within a specified price range.

## Notes

- The program limits the number of businesses to 5, and each business can have up to 5 associated products.

- The "Producto" class has a member function `imprimirProducto()` that displays the details of a product, including its name, model, description, stock, price, and discount (if applicable).

- The "Negocio" class has a member function `imprimirNegocio()` that displays the details of a business, including its name, slogan, URL, address, and phone number.

- The program uses interactive menus to guide you through various operations, such as creating, editing, and managing businesses and products.

- The program allows you to check the available space for creating new businesses and products.

- The "main.cpp" file contains the main function that integrates the program's functionalities and provides the interactive user interface.

## Usage Examples

Below are some example interactions you can have with the program:

1. Create a New Business:
   ```
   Bienvenido usuario. Este programa te permite crear una base de datos con hasta 5 negocios y cada uno con hasta 5 productos para abstraer información específica.
   ¿Qué deseas realizar? 
     1) Crear o editar un negocio. 
     2) Agregar o editar un producto de un negocio existente. 
     3) Conocer el espacio disponible de su base de datos en cuanto a negocios o productos. 
     4) Mostrar los productos en un cierto rango de precio 
     0) Salir 

   Por favor, digite únicamente el número de la opción: 1

   Digite:
   1. Para crear un nuevo negocio.
   2. Para editar un negocio existente.

   Por favor, digite únicamente el número de la opción: 1

   Para crear un nuevo negocio es necesario conocer su nombre, posición en lista, entre otra información

   Del 0 al 4 ¿en qué posición de la lista de negocios desea añadirlo? 0

   Digite el nombre del negocio: Mi Tienda de Ropa
   Establezca su slogan: La moda a tu alcance
   Introduzca la URL del sitio web: www.mitiendaderopa.com
   Ingrese la dirección física del negocio: Calle Principal, 123
   Agregue un teléfono de contacto: +1 123-456-7890

   El negocio creado luce así:
   Nombre: Mi Tienda de Ropa
   Slogan: La moda a tu alcance
   URL: www.mitiendaderopa.com
   Dirección: Calle Principal, 123
   Teléfono: +1 123-456-7890

   ¿Qué deseas realizar? 
     1) Crear o editar un negocio. 
     2) Agregar o editar un producto de un negocio existente. 
     3) Conocer el espacio disponible de su base de datos en cuanto a negocios o productos. 
     4) Mostrar los productos en un cierto rango de precio 
     0) Salir 

   Por favor, digite únicamente el número de la opción: 0
   ```

2. Create a New Product for an Existing Business:
   ```
   Bienvenido usuario. Este programa te permite crear una base de datos con hasta 5 negocios y cada uno con hasta 5 productos para abstraer información específica.
   ¿Qué deseas realizar? 
     1) Crear o editar un negocio. 
     2) Agregar o editar un producto de un negocio existente. 
     3) Conocer el espacio disponible de su base de datos en cuanto a negocios o productos. 
     4) Mostrar los productos en un cierto rango de precio 
     0) Salir 

   Por favor, digite únicamente el número de la opción: 2

   Digite:
   1. Agregar un nuevo producto a un negocio existente.
   2. Para editar un producto existente.

   Por favor, digite únicamente el número de la opción: 1

   ¿A qué negocio desea agregar el nuevo producto? 
   0. Mi Tienda de Ropa

   Por favor digite únicamente el número de su posición: 0

   Para crear un nuevo producto es necesario conocer su nombre, posición en lista, entre otra información.

   Del 0 al 4 ¿en qué posición de la lista de productos de Mi Tienda de Ropa desea añadirlo? 0

   Digite el nombre del producto: Camisa Casual
   Introduzca su modelo: C2023
   Añada una descripción: Camisa casual para hombres, manga larga.
   Ingrese el stock disponible: 50
   Establezca el precio del producto: 29.99
   Agrega el porcentaje de descuento del producto: 10

   El producto creado luce así:
   Nombre: Camisa Casual
   Modelo : C2023
   Descripción: Camisa casual para hombres, manga larga.
   Cantidad en Stock: 50
   Precio: 29.99
   Descuento: 10%
   ```

1. Compiling and Running the Program:

To compile the program, use a C++ compiler (e.g., g++ on Linux) with the following command:
```
g++ main.cpp -o OnlineBusinessDatabase
```

To run the compiled program, use the following command:
```
./OnlineBusinessDatabase
```

Enjoy managing your online business database with this C++ program!
