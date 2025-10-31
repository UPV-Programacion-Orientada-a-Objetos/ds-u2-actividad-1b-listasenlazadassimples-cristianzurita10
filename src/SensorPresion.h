#ifndef SENSORPRESION_H
#define SENSORPRESION_H

#include "SensorBase.h"
#include "ListaSensor.h"

class SensorPresion : public SensorBase {
private:
    ListaSensor<int> historial;
public:
    SensorPresion(const char* nombre) : SensorBase(nombre) {}
    
    void registrarLectura(int valor) {
        historial.insertar(valor);
    }
    
    void procesarLectura() override {
        historial.promediar(); // Calcular el promedio
    }
    
    void imprimirInfo() const override {
        historial.imprimir();
    }
    
    ~SensorPresion() {}
};

#endif // SENSORPRESION_H
