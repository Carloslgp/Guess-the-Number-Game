#include <stdio.h>
#include <stdlib.h>
#define MAX_TRIES 3


int main(){
    int secretNumber = 5;
    int guess;
    int try = 1;
    int result = 0;

    while (try <= MAX_TRIES){
        result = 0;
        while (result == 0){
            printf("Guess a number between 1 - 10: ");
            result = scanf("%d", &guess);
            if (result == 0){
                printf("Please enter a valid number. \n");
                while (getchar() != '\n');
            }
        }

        if (secretNumber == guess){
            printf("You got it right! congratulations \n");
            break;
        }
        else if (try == 3){
            printf("unfortunately you couldn't get it right, the secret number was: %d :( \n", secretNumber);
            break;
        }
        else if (guess > secretNumber){
            printf("Your guess is bigger than the secret number! \n");
        }
        else{
            printf("Your guess is smaller than the secret number! \n");
        }
        try ++;
    }

    printf("Thanks for playing!");
    
    return 0;
}

