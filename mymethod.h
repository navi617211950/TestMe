#pragma once
#include <iostream>

void swap(int* a, int* b);


//函数参数默认值在声明中定义好之后，函数实现则不需要夜设定默认值
// 防止出现二义性，编译器不知道哪个作为最终的默认值
int add(int a=20, int b = 50);


/// @brief 默认值的设定必须是连续的，不能前面的参数设定了默认值，后面的没有默认值
/// @param a 参数a
/// @param b 参数b 存在默认值，
/// @param c 参数c，因为b存在默认值，所以c也必须有默认值
/// @return 三个值相加的结果
int three_add(int a, int b=45, int c = 66);


/// @brief 占位参数在函数中的使用，
/// @param a 参数1
/// @param  占位参数，可以有默认值，但是没有参数名
void test01(int a, int = 10);


/// 函数重载的注意事项
//  引用作为重载的条件

/// @brief 引用作为参数传递到函数中，变量走当前函数
/// @param a 变量
void ref_func(int &a);

/// @brief const引用作为参数传递到函数中，常量值走当前函数
/// @param a 
void ref_func(const int &a);


//  函数重载遇到默认参数
// 下方两个在声明和定义时都没有问题，但是在调用时，第一个函数无法被调用
// 原因是：在传递单个参数时，编译器无法确定执行下方哪个函数
void default_param_test(int i);
// Update: 编译器编译检查时报错，带默认参数的重载函数无效
// void default_param_test(int i, int j = 10);