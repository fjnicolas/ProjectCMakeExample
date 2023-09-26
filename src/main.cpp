#include <iostream>
#include "math_functions.h"
#include "string_functions.h"

int main() {
    std::cout << "Sum: " << add(5, 3) << std::endl;
    std::cout << "Concatenated String: " << concatenate("Hello, ", "world!") << std::endl;

    return 0;
}
