#include <iostream>

using namespace std;

int main()
{
    cout << "12 Programa que calcula la calificacion final de Programacion" << endl;
    string nombre;
    double taller, evaluacionTeorica, evaluacionPractica;
    double parcialUno, parcialDos, parcialTres, promedio;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    fflush(stdin);
    // Las notas deben estar entre 0 y 10.
    // Ingresar las calificaciones del primer parcial
    cout << "Ingrese la calificacion del taller 1: ";
    cin >> taller;
    cout << "Ingrese la calificacion de la evaluacion teorica 1: ";
    cin >> evaluacionTeorica;
    cout << "Ingrese la calificacion de la evaluacion practica 1: ";
    cin >> evaluacionPractica;
    // Calcular la nota del primer parcial
    parcialUno = (0.25 * taller) + (0.35 * evaluacionTeorica) + (0.4 * evaluacionPractica);
    cout << endl;

    // Ingresar las calificaciones del segundo parcial
    cout << "Ingrese la calificacion del taller 2: ";
    cin >> taller;
    cout << "Ingrese la calificacion de la evaluacion teorica 2: ";
    cin >> evaluacionTeorica;
    cout << "Ingrese la calificacion de la evaluacion practica 2: ";
    cin >> evaluacionPractica;
    // Calcular la nota del segundo parcial
    parcialDos = (0.25 * taller) + (0.35 * evaluacionTeorica) + (0.4 * evaluacionPractica);
    cout << endl;

    // Ingresar las calificaciones del tercer parcial
    cout << "Ingrese la calificacion del taller 3: ";
    cin >> taller;
    cout << "Ingrese la calificacion de la evaluacion teorica 3: ";
    cin >> evaluacionTeorica;
    cout << "Ingrese la calificacion de la evaluacion practica 3: ";
    cin >> evaluacionPractica;
    // Calcular el tercer parcial
    parcialTres = (0.25 * taller) + (0.35 * evaluacionTeorica) + (0.4 * evaluacionPractica);
    cout << endl;

    // Calcular el promedio de los parciales
    promedio = (parcialUno + parcialDos + parcialTres) / 3;

    // Mostrar el resultado en consola.
    cout << "Estudiante: " << nombre << endl;
    cout << "Nota 1: " << parcialUno << endl;
    cout << "Nota 2: " << parcialDos << endl;
    cout << "Nota 3: " << parcialTres << endl;
    cout << "Promedio final: " << promedio << ".";
    return 0;
}