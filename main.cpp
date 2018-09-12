#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {      
    int operator()(int* coordinates, int* sizes, int dimensions) {
        // TODO
        int suma=0, producto_rango=1;
        for (int i = 0; i < count; ++i){

        	if (i!=0)
        	{
        		producto_rango=producto_rango*sizes[i-1];
        	}

        	suma=suma+(coordinates[i]*producto_rango);

        }
        	return suma;
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    system("pause");
    return EXIT_SUCCESS;
} 