#include <stdio.h>

// 判斷是否為質數的函數
int is_prime(int num) {
    if (num < 2) {
        return 0; // 不是質數
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 不是質數
        }
    }
    return 1; // 是質數
}

// 交換兩數的函數
void swap(int a, int b, int arr[]) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

// 自定義比較函數，用於排序
int custom_compare(int a, int b) {
    if (is_prime(a) && is_prime(b)) {
        return b - a; // 質數大的排在前面
    } else if (!is_prime(a) && !is_prime(b)) {
        return a - b; // 非質數小的排在前面
    } else {
        return is_prime(a) ? -1 : 1; // 質數優先於非質數
    }
}

// 主函數
int main() {
    int N;
    scanf("%d", &N);

    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // 使用簡單的冒泡排序
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (custom_compare(numbers[j], numbers[j + 1]) > 0) {
                swap(j, j + 1, numbers);
            }
        }
    }

    // 輸出排序結果
    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
