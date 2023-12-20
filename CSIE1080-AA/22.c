#include <stdio.h>

// 函數用於將十進制轉換為二進制
void decimalToBinary(int n) {
    // 用於存儲二進制表示
    int binary[32];
    
    // 初始化索引
    int i = 0;
    
    // 將十進制轉換為二進制
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // 輸出二進制表示（反向）
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    
    printf("\n");
}

// 主函數
int main() {
    int N;
    
    // 讀取輸入
    scanf("%d", &N);
    
    // 呼叫函數並輸出結果
    decimalToBinary(N);
    
    return 0;
}
