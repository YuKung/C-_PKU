//
// Created by YuKung on 2022/11/9.
//
//题目要求 补全getElement的返回值 题目输出10
#include <iostream>
using namespace std;

int& getElement(int * a, int i)
{
    return a[i];                   // 这里让函数的返回值作为引用值！！！
}

int main()
{
    int a[] = {1,2,3};
    getElement(a,1) = 10;
    cout << a[1] ;
    return 0;
}