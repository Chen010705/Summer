/**
描述
输出一个整数序列中与指定数字相同的数的个数。
输入
输入包含三行：
第一行为N，表示整数序列的长度(N <= 100)；
第二行为N个整数，整数之间以一个空格分开；
第三行包含一个整数，为指定的整数m。
输出
输出为N个数中与m相同的数的个数。
样例输入
3
2 3 2
2
样例输出
2
**/
//思路:循环遍历比对
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[100];
int main()
{
    int N;
    int count = 0;//用来计数初始化为0
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == m)
        {
            count++;
        }
    }
    cout << count;
    return 0;
