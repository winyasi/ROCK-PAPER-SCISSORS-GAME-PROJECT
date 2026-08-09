#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static int promptUserChoice(void) {
    char line[64];
    int choice;

    while (1) {
        printf("\nEnter your choice: ");
        if (!fgets(line, sizeof(line), stdin)) {
            return 0;
        }

        if (sscanf(line, "%d", &choice) == 1 && choice >= 1 && choice <= 3) {
            return choice;
        }

        printf("ERROR: Invalid choice! Please choose only 1, 2, or 3.\n");
    }
}

static char promptPlayAgain(void) {
    char line[64];

    while (1) {
        printf("\nDo you want to play another round? (Y/N): ");
        if (!fgets(line, sizeof(line), stdin)) {
            return 'N';
        }

        if (line[0] == 'Y' || line[0] == 'y' || line[0] == 'N' || line[0] == 'n') {
            return line[0];
        }

        printf("Invalid response. Please enter Y or N.\n");
    }
}

static const char *choiceName(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        default: return "Scissors";
    }
}

int main(void) {
    int userChoice, computerChoice;
    int userScore = 0, computerScore = 0;
    char playAgain;

    srand((unsigned int)time(NULL));

    printf("====================================\n");
    printf("       ROCK PAPER SCISSORS\n");
    printf("====================================\n");

    do {
        printf("\nChoose one of the following:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");

        userChoice = promptUserChoice();
        if (userChoice == 0) {
            printf("\nInput error detected. Game ended.\n");
            break;
        }

        computerChoice = rand() % 3 + 1;

        printf("\nYou chose: %s\n", choiceName(userChoice));
        printf("Computer chose: %s\n", choiceName(computerChoice));

        if (userChoice == computerChoice) {
            printf("\nRESULT: It is a DRAW!\n");
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            printf("\nRESULT: YOU WIN THIS ROUND!\n");
            userScore++;
        } else {
            printf("\nRESULT: COMPUTER WINS THIS ROUND!\n");
            computerScore++;
        }

        printf("\n-----------------------------\n");
        printf("Your Score     : %d\n", userScore);
        printf("Computer Score : %d\n", computerScore);
        printf("-----------------------------\n");

        playAgain = promptPlayAgain();
        if (playAgain == 'Y' || playAgain == 'y') {
            printf("\nTRY AGAIN!\n");
        } else {
            printf("\nGame ended. Thank you for playing!\n");
        }

    } while (playAgain == 'Y' || playAgain == 'y');

    printf("\n====================================\n");
    printf("           FINAL SCORE\n");
    printf("====================================\n");
    printf("Your Score     : %d\n", userScore);
    printf("Computer Score : %d\n", computerScore);
    printf("====================================\n");

    if (userScore > computerScore) {
        printf("FINAL WINNER: YOU!\n");
    } else if (computerScore > userScore) {
        printf("FINAL WINNER: COMPUTER!\n");
    } else {
        printf("FINAL RESULT: DRAW!\n");
    }

    printf("====================================\n");
    return 0;
}
