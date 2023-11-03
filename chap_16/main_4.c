#include <stdio.h>
#include <string.h>

typedef struct {
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
} student;

void student_print(student data);

int main(void)
{
    student data;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(data);
    return 0;
}

void student_print(student data)
{
    printf("[学年]:%d\n", data.year);
    printf("[クラス]%d\n", data.clas);
    printf("[出席番号]%d\n", data.number);
    printf("[名前]%s\n", data.name);
    printf("[身長]%f\n", data.stature);
    printf("[体重]%f\n", data.weight);
    return;
}
// #include <stdio.h>
// #include <string.h>

// // student構造体の定義
// typedef struct {
//     int year;
//     int clas;
//     int number;
//     char name[64];
//     double stature;
//     double weight;
// } student;

// // student_print関数のプロトタイプ宣言
// void student_print(student data);

// int main(void)
// {
//     // student構造体の変数を作成して初期化
//     student data;

//     data.year = 3;
//     data.clas = 4;
//     data.number = 18;
//     strcpy(data.name, "MARIO");
//     data.stature = 168.2;
//     data.weight = 72.4;

//     // student_print関数を呼び出してデータを表示
//     student_print(data);

//     return 0;
// }

// // student_print関数の実装
// void student_print(student data)
// {
//     printf("[学年]: %d\n", data.year);
//     printf("[クラス]: %d\n", data.clas);
//     printf("[出席番号]: %d\n", data.number);
//     printf("[名前]: %s\n", data.name); // 名前は文字列なので%sを使用
//     printf("[身長]: %.1lf\n", data.stature); // 身長は浮動小数点数なので%.1lfを使用
//     printf("[体重]: %.1lf\n", data.weight); // 体重は浮動小数点数なので%.1lfを使用
// }
