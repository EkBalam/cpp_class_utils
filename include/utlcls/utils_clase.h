#ifndef UTILS_CLASE_H
#define UTILS_CLASE_H

#include <iostream>
#include <chrono>
#include <vector>

class TimeControl{
        std::chrono::steady_clock::time_point inicio;
        std::chrono::steady_clock::time_point fin;
    public:
        std::chrono::steady_clock::time_point iniciar();
        std::chrono::steady_clock::time_point terminar();
        int tiempoTotalNano();
        int tiempoTotalMicro();
        int tiempoTotalMilli();
        int tiempoTotalSec();
};

class VectorUtils{
    public:
        std::vector<int> getRandomIntVector(int min, int max, int size);
        std::vector<float> getRandomFloatVector(float min, float max, int size);
        std::vector<double> getRandomDoubleVector(double min, double max, int size);
        
        
};

// template <typename T>
// void print_vector(std::vector<T> &v);

#endif