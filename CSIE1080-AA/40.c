#include <stdio.h>

// 初始化函式，示範用法，您可以根據實際需求修改
void init(int **a, int **b) {
    // 這裡以範例方式為指標 a 和 b 分別指向兩個整數，您可以根據實際需求修改
    int tempA = 5;
    int tempB = 10;
    
    *a = &tempA;
    *b = &tempB;
}

int main() {
    int *a, *b;
    int sum = 0;

    // 初始化指標
    init(&a, &b);

    // 確保 a 的位置在 b 之前
    if (a > b) {
        int *temp = a;
        a = b;
        b = temp;
    }

    // 計算 a 到 b 之間整數的總和
    while (a < b) {
        sum += *a;
        a++;
    }

    // 顯示結果
    printf("%d", sum);

    return 0;
}
