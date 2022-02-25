#include <iostream>
int main()
{
    // Print a welcome message
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";

    // Declare 3 number code
    const int CodeA = 4; // prtoecting a from changing in the futura
    const int CodeB = 2;
    const int CodeC = 3;

    // Operate the variables
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers un the code" << std::endl;
    std::cout << "The codes add-up to: " << CodeSum << std::endl;
    std::cout << "The codes muliply to: "<< CodeProduct;

    int PlayerGuess;

    return 0;

}
