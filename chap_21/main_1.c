#include <stdio.h>

int main(void)
{
    char str[100]; // 文字列を格納するためのバッファ

    printf("文字列を入力してください: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // 改行文字を含んだまま文字列を読み込むので、必要に応じて改行文字を削除できます
        // str[strlen(str) - 1] = '\0'; // 最後の文字をヌル文字に置き換える

        printf("入力された文字列: %s\n", str);
    } else {
        printf("入力エラー\n");
    }

    return 0;
}
