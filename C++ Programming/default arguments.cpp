#include <iostream>

// Function with default argument
int add(int a, int b = 5) {
    return a + b;
}

int main() {
    int result1 = add(3);    // Uses the default value for 'b'
    int result2 = add(3, 7); // 'b' is explicitly provided

    std::cout << "Result1: " << result1 << std::endl; // Output: 8
    std::cout << "Result2: " << result2 << std::endl; // Output: 10

    return 0;
}
