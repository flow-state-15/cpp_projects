#include <iostream>
#include "int_array_dynamic.h"

int main() {
    IntArray arr = IntArray(5);
    int arr_size = arr.capacity();
    print_int(arr_size);
    return 0;
}

void print_int(int val) {
    std::cout << val << "\n";
}

void print_str(std::string val) {
    std::cout << val << "\n";
}
