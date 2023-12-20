#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 需要包含此標頭文件以使用 malloc 函式

// 初始化函式，為 str 和 key 分配記憶體並複製字串
void init(char **str, char **key) {
    *str = malloc(strlen("banana") + 1); // +1 是為了包含 null 結尾字符
    strcpy(*str, "banana");

    *key = malloc(strlen("ana") + 1);
    strcpy(*key, "ana");
}

int main() {
    char *str;
    char *key;
    int count = 0;

    // 初始化字符串指標
    init(&str, &key);

    // 計算 key 在 str 中出現的次數
    char *ptr = str;
    while ((ptr = strstr(ptr, key)) != NULL) {
        count++;
        ptr++; // 移動到下一個位置，避免無窮迴圈
    }

    // 顯示結果
    printf("%d", count);

    // 釋放動態分配的記憶體
    free(str);
    free(key);

    return 0;
}
