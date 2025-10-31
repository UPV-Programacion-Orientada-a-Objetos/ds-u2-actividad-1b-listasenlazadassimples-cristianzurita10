#ifndef SENSORBASE_H
#define SENSORBASE_H
#include <cstring> 
class SensorBase {
protected:
    char nombre[50]; 
public:
    SensorBase(const char* nombre) {
        strncpy(this->nombre, nombre, sizeof(this->nombre) - 1);
        this->nombre[sizeof(this->nombre) - 1] = '\0';  
    }
    virtual void procesarLectura() = 0;
    virtual void imprimirInfo() const = 0;
    virtual ~SensorBase() {}
};

#endif // SENSORBASE_H
