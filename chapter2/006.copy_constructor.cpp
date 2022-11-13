//
// Created by YuKung on 2022/11/9.
//
/*
目的 补全Sample类
输入
    无
输出
    9
    22
    5*/
#include <iostream>
using namespace std;
class Sample {
public:
    int v;
    Sample(int input){v=input;};
    Sample(){};
    ~Sample(){};                     // 在此处补充你的代码
    Sample(const Sample &a){
            v = a.v +2;
    };                  //赋值构造函数
};

void PrintAndDouble(Sample o)
{
    cout << o.v;
    cout << endl;
}

int main()
{
    Sample a(5);
    Sample b = a;           // 调用一次赋值构造函数
    PrintAndDouble(b);  // 再次调用
    Sample c = 20;
    PrintAndDouble(c);   // 调用一次
    Sample d;
    d = a;
    cout << d.v;
    return 0;
}