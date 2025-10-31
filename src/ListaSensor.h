#ifndef LISTASENSOR_H
#define LISTASENSOR_H
template <typename T>
struct Nodo {
    T dato;
    Nodo<T>* siguiente;
    Nodo(T valor) : dato(valor), siguiente(nullptr) {}
};
template <typename T>
class ListaSensor {
private:
    Nodo<T>* cabeza;
public:
    ListaSensor() : cabeza(nullptr) {}
    void insertar(T valor) {
        Nodo<T>* nuevo = new Nodo<T>(valor);
        if (!cabeza) {
            cabeza = nuevo;
        } else {
            Nodo<T>* temp = cabeza;
            while (temp->siguiente) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevo;
        }
    }
    void eliminarMinimo() {
        if (!cabeza) return;
        Nodo<T>* min = cabeza;
        Nodo<T>* temp = cabeza;
        while (temp) {
            if (temp->dato < min->dato) {
                min = temp;
            }
            temp = temp->siguiente;
        }
        if (min == cabeza) {
            cabeza = cabeza->siguiente;
        } else {
            Nodo<T>* prev = cabeza;
            while (prev->siguiente != min) {
                prev = prev->siguiente;
            }
            prev->siguiente = min->siguiente;
        }
        delete min;
    }
    void promediar() {
        if (!cabeza) return;
        T suma = 0;
        int contador = 0;
        Nodo<T>* temp = cabeza;
        while (temp) {
            suma += temp->dato;
            contador++;
            temp = temp->siguiente;
        }
        T promedio = suma / contador;
        std::cout << "Promedio: " << promedio << std::endl;
    }
    void imprimir() const {
        Nodo<T>* temp = cabeza;
        while (temp) {
            std::cout << temp->dato << " ";
            temp = temp->siguiente;
        }
        std::cout << std::endl;
    }
    ~ListaSensor() {
        while (cabeza) {
            Nodo<T>* temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
        }
    }
};
#endif // LISTASENSOR_H
