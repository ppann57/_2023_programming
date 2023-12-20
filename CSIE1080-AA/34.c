#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    // 宣告 courses 表格
    int courses[m][3];
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &courses[i][0], &courses[i][1], &courses[i][2]);
    }

    // 宣告 scores 表格
    int scores[n][2];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &scores[i][0], &scores[i][1]);
    }

    // 宣告學生是否被當掉的標誌，並初始化為 0
    int failedStudents[m];
    for (int i = 0; i < m; i++) {
        failedStudents[i] = 0;
    }

    // 分析每位學生的平均分數是否不滿 60 分
    for (int i = 0; i < m; i++) {
        int sid = courses[i][0];
        int totalScore = 0;
        int courseCount = 0;

        // 計算該學生每科的總分
        for (int j = 0; j < n; j++) {
            if (scores[j][0] == sid) {
                totalScore += scores[j][1];
                courseCount++;
            }
        }

        // 計算平均分數，如果不滿 60 分，標記為被當掉
        if (courseCount > 0 && (totalScore / courseCount) < 60) {
            failedStudents[i] = 1;
        }
    }

    // 計算總學生人數和至少有一科被當的學生人數
    int totalStudents = m;
    int failedCount = 0;
    for (int i = 0; i < m; i++) {
        if (failedStudents[i] == 1) {
            failedCount++;
        }
    }

    // 輸出結果
    printf("%d %d\n", totalStudents, failedCount);

    return 0;
}
