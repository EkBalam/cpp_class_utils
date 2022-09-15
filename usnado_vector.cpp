#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
//  for  valor in valores:
    for(int valor : v){
        cout << valor << " - ";
    }
}

int main(){ 

    vector<int> mivector = {1, 2, 3, 5, 8, 10};
    int inicio = 0;
    int fin = mivector.size()-1;
    int medio = (fin + inicio) / 2;

    cout << mivector[inicio] << "\n";
    cout << mivector[medio] << "\n";
    cout << mivector[fin] << "\n";

    print_vector(mivector);
    mivector.push_back(15);
    cout << "\n";
    print_vector(mivector);

    return 0;
}
