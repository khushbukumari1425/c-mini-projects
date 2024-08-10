#include <iostream>

using namespace std;

int main() {
    int userChoice, computerChoice;
    char playAgain;
    int userScore = 0, computerScore = 0;

    // Fixed sequence of computer choices for simplicity
    int computerChoices[] = {0, 1, 2}; // Rock, Paper, Scissors
    int choiceIndex = 0;

    do {
        cout << "Choose 0 for Rock, 1 for Paper, 2 for Scissors: ";
        cin >> userChoice;

        // Simulate computer choice based on a fixed sequence
        computerChoice = computerChoices[choiceIndex % 3];
        choiceIndex++;

        // Display choices
        cout << "You chose: " << (userChoice == 0 ? "Rock" : userChoice == 1 ? "Paper" : "Scissors") << endl;
        cout << "Computer chose: " << (computerChoice == 0 ? "Rock" : computerChoice == 1 ? "Paper" : "Scissors") << endl;

        // Determine the winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 0 && computerChoice == 2) || 
                   (userChoice == 1 && computerChoice == 0) || 
                   (userChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
            userScore++;
        } else {
            cout << "Computer wins!" << endl;
            computerScore++;
        }

        // Ask if the user wants to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    // Display final scores
    cout << "\nFinal Scores:" << endl;
    cout << "Your Score: " << userScore << endl;
    cout << "Computer Score: " << computerScore << endl;

    return 0;
}
