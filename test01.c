#include <stdio.h>

#define NUM_SINGERS 10
#define NUM_JUDGES 7

// 计算选手的最终得分
float calculateFinalScore(float scores[], int size) {
    float max = scores[0], min = scores[0], sum = 0.0;
    for (int i = 0; i < size; i++) {
        if (scores[i] > max) max = scores[i];
        if (scores[i] < min) min = scores[i];
        sum += scores[i];
    }
    return (sum - max - min) / (size - 2);
}

// 对分数进行排序
void sortScores(float scores[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (scores[j] < scores[j + 1]) {
                float temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

int main() {
    float scores[NUM_SINGERS][NUM_JUDGES], finalScores[NUM_SINGERS];

    // 输入每位选手的评分并计算最终得分
    for (int i = 0; i < NUM_SINGERS; i++) {
        printf("请输入第 %d 位选手的评分（7个评分，范围5.0~10.0）：\n", i + 1);
        for (int j = 0; j < NUM_JUDGES; j++) {
            scanf("%f", &scores[i][j]);
        }
        finalScores[i] = calculateFinalScore(scores[i], NUM_JUDGES);
    }

    // 对最终得分进行排序
    sortScores(finalScores, NUM_SINGERS);

    // 输出排序后的最终得分
    printf("选手的最终得分从高到低排序如下：\n");
    for (int i = 0; i < NUM_SINGERS; i++) {
        printf("%.1f\n", finalScores[i]);
    }

    return 0;
}