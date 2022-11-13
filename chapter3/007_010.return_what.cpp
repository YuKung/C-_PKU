//
// Created by YuKung on 2022/11/9.
//
// 补充类的内容
/*输入
    多组数据，每组一行，是整数 m 和 n
输出
    先输出一行：
    123
    然后，对每组数据，输出两行，第一行是m,第二行是n
样例输入

    2 3
    4 5

样例输出

    123
    2
    3
    4
    5
*/
#include <iostream>
using namespace std;
class A {
public:
    int val;

    A(int a){val = a;};
    A(){val=123;};
    A &GetObj(){
       return *this;    // 返回引用this指针，指向对象本身
    };
                // 在此处补充你的代码

};
int main()
{
    int m,n;
    A a;
    cout << a.val << endl;
    while(cin >> m >> n) {
        a.GetObj() = m;
        cout << a.val << endl;
        a.GetObj() = A(n);  // 不需要单独编写赋值构造函数
        cout << a.val<< endl;
    }
    return 0;
}