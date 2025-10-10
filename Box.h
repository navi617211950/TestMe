#include <iostream>
#include <string>

using namespace std;

namespace sp1
{
    class Box
    {
    public:
        double length;
        double breadth;
        double height;

        /// @brief Box类的无参构造函数
        Box();

        /// @brief Box类的有参构造函数
        /// @param len 长度
        /// @param bre 宽度
        /// @param hei 高度
        Box(double len, double bre, double hei);

        /// @brief Box类的析构函数
        ~Box();

        double get(void);
        void set(double len, double bre, double hei);
    };

    Box::Box(void)
    {
        cout << "调用无参构造函数" << endl;
    }

    // Box::Box(double len, double bre, double hei){
    //     cout << "调用有参构造函数" << endl;
    //     length = len;
    //     breadth = bre;
    //     height = hei;
    // }

    /// @brief 使用初始化列表来初始化字段的构造函数，和上方构造函数一样，两种方式只能使用其中一种
    /// @param len 长度
    /// @param bre 宽度
    /// @param hei 高度
    Box::Box(double len, double bre, double hei) : length(len), breadth(bre), height(hei)
    {
        cout << "构造函数中使用初始化列表来初始化字段" << endl;
    }

    Box::~Box()
    {
        cout << "析构函数被调用" << endl;
    }

    double Box::get(void)
    {
        return length * breadth * height;
    }

    void Box::set(double len, double bre, double hei)
    {
        length = len;
        breadth = bre;
        height = hei;
    }

    /// @brief Line 类
    class Line
    {
    private:
        int *ptr;

    public:
        /// @brief 获取长度
        /// @param  void
        /// @return 长度
        int getLength(void);

        /// @brief 简单构造函数
        /// @param len 长度
        Line(int len);

        /// @brief 拷贝构造函数
        /// @param obj 拷贝构造函数使用的对象引用
        Line(const Line &obj);

        /// @brief 析构函数
        ~Line();
    };

    Line::Line(int len)
    {
        cout << "调用构造函数" << endl;
        ptr = new int;
        *ptr = len;
    }

    Line::Line(const Line &obj)
    {
        cout << "调用拷贝构造函数并分配指针内存地址" << endl;
        ptr = new int;
        *ptr = *obj.ptr;
    }

    Line::~Line()
    {
        cout << "释放内存" << endl;
        delete ptr;
    }

    int Line::getLength(void)
    {
        return *ptr;
    }

    /// @brief 显示Line大小，这个是值传递，会调用拷贝构造函数
    /// @param obj 参数
    void display(Line obj)
    {
        cout << "Line 大小: " << obj.getLength() << endl;
    }
}

namespace sp2
{
    class Box
    {
        double width;

    public:
        // 友元函数的原型，但是友元函数不是成员函数
        friend void printWidth(Box box);
        void setWidth(int width);
    };

    void Box::setWidth(int wid)
    {
        width = wid;
    }

    // 类的友元函数定义在类外部，但是有权访问类的所有private和protected成员
    void printWidth(Box box)
    {
        cout << "Box的宽度: " << box.width << endl;
    }

    class MyClass
    {
        int value;

    public:
        void setValue(int value)
        {
            this->value = value;
        }
        void printValue(){
            cout << "value: " << this->value << endl;
        }
    };
}