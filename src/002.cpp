// Created by pxl on 2020/10/21.
/*题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？

程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。*/
#include <iostream>
using namespace std;
int main()
{
    cout << "请输入当月利润:"<< endl;
    string str;
    getline(cin,str);
    double profit = stoi(str);
    if(profit<0)
        cout << "error profit must > 0!";
    double bonus,bonus1,bonus2,bonus4,bonus6,bonus10;
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
    if(profit < 100000)
        bonus = profit * 0.1;
    else if (profit < 200000)
        bonus = bonus1 + (profit - 100000)*0.075;
    else if(profit < 400000)
        bonus = bonus2 + (profit - 200000)*0.05;
    else if(profit < 600000)
        bonus = bonus4 + (profit - 400000)*0.03;
    else if(profit < 1000000)
        bonus = bonus6 + (profit - 600000)*0.015;
    else
        bonus = bonus10 + (profit - 1000000)*0.01;
    cout << "total bonus:" << bonus <<endl;
}