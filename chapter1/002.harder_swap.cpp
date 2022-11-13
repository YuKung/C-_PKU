//
// Created by YuKung on 2022/11/2.
//
// 依然是填写swap的参数表  注意对比此题和引用的区别，这里需要定义指针传进去更麻烦！！！
#include <iostream>
using namespace std;

void swap(int *&a, int *&b)  // 通过引用地址来保证指针交换work！！！！，注意思考int *a，int *b为什么不能
{
    int * tmp = a;
    a = b;            // 它传递的是地址（地址也是值）。swap1函数内部指针a和指针b交换，但main函数中指针p和指针q，即a和b的地址并没有交换。
    b = tmp;
}
int main()
{
    int a = 3,b = 5;
    int * pa = & a;
    int * pb = & b;
    swap(pa,pb);
    cout << *pa << "," << * pb;
    return 0;
}