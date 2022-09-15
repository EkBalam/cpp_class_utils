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
    std::vector<int> v;
    int offset = min;
    int rango = max - min;

    
    for(int i=0; i<size; i++){
        int r = this->rand_number(offset, rango);
        v.push_back(r);
    }
    return v;
}

std::vector<double> VectorUtils::getRandomDoubleVector(double min, double max, int size){
    std::vector<double> v;
    double offset = min;
    double rango = max - min;

    srand(time(NULL));
    for(int i=0; i<size; i++){
        double r = this->rand_number(offset, rango);
        v.push_back(r);
    }
    return v;
}

int VectorUtils::rand_number(int offset, int rango){
    
    return rand() % rango + offset;
}
double VectorUtils::rand_number(double offset, double rango){
    
    return static_cast<double>(
            offset + static_cast<double>(rand()) * static_cast<double>(rango) / RAND_MAX
            );
}
