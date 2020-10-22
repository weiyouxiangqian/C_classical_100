//
// Created by igs on 2020/10/21.
//
/*题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。*/
#include <iostream>
using namespace std;
int main()
{
    int year,month,day;
    cout << "请输入年月日,以空格隔开,例如 2020 01 01" << endl;
    cin >> year >> month >> day;
    int sum = 0;
    switch(month) // 先计算某月以前月份的总天数
    {
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:cout << "data error";break;
    }
    sum += day;
    if((year%400==0||(year%4==0&&year%100!=0))&&month>2)// 判断是不是闰年
        sum++;
    printf("这是这一年的第 %d 天。",sum);
}
