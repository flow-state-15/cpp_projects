#include <stdexcept>
#include "int_array_dynamic.h"

// this is a heap implementation for flexibility

IntArrayDynamic::IntArrayDynamic()
{
    _capacity = 60;
    _size = 0;
    _arr = new int[_capacity]();
};

IntArrayDynamic::~IntArrayDynamic()
{
    delete[] _arr;
}

int IntArrayDynamic::push(int value)
{
    if(_size >= _capacity - 10)
    {
        // first create new arr and cap
        int newCap = _capacity * 2;
        int* new_arr = new int[newCap]();
        _capacity = newCap;

        for(int i = 0; i < _size; i++) {
            new_arr[i] = _arr[i];
        }

        // clear memory for old arr
        delete[] _arr;

        // assign class _arr pointer to new arr location
        _arr = new_arr;
    }

    _arr[_size++] = value; // read then increment

    return _size;
};

int IntArrayDynamic::get(int index) const
{
    if(index < 0 || index >= _size){
        throw std::out_of_range("IntArrayDynamic::get(int index): Index out of range.");
    } 
    return _arr[index];
};

int IntArrayDynamic::size() const
{
    return _size;
};

int IntArrayDynamic::capacity() const
{
    return _capacity;
};
