#include <iostream>
#include "SensorTemperatura.h"
#include "SensorPresion.h"

int main() {
    // Crear sensores
    SensorTemperatura tempSensor("T-001");
    tempSensor.registrarLectura(45.3f);
    tempSensor.registrarLectura(42.1f);

    SensorPresion presionSensor("P-105");
    presionSensor.registrarLectura(80);
    presionSensor.registrarLectura(85);

    // Procesar y mostrar lecturas
    std::cout << "--- Procesando Sensores ---" << std::endl;
    tempSensor.procesarLectura();
    presionSensor.procesarLectura();

    // Imprimir resultados
    tempSensor.imprimirInfo();
    presionSensor.imprimirInfo();

    return 0;
}
