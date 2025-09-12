#pragma once
#include <iostream>
using namespace std;

void test_point()
{
    int a = 10;
    int b = 20;
    int *p = &a;
    cout << "a = " << a << ", *p = " << *p << endl;
    *p = 20;
    int *p2 = NULL;

    // 指针的大小和系统位数有关，和数据类型无关
    //  32位系统指针4字节，64位系统指针8字节
    cout << "sizeof(int *) = " << sizeof(int *) << endl;
    cout << "sizeof(double *) = " << sizeof(double *) << endl;
    cout << "sizeof(char *) = " << sizeof(char *) << endl;
    cout << "sizeof(float *) = " << sizeof(float *) << endl;

    // const 修饰指针
    const int *p3; // 指向常量的指针，不能通过指针修改所指向的值
    //*p3 = 10; //错误，不能通过指针修改所指向的值
    p3 = &b; // 正确，可以修改指针的值

    int *const p4 = &a;       // 常量指针，指针的值不能修改，但可以通过指针修改所指向的值
    // p4 = &b; //错误，常量指针不能修改指针的值
    *p4 = 30; // 正确，可以通过指针修改所指向的值
    const int *const p5 = &a; // 指向常量的常量指针，指针的值不能修改，也不能通过指针修改所指向的值
}

void test_arr_with_point()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // 数组名就是数组的首地址

    // 指针和数组的关系
    cout << "arr = " << arr << ", &arr[0] = " << &arr[0] << endl;
    cout << "p = " << p << ", &p[0] = " << &p[0] << endl;

    // 指针运算
    cout << "p = " << p << endl;
    p++; // 指针加1，指向下一个元素cls
    cout << "p = " << p << ", *p = " << *p << endl;
    p--; // 指针减1，指向上一个元素
    cout << "p = " << p << ", *p = " << *p << endl;

    // 指针和二维数组
    int arr2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int (*p2)[4] = arr2; // 指向二维数组的指针
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << *(*(p2 + i) + j) << " "; // 通过指针访问二维数组元素
        }
        cout << endl;
    }
    cout << "=====================" << endl;
    int *arr_p= &arr2[0][0];
    int len = sizeof(arr2)/sizeof(arr2[0][0]);
    int rows = sizeof(arr2) / sizeof(arr2[0]);
    int cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << *(arr_p + i * cols + j) << " "; // 通过指针访问二维数组元素
        }
        cout << endl;
    }
}