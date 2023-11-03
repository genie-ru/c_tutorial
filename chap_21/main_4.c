// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void main(void)
// {
//     int i, j, val[10];
//     char str[32], *ch;
//     fgets(str, sizeof(str), stdin);

//     ch = strtok(str, ",\n");
//     for (i = 0; i < 10; i++) {
//         if (ch == NULL) {
//             break;
//         } else {
//             val[i] = atoi(ch);
//         }
//         ch = strtok(NULL, ", \n");
//     }

//     for (j = 0; j < i; j++) printf("%d\n", val[j]);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) // main関数はint型の戻り値を持つべきです
{
    int i, j, val[10];
    char str[32], *ch;
    fgets(str, sizeof(str), stdin);

    ch = strtok(str, ",\n");
    for (i = 0; i < 10; i++) {
        if (ch == NULL) {
            break;
        } else {
            val[i] = atoi(ch);
        }
        ch = strtok(NULL, ",\n"); // 改行も区切り文字として追加
    }

    for (j = 0; j < i; j++) {
        printf("%d\n", val[j]);
    }

    return 0;
}
