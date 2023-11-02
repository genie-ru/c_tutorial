// #include <stdio.h>

// int main(void) {
//     int i;

//     char str[256];
//     scanf("%s", str);

//     for (i = 0; str[i] != '\0'; i++)
//     printf("%d\n", i);

//     return 0;
// }

#include <stdio.h>

int main(void) {
    int i;
    char str[256];

    // 文字列を受け取る
    scanf("%s", str);

    // 文字列内の文字数を数えるループ
    for (i = 0; str[i] != '\0'; i++) {
        // 何か特別な処理を行う場合はここに追加
    }

    // 文字数を出力
    printf("入力された文字の数: %d\n", i);

    return 0;
}
