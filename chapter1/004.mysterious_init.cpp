//
// Created by YuKung on 2022/11/9.
//
//要求输出123,456 补全int * a[] = { };中的内容

#include <iostream>
using namespace std;

int main()
{
    int * a[] = {
            nullptr,
            nullptr,
            new int[2],   // 指针数组的元素是指针，使用new动态分配
            new int[5]
    };

    *a[2] = 123;
    a[3][5] = 456;
    if(! a[0] ) {
        cout << * a[2] << "," << a[3][5];
    }
    return 0;
}