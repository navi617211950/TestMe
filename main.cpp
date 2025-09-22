#include <iostream>
#include <cstdlib>
#include "mytest.h"
#include "mymethod.h"
#include "mypoint.h"
#include "mystruct.h"
#include "memorytest.h"
#include "reftest.h"
#include "classtest.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // system("cls");
    // cout << "Hello, World!" << endl;
    // 测试输入
    // testcin();
    // 水仙花数
    // printShuixianhua();
    // 敲7游戏
    // nockTheTable();
    // 打印*
    // printStar();
    // ======================================
    // 打印99乘法表
    // printMultiplicationTable();
    // ======================================
    // goto语句测试
    // testGoto();
    // ======================================
    // 数组测试 打印数组
    // arrtest::printArray();
    // ======================================
    // 数组测试 检查猪的体重
    // arrtest::checkPigWeight();
    // ======================================
    //  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //  arrtest::printArray(arr, 10);
    //  arrtest::reverseArray(arr, 10);
    //  arrtest::printArray(arr, 10);
    // ======================================
    // 冒泡排序测试
    //  int arr2[10] = {5,3,8,6,2,7,4,1,9,0};
    //  arrtest::bubbleSort(arr2, 10);
    //  arrtest::printArray(arr2, 10);
    // ======================================
    // 二维数组测试
    // arrtest::test2DArray();
    // 成绩打印测试
    // arrtest::printScore();
    // ======================================
    // 测试分文件
    //  int a = 10;
    //  int b = 20;
    //  cout << "a = " << a << ", b = " << b << endl;
    //  swap(&a, &b);
    //  cout << "a = " << a << ", b = " << b << endl;
    // ======================================
    // 指针测试
    // test_point();
    // test_arr_with_point();
    // ======================================
    // 测试结构体
    // test_struct();
    // test_structarr();
    // test_nest_sturct();
    // ======================================
    // 结构体作为函数参数进行值传递和指针传递
    //  student s = {"张三", 15, 99.5f};
    //  s.printInfo();
    //  print_struct_info(s);
    //  s.printInfo();
    //  print_struct_info2(&s);
    //  s.printInfo();
    // ======================================
    // 通过底层const修饰的结构体指针作为函数参数传值测试
    //  student s = {"张三", 15, 99.5f};
    //  printInfoByPoint(&s);
    // ======================================
    // 变量及常量等在内存中的存储区域
    // showMemoryArea();
    // ======================================
    //  使用new在函数中定义个堆区的变量
    //  int *i = func();
    //  cout << *i << endl;
    //  cout << i << endl;
    //  // 释放堆区的变量值，再次访问数据i已不可用
    //  delete i;
    //  cout << *i << endl;
    //  cout << i << endl;
    //  使用new在堆区声明一个数组
    //  int *arr = func2();
    //  for(int i = 0; i <  10; i++){
    //      arr[i] = 100+i;
    //  }
    //  for(int i = 0; i < 10; i++){
    //      cout << arr[i] << "\t";
    //  }
    //  cout << endl;
    // 显示释放堆区数据内存使用 delete[] param 格式
    //  delete[] arr;
    // testReference();
    // ============================================================
    // 引用传值测试: 指针传递
    //  int i = 48;
    //  int j = 90;
    //  cout << i << "," << j << endl;
    //  navis::swap(&i, &j);
    //  cout << "指针传递交换: " << i << "," << j << endl;
    //  navis::swap_by_reference(i, j);
    //  cout << "引用传递交换: " << i << "," << j << endl;
    //  int &ref = navis::ref_test01();
    //  cout << ref << endl;
    //  函数作为左值使用
    //  navis::ref_test01() = 1000;
    //  cout << ref << endl;
    //  const int& ref = 10;
    // ref = 32;
    //  cout << ref << endl;
    // ============================================
    // 测试默认参数
    //  cout << add(3,4) << endl;
    //  cout << add() << endl;
    //  cout << three_add(1) << endl;
    // ======================================================
    // 引用作为函数参数并进行重载时测试
    // int i = 3;
    // ref_func(i);
    // ref_func(10);
    // 调用失败,因为存在默认参数的重载函数，单个参数下编译器无法确定执行的函数
    // default_param_test(210);
    // 编译报错
    // default_param_test(20,30);
    // ======================================================
    // 类的测试
    // 圆类的实例化
    // Circle cl;
    // cl.m_r = 10;
    // cout << "圆的周长是: " << cl.calculateZC() << endl;

    // Student stu;
    // stu.setName("张三");
    // stu.showInfo();

    // Person p1;
    // p1.m_Name = "李四";
    // //非公共属性，在类外部访问不到
    // //p1.m_Car = "保时捷";
    // //p1.m_Password  = 1252;
    // cout << sizeof(p1) << endl;

    // Human h;
    // cout << h.getName() << ", " << h.getAage() << ", " << h.getLover() << endl;
    // h.setAge(-5);
    // h.setName("张三");
    // h.setLover("桥本环奈");
    // cout << h.getName() << ", " << h.getAage() << ", " << h.getLover() << endl;

    Cube c;
    c.init(2.5l, 54l, 1.5l);
    cout << c.getArea() << endl;
    Cube c2;
    cout << c.same(c2) << endl;
    c2.init(2.5l, 56l, 1.5l);
    cout << (c.same(c2) == false) << endl;
    return 0;
}
