#include <iostream>
#include "int_array_dynamic.h"

void print_int(int val) {
    std::cout << val << "\n";
}

void print_str(std::string val) {
    std::cout << val << "\n";
}

int main() {
    IntArrayDynamic arr = IntArrayDynamic();
    int arr_cap = arr.capacity();
    int arr_size = arr.push(5);
    print_int(arr_size);
    print_int(arr_cap);
    print_int(arr.get(0));
    return 0;
}
