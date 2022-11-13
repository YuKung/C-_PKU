//
// Created by YuKung on 2022/11/9.
//
/*
    下面程序没有输入
    下面程序的输出是：

    3+4i
    5+6i

    请补足Complex类的成员函数。不能加成员变量。
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
    private:
        double r,i;
    public:
        Complex(){};                        //  构造函数
        Complex(char* complex_string){     //  类型转换构造函数  输入别写string
            r = complex_string[0] - '0';     // 记得减去0的ascii码值！！！！
            i = complex_string[2] - '0';
        };
        void Print() {
            cout << r << "+" << i << "i" << endl;
        }
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();   // 调用类型转换构造函数！！！！
    a = "5+6i"; a.Print();
    return 0;
}