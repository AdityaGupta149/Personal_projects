#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random, guess;
    printf("Welcome to the Number Guessing Game!!!");
    int no_of_guess=0;
    srand(time(NULL));
    random= rand()%100+1;
    do{
        printf("\n Enter the guess number(1 to 100) ");
        scanf("%d", &guess);
        no_of_guess++;

        if(guess>random){
            printf("Guess the smaller number");
        } else if(guess<random){
            printf("Guess the larger number");
        } else{
            printf("Woohooo!!! You Guessed the right number in %d attemts", no_of_guess);
        }
    }while(guess!=random);
     
    printf("Thanks for Playing");
    printf("Developed by Aditya Gupta");
}
