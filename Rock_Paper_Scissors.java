import java.util.Random;
import java.util.Scanner;

public class Rock_Paper_Scissors {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        Random random = new Random();

        int userScore = 0;
        int computerScore = 0;
        int drawScore = 0;

        char playAgain = 'Y';

        System.out.println("====================================");
        System.out.println("       ROCK PAPER SCISSORS");
        System.out.println("====================================");

        while (playAgain == 'Y' || playAgain == 'y') {

            // Display options
            System.out.println("\nChoose one of the following:");
            System.out.println("1. Rock");
            System.out.println("2. Paper");
            System.out.println("3. Scissors");

            // Get user's choice
            System.out.print("\nEnter your choice: ");
            int userChoice = input.nextInt();

            // Validate user's choice
            if (userChoice < 1 || userChoice > 3) {
                System.out.println("\nERROR: Invalid choice!");
                System.out.println("Please choose only 1, 2, or 3.");
                System.out.println("Game ended.");
                break;
            }

            // Generate computer choice: 1, 2, or 3
            int computerChoice = random.nextInt(3) + 1;

            // Display user's choice
            System.out.print("\nYou chose: ");
            displayChoice(userChoice);

            // Display computer's choice
            System.out.print("Computer chose: ");
            displayChoice(computerChoice);

            // Compare choices
            if (userChoice == computerChoice) {

                System.out.println("\nRESULT: IT IS A DRAW!");
                drawScore++;

            } else if (
                    (userChoice == 1 && computerChoice == 3) ||
                    (userChoice == 2 && computerChoice == 1) ||
                    (userChoice == 3 && computerChoice == 2)
            ) {

                System.out.println("\nRESULT: YOU WIN THIS ROUND!");
                userScore++;

            } else {

                System.out.println("\nRESULT: COMPUTER WINS THIS ROUND!");
                computerScore++;
            }

            // Display current scores
            System.out.println("\n-----------------------------");
            System.out.println("Your Score     : " + userScore);
            System.out.println("Computer Score : " + computerScore);
            System.out.println("Draws          : " + drawScore);
            System.out.println("-----------------------------");

            // Ask if user wants another round
            System.out.print("\nDo you want to play another round? (Y/N): ");
            playAgain = input.next().charAt(0);

            if (playAgain == 'Y' || playAgain == 'y') {
                System.out.println("\nTRY AGAIN!");
            } else if (playAgain == 'N' || playAgain == 'n') {
                System.out.println("\nGame ended. Thank you for playing!");
            } else {
                System.out.println("\nERROR: Invalid response.");
                System.out.println("Game ended.");
                break;
            }
        }

        // Final score
        System.out.println("\n====================================");
        System.out.println("           FINAL SCORE");
        System.out.println("====================================");
        System.out.println("Your Score     : " + userScore);
        System.out.println("Computer Score : " + computerScore);
        System.out.println("Draws          : " + drawScore);
        System.out.println("====================================");

        // Overall winner
        if (userScore > computerScore) {
            System.out.println("FINAL WINNER: YOU!");
        } else if (computerScore > userScore) {
            System.out.println("FINAL WINNER: COMPUTER!");
        } else {
            System.out.println("FINAL RESULT: DRAW!");
        }

        System.out.println("====================================");

        input.close();
    }

    // Method to display the selected choice
    public static void displayChoice(int choice) {

        if (choice == 1) {
            System.out.println("Rock");
        } else if (choice == 2) {
            System.out.println("Paper");
        } else {
            System.out.println("Scissors");
        }
    }
}