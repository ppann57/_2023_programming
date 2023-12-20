#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // 需要包含此標頭文件以使用 isdigit 函式

// 初始化函式，示範用法，您可以根據實際需求修改
void init(char **str) {
    *str = "More than 40 people were injured in Taiwan after Typhoon Haikui ripped across the island, uprooting trees and forcing thousands to evacuate. The storm packed winds of up to 200km/h (124 mph) but have been no reports of deaths or any major structural damage.";
}

int main() {
    char *str;
    int sum = 0;

    // 初始化字符串指標
    init(&str);

    // 遍歷字串，找到數字並加總
    int currentNumber = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            currentNumber = currentNumber * 10 + (*str - '0');
        } else {
            sum += currentNumber;
            currentNumber = 0;
        }
        str++;
    }

    // 最後一個數字可能還未加總
    sum += currentNumber;

    // 顯示結果
    printf("%d", sum);

    return 0;
}
