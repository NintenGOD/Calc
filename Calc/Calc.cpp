// Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/**
 * Performs addition of two numbers.
 *
 * @param num1 The first number.
 * @param num2 The second number.
 * @return The result of the addition operation.
 */
double add(double num1, double num2) {
    return num1 + num2;
}

/**
 * Performs subtraction of two numbers.
 *
 * @param num1 The first number.
 * @param num2 The second number.
 * @return The result of the subtraction operation.
 */
double subtract(double num1, double num2) {
    return num1 - num2;
}

/**
 * Performs multiplication of two numbers.
 *
 * @param num1 The first number.
 * @param num2 The second number.
 * @return The result of the multiplication operation.
 */
double multiply(double num1, double num2) {
    return num1 * num2;
}

/**
 * Performs division of two numbers.
 *
 * @param num1 The first number (dividend).
 * @param num2 The second number (divisor).
 * @return The result of the division operation.
 * @throws std::invalid_argument if num2 is zero (division by zero).
 */
double divide(double num1, double num2) {
    if (num2 == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return num1 / num2;
}

int main() {
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform arithmetic operations
    double sum = add(num1, num2);
    double difference = subtract(num1, num2);
    double product = multiply(num1, num2);

    try {
        double quotient = divide(num1, num2);
        std::cout << "Division result: " << quotient << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Print the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
