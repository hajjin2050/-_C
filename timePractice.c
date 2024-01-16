#include <stdio.h>

int main(void)
{
    int input = 0;
    scanf_s("%d", &input);
    //  int hour = 0, min = 0, sec = 0;
    // 이하 처리코드
    // 1시간 == 3600초
    // 출력
    printf("%02d:%02d:%02d\n", input / 3600, (input % 3600) / 60, input % 60);
    return 0;
}
