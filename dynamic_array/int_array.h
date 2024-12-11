#ifndef INT_ARRAY_H
#define INT_ARRAY_H

class IntArray {
    //member list
    private: // array goes here
    public:
        void _IntArray(); // constructor IntArray here -- how is IntArray not a collision? probs needs
        // a differentiating token

        void push_back(int value); // add to back
        int get(int index) const; // returns el at idx with bounds checking
        int size() const; // returns n of els currently stored
        int capacity() const; // returns current capacity of array
};

#endif