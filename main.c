#include <stdio.h>
#include <stdlib.h>
#define MAX_TRIES 3


int main(){
    int secretNumber = 5;
    int guess;
    int attempt = 1;
    int result = 0;

    while (attempt <= MAX_TRIES){
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
        else if (attempt == 3){
            printf("unfortunately you couldn't get it right, the secret number was: %d :( \n", secretNumber);
            break;
        }
        else if (guess > secretNumber){
            printf("Your guess is bigger than the secret number! \n");
        }
        else{
            printf("Your guess is smaller than the secret number! \n");
        }
        attempt ++;
        if (attempt == 3){
            printf("You have %d attempt  left \n", 4 - attempt);
        }else{
            printf("You have %d attempts left \n", 4 - attempt);
        }
    }

    printf("Thanks for playing!");
    
    return 0;
}

