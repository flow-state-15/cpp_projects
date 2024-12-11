#include "int_array_dynamic.h"

IntArray::IntArray()
{
    _capacity = 60;
    _size = 0;
    _last_idx = 0;
    *_arr = new int[60];
    
    for(int i=0; i<= 60; i++) {
        _arr[i] = 0;
    }
};

int IntArray::push_back(int value)
{
    if(_size >= _capacity - 10)
    {
        delete[] *_arr;
        // _arr = nullptr;
        int newCap = _capacity * 2;
        int* new_arr = new int[newCap];
        for(int i=0; i<=_size; i++) {
            new_arr[i] = _arr[i];
        }
    }

    *_arr[_last_idx] = value;
    _last_idx = _last_idx + 1;
    _size = _size + 1;

    return _size;
};

int IntArray::get(int index) const
{ return 0; }; // returns el at idx with bounds checking

int IntArray::size() const
{ return 0; }; // returns n of els currently stored

int IntArray::capacity() const
{
    return _capacity;
}; // returns current capacity of array
