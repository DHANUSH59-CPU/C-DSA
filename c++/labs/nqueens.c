#include <stdio.h>
#define N 8 // Define the size of the board (N x N)

int board[N][N];

// Function to check if a queen can be placed at board[row][col]
int isSafe(int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return 0;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;

    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return 0;

    return 1;
}

// Function to solve the N-Queen problem using backtracking
int solveNQ(int col) {
    if (col >= N)
        return 1;

    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            board[i][col] = 1;

            if (solveNQ(col + 1))
                return 1;

            board[i][col] = 0; // Backtrack
        }
    }

    return 0;
}

// Function to print the solution
void printSolution() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(board[i][j] ? "Q " : ". ");
        printf("\n");
    }
}

int main() {
    if (solveNQ(0)) {
        printSolution();
    } else {
        printf("No solution exists\n");
    }
    return 0;
}