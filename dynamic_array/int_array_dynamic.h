#ifndef INT_ARRAY_DYNAMIC_H
#define INT_ARRAY_DYNAMIC_H
#include <optional>

class IntArrayDynamic {
    //member list
    private: // array goes here
        int _size;
        int _capacity;
        int* _arr;
    public:
        IntArrayDynamic();
        ~IntArrayDynamic();
        int push(int value); // add to back return size
        int get(int index) const; // returns el at idx with bounds checking
        int size() const; // returns n of els currently stored
        int capacity() const; // returns current capacity of array
};

#endif