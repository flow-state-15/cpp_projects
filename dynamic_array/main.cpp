#include <iostream>
#include <random>
#include "int_array_dynamic.h"

void print_int(int val) {
    std::cout << val << "\n";
}

void print_str(std::string val) {
    std::cout << val << "\n";
}

int main() {
    IntArrayDynamic arr = IntArrayDynamic();
    arr.push(5);
    arr.push(10);
    print_int(arr.size());
    print_int(arr.capacity());
    print_int(arr.get(1));

    // fill array with randoms to resize
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0,1000);
    for(int i = 2; i < 60; i++){
        arr.push(distrib(gen));
    }

    print_int(arr.size());
    print_int(arr.capacity());
    print_int(arr.get(arr.size()-1));

    return 0;
}
