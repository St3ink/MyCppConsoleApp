/*  
Program File Name: Checkpoint 2.14
Programmer: Kason Steiner
Date: 08/27/2024
Requirements: 
Write a program that has the following character variables:
first, middle, and last. strore your initials in these variables
then display them on screen.
*/
#include <iostream> 
#include <string>

int main(){

    char firstInitial;
    char middleInitial;
    char lastInitial;
    std::string firstName;
    
    std::cout << "Please enter the initial of your first name: ";
    std::cin >> firstInitial;
    std::cout << "Please enter the initial of your middle name: ";
    std::cin >> middleInitial;
    std::cout << "Please enter the initial of your last name: ";
    std::cin >> lastInitial;
    std::cout << "Your initials are " << firstInitial << middleInitial << lastInitial;
    std::cout << "Please enter your first name: ";
    std::cin >> firstName;
    std::cout << "Welcome: " << firstName;

    return 0;
}