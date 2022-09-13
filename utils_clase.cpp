#include "utils_clase.h"

std::chrono::steady_clock::time_point TimeControl::iniciar(){
    inicio = std::chrono::steady_clock::now(); 
    return inicio;
}

std::chrono::steady_clock::time_point TimeControl::terminar(){
    fin = std::chrono::steady_clock::now();
    return fin;
}

int TimeControl::tiempoTotalNano(){
    return std::chrono::duration_cast<std::chrono::nanoseconds>(fin - inicio).count();
}

int TimeControl::tiempoTotalMicro(){
     return std::chrono::duration_cast<std::chrono::microseconds>(fin - inicio).count();
}

int TimeControl::tiempoTotalMilli(){
    return std::chrono::duration_cast<std::chrono::milliseconds>(fin - inicio).count();
}

int TimeControl::tiempoTotalSec(){
    return std::chrono::duration_cast<std::chrono::seconds>(fin - inicio).count();
}

std::vector<int> VectorUtils::getRandomIntVector(int min, int max, int size){
    std::vector<int> v = {1, 2};
    return v;
}

std::vector<float> VectorUtils::getRandomFloatVector(float min, float max, int size){
    std::vector<float> v = {1.2, 2.2};
    return v;
}

std::vector<double> VectorUtils::getRandomDoubleVector(double min, double max, int size){
    std::vector<double> v = {1.2, 2.2};
    return v;
}

// template <typename T>
// void print_vector(std::vector<T> &v){
//     for(T value : v){
//         std::cout << value << " - ";
//     }
// }

