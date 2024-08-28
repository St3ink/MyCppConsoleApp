#include <iostream> 
#include <cmath>

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do{
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
        }
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "Correct! # of Tries: " << tries << '\n';
        }


    }while(num != guess); 


    return 0;
}