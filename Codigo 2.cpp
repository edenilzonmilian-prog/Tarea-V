#include <iostream>

using namespace std;

int main() {

    string nombre;
    int meses;
    float ahorro, total = 0, promedio;
    float mayorAhorro = 0;
    int mesMayor = 0;
    int meses500 = 0;
    
    
    cout << "===================================================\n"<< endl;
    cout << " ESTUDIANTE: Hans Douglas Edenilzon Alvarado Milian\n"<< endl;
    cout << "====================================================" << endl;
    cout << " CAJERO DE AHORRO PROGRAMADO" << endl;
    cout << "====================================================" << endl;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    // Solicitar cantidad de meses
    cout << "Ingrese la cantidad de meses a ahorrar: ";
    cin >> meses;

    // Ciclo para ingresar ahorros
    for(int i = 1; i <= meses; i++) {

        cout << "Ingrese el ahorro del mes " << i << ": Q";
        cin >> ahorro;

        total = total + ahorro;

        // Detectar mayor ahorro
        if(ahorro > mayorAhorro) {
            mayorAhorro = ahorro;
            mesMayor = i;
        }

        // Contar meses con ahorro mayor o igual a Q500
        if(ahorro >= 500) {
            meses500++;
        }
    }

    // Calcular promedio
    promedio = total / meses;

    // Mostrar resultados
    cout << "\n=====================================" << endl;
    cout << " RESULTADOS DEL AHORRO" << endl;
    cout << "=====================================" << endl;

    cout << "Nombre: " << nombre << endl;
    cout << "Total ahorrado: Q" << total << endl;
    cout << "Promedio mensual: Q" << promedio << endl;
    cout << "Mayor ahorro realizado en el mes: " << mesMayor << endl;
    cout << "Meses con ahorro de Q500 o mas: " << meses500 << endl;

    return 0;
}
