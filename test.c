#include <stdio.h>

void reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", reversed);
}

int main() {
    int num;
    for (int i = 0; i < 3; i++) {
        printf("请输入一个4位正整数: ");
        scanf("%d", &num);
        if (num >= 1000 && num <= 9999) {
            reverseNumber(num);
        } else {
            printf("输入无效。请输入一个4位正整数。\n");
            i--;// 输入无效，重复当前循环
        }
    }  
    return 0;
}