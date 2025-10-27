#include <stdio.h>
// 计算某日期是当年的第几天
int day_of_year(int year, int month, int day) {
    int days = 0;
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        month_days[1] = 29;
    for (int i = 0; i < month - 1; i++)
        days += month_days[i];
    days += day;
    return days;
}

int main()
{
    int month, day, year;
    printf("请输入日期（格式：年-月-日）：");
    scanf("%d-%d-%d", &year, &month, &day);
    int days = day_of_year(year, month, day);
    printf("%d年%d月%d日是该年的第%d天\n", year, month, day, days);
    return 0;
}