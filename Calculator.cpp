#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Github Repository Test" << "\n";

// Make a calculator so you can enter infinite numbers (Using a loop) and only trigger the calculations when the enter key is pressed.
    int num1, num2, choice;
    float answer;
    
    while (true)
    {
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        
        std::cout << "Enter the second number: ";
        std::cin >> num2;
        
        std::cout << "Enter the operation (+, -, *, /): ";
        std::cin >> choice;
        
        switch (choice)
        {
            case '+':
                answer = num1 + num2;
                break;
            case '-':
                answer = num1 - num2;
                break;
            case '*':
                answer = num1 * num2;
                break;
            case '/':
                answer = num1 / num2;
                break;
            default:
                std::cout << "Invalid operation";
        }
        
        std::cout << "The result is: " << answer << "\n";
    }   
   
    return 0;
}
