#include <iostream>

namespace navis {

    /// @brief 指针传值交换
    /// @param a 指针变量1
    /// @param b 指针变量2
    void swap(int * const a, int * const b){
        int temp = 0;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    /// @brief 引用传值交换
    /// @param a 引用参数1
    /// @param b 引用参数2
    void swap_by_reference(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    int& ref_test01() {
        static int i = 39;
        return i;
    }

    void showRefValue (const int& val){
        //const修饰防止引用值被修改
        //val= 232;
        std::cout << val << std::endl;
    }
}