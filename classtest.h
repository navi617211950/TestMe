
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

class Student
{
private:
    int id;
    string s_name;

public:
    void setName(string name)
    {
        s_name = name;
    }

    void showInfo()
    {
        cout << "学生信息>> 编号:" << id << "(" << &id << ")"
             << ", 姓名: " << s_name << "(" << &s_name << ")" << endl;
    }
};

class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 213456;
    }
};

/*
 * Class类和struct结构体很类似，但是参数的默认访问权限
 * 不同，类的默认是private的，结构体默认是公用的
 */
class C1
{
    string pa;
};

struct C2
{
    string pa;
};

class Human
{
    string m_name;
    int m_age = 18;
    string m_lover;

public:
    void setName(string name)
    {
        m_name = name;
    }

    string getName()
    {
        return m_name;
    }

    void setAge(int age)
    {
        if (age < 0 || age > 150)
        {
            cerr << "警告: 年龄区间有误, 配置失败" << endl;
            return;
        }
        m_age = age;
    }

    int getAage()
    {
        return m_age;
    }

    void setLover(string lover)
    {
        m_lover = lover;
    }

    string getLover()
    {
        return m_lover;
    }
};

/**
 * @class Cube
 * @brief Represents a 3-dimensional cube with length, width, and height.
 *
 * This class stores the dimensions of a cube: length (m_l), width (m_w), and height (m_h).
 * All dimensions are initialized to 0.
 */
class Cube
{
    float m_l = 0L;
    float m_w = 0L;
    float m_h = 0L;
    bool inited = false;

public:
    void init(float l, float w, float h)
    {
        m_l = l;
        m_w = w;
        m_h = h;
        inited = true;
    }

    float getLength(){
        return m_l;
    }
    float getWidth(){
        return m_w;
    }
    float getHeight(){
        return m_h;
    }

    float getArea()
    {
        if (!inited)
        {
            cout << "Please initialize the param first" << endl;
            return 0L;
        }
        return (m_l * m_w * m_l * m_h + m_w * m_h) * 2;
    }

    float getVolume()
    {
        if (!inited)
        {
            cout << "Please initialize the param first" << endl;
            return 0L;
        }
        return m_l * m_w * m_h;
    }

    bool same(Cube &c)
    {
        return (
            c.getLength() == m_l 
            && c.getWidth() == m_w 
            && c.getHeight() == m_h
        ); 
    }

};