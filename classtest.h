
/**
 * @file classtest.h
 * @brief Header file for the navis namespace.
 *
 * 类和对象的学习
 * C++面向对象的三大特性: 继承、封装和多态
 */
#include <iostream>
#include <string>

using namespace std;

const double PI = 3.14;

/// @brief 圆类
class Circle
{
    // private:
    //     double PI = 3.1415926;

public:
    /// @brief 圆的半径信息
    int m_r;

    /// @brief 计算周长
    /// @return 返回周长信息
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};