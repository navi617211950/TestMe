#include <iostream>
#include <string>

using namespace std;

#define DEFINE_A 30

int g_a = 35;
int g_b = 52;

const int c_g_a = 20;
const int c_g_b = 80;

void showMemoryArea(){
    int a = 10;
    int b = 20;
    string s ="Hello";
    cout << "局部变量b的地址: " << &a << endl;
    cout << "局部变量b的地址: " << &b << endl;
    cout << "局部字符串的地址: " << &s << endl;
    cout << "全局变量g_a的地址: " << &g_a << endl;
    cout << "全局变量g_b的地址: " << &g_b << endl;
    
    static int s_a = 44;
    static int s_b = 56;

    cout << "静态变量s_a的地址: " << &s_a << endl;
    cout << "静态变量s_b的地址: " << &s_b << endl;
    cout << "静态变量字符串的地址: " << &"World" << endl;

    cout << "全局常量c_g_a的地址: " << &c_g_a << endl;
    cout << "全局常量c_g_b的地址: " << &c_g_b << endl;

    const int c_l_a = 55;
    const int c_l_b = 66;
    cout << "const局部变量c_l_a的地址: " << &c_l_a << endl;
    cout << "const局部变量c_l_b的地址: " << &c_l_b << endl;
    // 错误的 define只在编译时替换，没有内存使用
    //cout << "define定义的变量地址: " << &DEFINE_A << endl;
}

int* func(){
    int *i = new int(89);
    return i;
}

int* func2(){
    return new int[10];
}


/// @brief 引用测试
void testReference(){
    int a = 30;
    cout<< "a: " << a << "("<<  &a <<")" << endl;
    int &b = a;
    b = 35;
        cout<< "b: " << b << "("<<  &b <<")" << endl;
}