#ifndef SENSORTEMPERATURA_H
#define SENSORTEMPERATURA_H
#include "SensorBase.h"
#include "ListaSensor.h"
class SensorTemperatura : public SensorBase {
private:
    ListaSensor<float> historial;
public:
    SensorTemperatura(const char* nombre) : SensorBase(nombre) {}
    void registrarLectura(float valor) {
        historial.insertar(valor);
    }
    void procesarLectura() override {
        historial.eliminarMinimo(); // Eliminar el valor más bajo
    }
    void imprimirInfo() const override {
        historial.imprimir();
    }
    ~SensorTemperatura() {}
};

#endif // SENSORTEMPERATURA_H
