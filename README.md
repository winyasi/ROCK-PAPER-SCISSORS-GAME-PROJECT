Rock, Paper, Scissors Game
Project Description

This project is a simple Rock, Paper, Scissors game developed in both C programming and Java. The game allows a user to play against the computer by selecting one of three options:

1 – Rock
2 – Paper
3 – Scissors

The computer randomly selects one option, and the program compares both choices to determine the winner of each round.

If the user enters an invalid option, the program displays an error message and ends the game. After each valid round, the user can choose to play another round or end the game.

C Programming Version

The C version demonstrates basic C programming concepts such as:

Variables and data types
if, else if, and else
do-while/looping
User input using scanf()
Output using printf()
Random number generation using rand()
Score calculation and comparison

The computer generates a random choice between 1 and 3, then the program compares it with the user's choice.

File: rock-paper-scissors.c

Java Version

The Java version implements the same game using Java programming concepts.

It demonstrates:

Variables and data types
if-else statements
while loops
User input using Scanner
Random selection using the Random class
Methods
Score tracking
Input validation

The Java program uses a displayChoice() method to display Rock, Paper, or Scissors based on the selected number.

File: RockPaperScissors.java

Game Rules
User	Computer	Result
Rock	Scissors	User Wins
Paper	Rock	User Wins
Scissors	Paper	User Wins
Rock	Paper	Computer Wins
Paper	Scissors	Computer Wins
Scissors	Rock	Computer Wins
Same Choice	Same Choice	Draw
Main Features
User vs. Computer gameplay
Three choices: Rock, Paper, and Scissors
Random computer selection
Invalid input detection
Winner displayed after every round
Score tracking
Multiple rounds
Option to play again or end the game
Final score and overall winner
Project Structure
Rock-Paper-Scissors/
│
├── C-Version/
│   └── rock-paper-scissors.c
│
├── Java-Version/
│   └── RockPaperScissors.java
│
├── rock_paper_scissors_flowchart.drawio
│
└── README.md
How to Run
C Version

Compile:

gcc rock-paper-scissors.c -o rock-paper-scissors

Run:

rock-paper-scissors
Java Version

Compile:

javac RockPaperScissors.java

Run:

java RockPaperScissors
Objective

The main objective of this project is to demonstrate how the same problem can be solved using two different programming languages while practicing important programming concepts such as input handling, decision making, loops, random numbers, methods, and score management.

Author

Elvis Winyasi

Project: Rock, Paper, Scissors Game
Languages: C Programming and Java
