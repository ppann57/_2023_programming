#include <stdio.h>

#define MAX_SIZE 100

int canReachEnd(int maze[MAX_SIZE][MAX_SIZE], int n, int x, int y) {
    // 超出範圍，返回 0
    if (x < 0 || x >= n || y < 0 || y >= n) {
        return 0;
    }

    // 到達終點，返回 1
    if (x == n - 1 && y == n - 1) {
        return 1;
    }

    // 障礙物或已走過，返回 0
    if (maze[x][y] == 1 || maze[x][y] == -1) {
        return 0;
    }

    // 標記走過的位置
    maze[x][y] = -1;

    // 上下左右
    if (canReachEnd(maze, n, x - 1, y) || canReachEnd(maze, n, x + 1, y) ||
        canReachEnd(maze, n, x, y - 1) || canReachEnd(maze, n, x, y + 1)) {
        return 1;
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int maze[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &maze[i][j]);
        }
    }

    // 判斷有沒有路
    if (canReachEnd(maze, n, 0, 0)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
