#include <stdio.h>

int main() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);

    // 創建原始矩陣並初始化為全零
    int originalMatrix[100][100] = {0};

    // 讀取並處理稀疏矩陣的數據
    for (int i = 0; i < k; i++) {
        int row, col, val;
        scanf("%d %d %d", &row, &col, &val);
        originalMatrix[row][col] = val; // 將數據填入原始矩陣
    }

    // 輸出原始矩陣
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", originalMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
