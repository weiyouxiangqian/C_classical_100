//
// Created by igs on 2020/10/22.
//

/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。

程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums;
    int x,y,z;
    cout << "\n请输入三个数字:\n" << endl;
    cin >> x >> y >> z;
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);
    sort(nums.begin(),nums.end());
    cout << "从小到大排序为:" << endl;
    for (auto & i :nums)
        cout << i << endl;

}
