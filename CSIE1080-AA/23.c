#include <stdio.h>

// 自定義函式檢查字符是否為字母
int isAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// 大寫轉換函式
char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

// 大寫每個句子的首字母
void capitalizeSentences(char article[], int length) {
    int i;

    // 遍歷文章中的每個字符
    for (i = 0; i < length; i++) {
        // 將每個句子的第一個字母轉換為大寫
        if ((i == 0 || article[i - 1] == '.' || article[i - 1] == '!' || article[i - 1] == '?') && isAlpha(article[i])) {
            article[i] = toUpper(article[i]);
        }
    }
}

int main() {
    char article[10000];
    int length = 0;

    // 讀取文章
    char c;
    while ((c = getchar()) != EOF && length < 9999) {
        article[length++] = c;
    }
    article[length] = '\0'; // 確保字串結尾

    // 呼叫函式並輸出結果
    capitalizeSentences(article, length);
    printf("%s\n", article);

    return 0;
}
