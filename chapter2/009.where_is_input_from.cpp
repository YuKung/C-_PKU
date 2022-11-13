//
// Created by YuKung on 2022/11/9.
//
/*输入
    无
输出
    2
    1 */


#include <iostream>
using namespace std;
class A {
public:
    int i;
    A(int x) { i = x;};
    ~A(){cout << i << endl;};    // 在此处补充你的代码    //在析构函数中输出
};
int main()
{
    A a(1);
    A * pa = new A(2);
    delete pa;
    return 0;
}