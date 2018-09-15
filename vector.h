#ifndef VECTOR_H
#define VECTOR_H

template <typename Tr>
class Vector {
    public:
        typedef typename Tr::T T;
        typedef typename Tr::Operation Operation;
             
    private:
        T* data;
        int dataSize;
        Operation oper;
        int dimensions;
        int* dimensionSizes;

    public:
        Vector() : data(nullptr) {};
             
        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
           dataSize=1;
           for (int i = 0; i < dimensions; ++i)
           {
               dataSize= dataSize*dimensionSizes[i];
           }
           data = new T[dataSize];
        }
             
        void set(T datum, int* coordinates){
            int place = oper(coordinates,dimensionSizes,dimensions);
            data[place]=datum;
        }; 
             
        T get(int* coordinates){
            int place = oper(coordinates,dimensionSizes,dimensions);
            
            return data[place];
        }; 
};

#endif
