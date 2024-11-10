# Guess-the-Number-Game
This is a simple number guessing game written in C. The objective of the game is to guess the secret number chosen by the program, within a range from 1 to 10. The player has a limited number of attempts to guess the number. The program also validates the user's input, ensuring that only valid numbers are accepted.

# How to Play
- The program chooses a secret number between 1 and 10.
- The player has 3 attempts to guess the correct number.
- After each attempt, the program informs whether the player's guess is higher or lower than the secret number.
- If the player guesses correctly, the program congratulates the player and ends the game.
- If the player fails to guess the number after 3 attempts, the secret number is revealed, and the game ends.
# Game Rules
- The secret number is set to 5.
- The player must enter a number between 1 and 10.
- If the player enters an invalid (non-numeric) value, the program will prompt for a new input until a valid number is provided.
- The game ends once the player guesses the number or reaches the maximum number of attempts.
# Features
- Input Validation: The program checks if the player entered a valid number. If the player tries to enter a non-numeric value, the program will prompt them to input a number again.
- Real-Time Feedback: After each attempt, the program informs whether the player's guess was higher or lower than the secret number.
- Maximum Attempts: The player has at most 3 attempts to guess the secret number.
