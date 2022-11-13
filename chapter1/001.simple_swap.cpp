//
// Created by YuKung on 2022/11/2.
//
//填写swap函数的参数表使程序输出结果是5,3
#include <iostream>
using namespace std;
class A
{
public:
    int x;
    int getX() { return x; }
};
void swap(A &a, A &b)
{
    int tmp = a.x;
    a.x = b.x;
    b.x = tmp;
}
int main()
{
    A a,b;
    a.x = 3;
    b.x = 5;
    swap(a,b);
    cout << a.getX() << "," << b.getX();
    return 0;
}