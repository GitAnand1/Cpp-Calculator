#include <iostream>
#include "Calculator.h"

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int main()
{
    int calculatorChoice;

    while (true)
    {
        std::cout << "\n==============================\n";
        std::cout << "          CALCULATOR\n";
        std::cout << "==============================\n";
        std::cout << "1. Basic Calculator\n";
        std::cout << "2. Scientific Calculator\n";
        std::cout << "3. Unit Converter\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> calculatorChoice;

        if (calculatorChoice == 4)
        {
            std::cout << "Exiting calculator...\n";
            break;
        }

        if (calculatorChoice == 2)
        {
            std::cout << "Scientific Calculator - Coming Soon!\n";
            continue;
        }

        if (calculatorChoice == 3)
        {
            std::cout << "Unit Converter - Coming Soon!\n";
            continue;
        }

        if (calculatorChoice != 1)
        {
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }

        int operationChoice;
        double num1;
        double num2;

        std::cout << "\n------------------------------\n";
        std::cout << "       BASIC CALCULATOR\n";
        std::cout << "------------------------------\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "5. Back to Calculator Menu\n";
        std::cout << "Enter your choice: ";

        std::cin >> operationChoice;

        if (operationChoice == 5)
        {
            continue;
        }

        if (operationChoice < 1 || operationChoice > 4)
        {
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }

        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (operationChoice)
        {
            case 1:
                std::cout << "Result: " << add(num1, num2) << "\n";
                break;

            case 2:
                std::cout << "Result: " << subtract(num1, num2) << "\n";
                break;

            case 3:
                std::cout << "Result: " << multiply(num1, num2) << "\n";
                break;

            case 4:
                if (num2 == 0)
                {
                    std::cout << "Error: Cannot divide by zero.\n";
                }
                else
                {
                    std::cout << "Result: " << divide(num1, num2) << "\n";
                }
                break;
        }
    }

    return 0;
}