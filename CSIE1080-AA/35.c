#include <stdio.h>

int Winner(char board[19][20]) {
    // 水平
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 15; j++) {
            if (board[i][j] == 'O' && board[i][j + 1] == 'O' && board[i][j + 2] == 'O' && board[i][j + 3] == 'O' && board[i][j + 4] == 'O') {
                return 1; // 白win
            } else if (board[i][j] == 'X' && board[i][j + 1] == 'X' && board[i][j + 2] == 'X' && board[i][j + 3] == 'X' && board[i][j + 4] == 'X') {
                return -1; // 黑win
            }
        }
    }

    // 垂直
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 19; j++) {
            if (board[i][j] == 'O' && board[i + 1][j] == 'O' && board[i + 2][j] == 'O' && board[i + 3][j] == 'O' && board[i + 4][j] == 'O') {
                return 1; // 白win
            } else if (board[i][j] == 'X' && board[i + 1][j] == 'X' && board[i + 2][j] == 'X' && board[i + 3][j] == 'X' && board[i + 4][j] == 'X') {
                return -1; // 黑win
            }
        }
    }

    // 右下
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (board[i][j] == 'O' && board[i + 1][j + 1] == 'O' && board[i + 2][j + 2] == 'O' && board[i + 3][j + 3] == 'O' && board[i + 4][j + 4] == 'O') {
                return 1; // 白win
            } else if (board[i][j] == 'X' && board[i + 1][j + 1] == 'X' && board[i + 2][j + 2] == 'X' && board[i + 3][j + 3] == 'X' && board[i + 4][j + 4] == 'X') {
                return -1; // 黑win
            }
        }
    }

    // 右上
    for (int i = 4; i < 19; i++) {
        for (int j = 0; j < 15; j++) {
            if (board[i][j] == 'O' && board[i - 1][j + 1] == 'O' && board[i - 2][j + 2] == 'O' && board[i - 3][j + 3] == 'O' && board[i - 4][j + 4] == 'O') {
                return 1; // 白win
            } else if (board[i][j] == 'X' && board[i - 1][j + 1] == 'X' && board[i - 2][j + 2] == 'X' && board[i - 3][j + 3] == 'X' && board[i - 4][j + 4] == 'X') {
                return -1; // 黑win
            }
        }
    }

    return 0; //沒有勝負
}

int main() {
    char board[19][20];

    for (int i = 0; i < 19; i++) {
        scanf("%s", board[i]);
    }

    int winner = Winner(board);

    // 輸出結果
    if (winner == 1) {
        printf("White\n");
    } else if (winner == -1) {
        printf("Black\n");
    } else {
        printf("No winner\n");
    }

    return 0;
}
