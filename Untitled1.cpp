#include <iostream>

using namespace std;

int main() {

    string nombre;

    
    float nota, suma = 0, promedio;
    int aprobadas = 0, reprobadas = 0;

    
    cout << "====================================================\n";
    cout << " ESTUDIANTE: Hans Douglas Edenilzon Alvarado Milian\n";
    cout << "====================================================" << endl;
    cout << " CONTROL DE CALIFICACIONES" << endl;
    cout << "====================================================" << endl;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

        
    for(int i = 1; i <= 5; i++) {

        cout << "Ingrese la nota #" << i << ": ";
        cin >> nota;

        suma = suma + nota;

        
        if(nota >= 61) {
            aprobadas++;
        } else {
            reprobadas++;
        }
    }

    
    promedio = suma / 5;

    
    cout << "\n=====================================" << endl;
    cout << " RESULTADOS DEL ESTUDIANTE" << endl;
    cout << "=====================================" << endl;

    cout << "Nombre: " << nombre << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Notas aprobadas: " << aprobadas << endl;
    cout << "Notas reprobadas: " << reprobadas << endl;

    
    if(promedio >= 61) {
        cout << "Resultado final: Aprueba" << endl;
    } else {
        cout << "Resultado final: Reprueba" << endl;
    }

    return 0;
}
