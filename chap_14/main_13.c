// #include <stdio.h>

// int main(void) {
//     char str[16];
//     char str1[12] = "DRAGON";
//     char str2[] = "QUEST";
//     int i = 3;
//     sprintf(str, "%s%s%d\n", str1, str2, i);
//     printf("%s", str);

//     return 0;
// }
#include <stdio.h>

int main(void) {
    char str[20]; // 適切なバッファサイズに変更
    char str1[12] = "DRAGON";
    char str2[] = "QUEST";
    int i = 3;
    
    // sprintfを使って文字列を生成し、strに格納
    sprintf(str, "%s%s%d\n", str1, str2, i);
    
    // printf関数でstrを出力
    printf("%s",str);

    return 0;
}
