#include <stdio.h>

// 右下左上
int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void printClockwise(int matrix[100][100], int n, int m) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    int direction = 0;  // 初始方向右

    while (top <= bottom && left <= right) {
        if (direction == 0) { // 向右
            for (int i = left; i <= right; i++) {
                printf("%d ", matrix[top][i]);
            }
            top++;
        } else if (direction == 1) { // 向下
            for (int i = top; i <= bottom; i++) {
                printf("%d ", matrix[i][right]);
            }
            right--;
        } else if (direction == 2) { // 向左
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        } else if (direction == 3) { // 向上
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }

        //換方向
        direction = (direction + 1) % 4;
    }
}

int main() {
    int n, m;
    int matrix[100][100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printClockwise(matrix, n, m);

    return 0;
}
