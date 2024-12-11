#ifndef INT_ARRAY_DYNAMIC_H
#define INT_ARRAY_DYNAMIC_H

class IntArray {
    //member list
    private: // array goes here
        int _size;
        int _capacity;
        int* _arr[60] {0};
        int _last_idx;
    public:
        IntArray();

        int push_back(int value); // add to back return size
        int get(int index) const; // returns el at idx with bounds checking
        int size() const; // returns n of els currently stored
        int capacity() const; // returns current capacity of array
};

#endif