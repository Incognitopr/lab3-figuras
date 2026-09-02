/*
 * Curso: COEN 2210 - Introduction to Programming
 * Nombre: [Francisco H. Martinez Cruz]
 * Lab: 3 - Figuras Geometricas y Arte ASCII
 * Descripcion: [Figuras geometricas y arte ASCII]
 * Fecha de entrega: [9/2/2026]
 */

#include <iostream>
using namespace std;

const double PI = 3.14159;
const double RADIO = 5.4;
const double LARGO = 8.0;
const double ANCHO = 3.0;
const double BASE = 6.0;
const double ALTURA = 4.0;
const double LADO = 7.0;

int main()
{
   // --- Circulo (circunferencia ya resuelta como ejemplo) ---
    double circunferencia;
    circunferencia = 2 * PI * RADIO;
    cout << "La circunferencia del circulo es " << circunferencia << endl;

    // TODO: calcula tambien el area del circulo, usando la formula
    // de la tabla de arriba, y muestrala con cout
    double area_circulo;
    area_circulo = PI * RADIO * RADIO;
    cout << "El area del circulo es " << area_circulo << endl;


    // --- Rectangulo ---
    // TODO: declara las variables necesarias, calcula area y perimetro
    // usando la formula de la tabla de arriba, y muestralos con cout
    double area_rectangulo, perimetro_rectangulo;
    area_rectangulo = LARGO * ANCHO;
    perimetro_rectangulo = 2 * (LARGO + ANCHO);
    cout << "El area del rectangulo es " << area_rectangulo << endl;
    cout << "El perimetro del rectangulo es " << perimetro_rectangulo << endl;


    // --- Triangulo ---
    // TODO: declara las variables necesarias, calcula el area
    // usando la formula de la tabla de arriba, y muestrala con cout
    double area_triangulo;
    area_triangulo = 0.5 * BASE * ALTURA;
    cout << "El area del triangulo es " << area_triangulo << endl;


    // --- Cuadrado ---
    // TODO: declara las variables necesarias, calcula area y perimetro
    // usando la formula de la tabla de arriba, y muestralos con cout
    double area_cuadrado, perimetro_cuadrado;
    area_cuadrado = LADO * LADO;
    perimetro_cuadrado = 4 * LADO;
    cout << "El area del cuadrado es " << area_cuadrado << endl;
    cout << "El perimetro del cuadrado es " << perimetro_cuadrado << endl;

    return 0;
}
