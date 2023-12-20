#include <stdio.h>

// 定義一個結構體，包含int、char和float
struct MemoryBlock {
    int integerValue;
    char charValue;
    float floatValue;
};

// 初始化記憶體塊的函式
void init(struct MemoryBlock *block) {
    // 在這裡執行初始化的相關邏輯，例如給結構體的成員賦值
    (void)block; // 告訴編譯器我們知道這個參數沒有使用
}

int main() {
    // 宣告一個MemoryBlock結構體的實例
    struct MemoryBlock block;

    // 將記憶體塊的地址傳遞給初始化函式
    init(&block);

    // 使用結構體變數來顯示記憶體塊中的值
    printf("%d, %c, %f", block.integerValue, block.charValue, block.floatValue);

    return 0;
}
