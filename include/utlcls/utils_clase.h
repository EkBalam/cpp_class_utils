#ifndef UTILS_CLASE_H
#define UTILS_CLASE_H

#include <iostream>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <time.h>

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
        VectorUtils(){
            srand(time(0));
        }
        std::vector<int> getRandomIntVector(int min, int max, int size);
        std::vector<double> getRandomDoubleVector(double min, double max, int size);
        int rand_number(int offset, int rango);
        double rand_number(double offset, double rango);
};

#endif