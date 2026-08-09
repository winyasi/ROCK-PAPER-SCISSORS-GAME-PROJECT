#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    int userScore = 0, computerScore = 0;
    char playAgain;

    // Initialize random number generator
    srand(time(NULL));

    printf("====================================\n");
    printf("       ROCK PAPER SCISSORS\n");
    printf("====================================\n");

    do {

        // Display the three options
        printf("\nChoose one of the following:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");

        // Get user's choice
        printf("\nEnter your choice: ");
        scanf("%d", &userChoice);

        // Check if the choice is valid
        if (userChoice < 1 || userChoice > 3) {
            printf("\nERROR: Invalid choice!\n");
            printf("Please choose only 1, 2, or 3.\n");
            printf("Game ended.\n");
            break;
        }

        // Generate computer choice
        computerChoice = rand() % 3 + 1;

        // Display user's choice
        printf("\nYou chose: ");

        if (userChoice == 1) {
            printf("Rock\n");
        } 
        else if (userChoice == 2) {
            printf("Paper\n");
        } 
        else {
            printf("Scissors\n");
        }

        // Display computer's choice
        printf("Computer chose: ");

        if (computerChoice == 1) {
            printf("Rock\n");
        } 
        else if (computerChoice == 2) {
            printf("Paper\n");
        } 
        else {
            printf("Scissors\n");
        }

        // Compare choices
        if (userChoice == computerChoice) {

            printf("\nRESULT: It is a DRAW!\n");

        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2)) {

            printf("\nRESULT: YOU WIN THIS ROUND!\n");
            userScore++;

        }
        else {

            printf("\nRESULT: COMPUTER WINS THIS ROUND!\n");
            computerScore++;
        }

        // Display current scores
        printf("\n-----------------------------\n");
        printf("Your Score     : %d\n", userScore);
        printf("Computer Score : %d\n", computerScore);
        printf("-----------------------------\n");

        // Ask if user wants another round
        printf("\nDo you want to play another round? (Y/N): ");
        scanf(" %c", &playAgain);

        if (playAgain == 'Y' || playAgain == 'y') {
            printf("\nTRY AGAIN!\n");
        }
        else if (playAgain == 'N' || playAgain == 'n') {
            printf("\nGame ended. Thank you for playing!\n");
        }
        else {
            printf("\nInvalid response. Game ended.\n");
            break;
        }

    } while (playAgain == 'Y' || playAgain == 'y');

    // Display final scores
    printf("\n====================================\n");
    printf("           FINAL SCORE\n");
    printf("====================================\n");
    printf("Your Score     : %d\n", userScore);
    printf("Computer Score : %d\n", computerScore);
    printf("====================================\n");

    if (userScore > computerScore) {
        printf("FINAL WINNER: YOU!\n");
    }
    else if (computerScore > userScore) {
        printf("FINAL WINNER: COMPUTER!\n");
    }
    else {
        printf("FINAL RESULT: DRAW!\n");
    }

    printf("====================================\n");

    return 0;
}
