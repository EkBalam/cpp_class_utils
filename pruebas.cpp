#include <iostream>
#include <vector>
#include "include/utlcls/utils_clase.h"

using namespace std;


template <typename T>
void print(std::vector<T> v){
    for(T value : v){
        std::cout << value << " - ";
    }
}

int main() {

	TimeControl tc = TimeControl();

	tc.iniciar();
	cout << "Main\n";
	tc.terminar();
	cout << tc.tiempoTotalNano() << "\n";
	cout << tc.tiempoTotalMicro() << "\n";
	cout << tc.tiempoTotalMilli() << "\n";
	cout << tc.tiempoTotalSec() << "\n";

	VectorUtils vu = VectorUtils();
	auto mivector = vu.getRandomIntVector(1, 2, 3);
	print(mivector);

	return 0;
}