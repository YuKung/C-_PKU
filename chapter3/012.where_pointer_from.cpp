//
// Created by YuKung on 2022/11/11.
//
/*
 * 补全struct A
 * 输入
    无
输出
    10*/
#include <iostream>
using namespace std;

struct A
{
    int v;
    A(int vv):v(vv) { };
    const A* getPointer() const{   // 写成常量成员函数的目的是因为常量对象不能调用非常量成员函数     此处补全
        return this;
    };

};

int main()
{
    const A a(10);
    const A * p = a.getPointer();
    cout << p->v << endl;
    return 0;
}