#include <stdio.h>
#include <string.h>

const char* determine_winner(const char* player1, const char* player2) {
    static const char* player1_wins = "Player1";
    static const char* player2_wins = "Player2";
    static const char* draw = "Draw";
    static const char* invalid = "Invalid";

    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
        return player1_wins;
    }
    else if ((strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) ||
        (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0) ||
        (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0)) {
        return player2_wins;
    }
    else if (strcmp(player1, player2) == 0) {
        return draw;
    }
    else {
        return invalid;
    }
}

int main() {
    const char* player1 = "Rock";
    const char* player2 = "Scissors";
    printf("Player1: %s, Player2: %s -> Winner: %s\n", player1, player2, determine_winner(player1, player2));

    player1 = "Rock";
    player2 = "Paper";
    printf("Player1: %s, Player2: %s -> Winner: %s\n", player1, player2, determine_winner(player1, player2));

    player1 = "Scissors";
    player2 = "Scissors";
    printf("Player1: %s, Player2: %s -> Winner: %s\n", player1, player2, determine_winner(player1, player2));

    player1 = "Rock";
    player2 = "Lizard";
    printf("Player1: %s, Player2: %s -> Winner: %s\n", player1, player2, determine_winner(player1, player2));

    return 0;
}