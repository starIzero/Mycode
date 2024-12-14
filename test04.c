#include <stdio.h>
#include <string.h>

int main(){
    char s[100][81];  // 存储多组字符串
    int m[100], l[100];  // 存储多组m和l
    int count = 0;  // 记录输入组数
    
    // 读取所有输入
    while(scanf("%d %d", &m[count], &l[count])!=EOF){
        getchar();
        gets(s[count]);
        count++;
    }
    
    // 处理并输出所有数据
    for(int i = 0; i < count; i++){
        int n = strlen(s[i]);
        if(m[i] <= n){
            for(int j = m[i]-1; j < n && j < m[i]+l[i]-1; j++){
                printf("%c", s[i][j]);
            }
        }
        printf("\n");
        if(i < count-1) printf("\n");  // 除了最后一组，每组后面加空行
    }
    
    printf("\npress any key to close it");
    getchar();
    return 0;
}
