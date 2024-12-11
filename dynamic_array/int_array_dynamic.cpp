#include "int_array_dynamic.h"

// this is a heap implementation for flexibility

IntArrayDynamic::IntArrayDynamic()
{
    _capacity = 60;
    _size = 0;
    _last_idx = 0;
    _arr = new int[60]();
};

int IntArrayDynamic::push(int value)
{
    if(_size >= _capacity - 10)
    {
        // first create new arr and cap
        int newCap = _capacity * 2;
        int* new_arr = new int[newCap]();
        for(int i = 0; i < _size; i++) {
            new_arr[i] = _arr[i];
        }

        // clear memory for old arr and
        delete[] _arr;

        // assign class _arr pointer to new arr location
        _arr = new_arr;
        _capacity = newCap;
    }

    _arr[_last_idx] = value;
    ++_last_idx;
    ++_size;

    return _size;
};

int IntArrayDynamic::get(int index) const
{
    if(index >= _capacity){
        // handle error next
        return 1;
    } 
    return _arr[index];
}; // returns el at idx with bounds checking

int IntArrayDynamic::size() const
{ return 0; }; // returns n of els currently stored

int IntArrayDynamic::capacity() const
{
    return _capacity;
}; // returns current capacity of array
