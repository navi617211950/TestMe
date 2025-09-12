#include "mymethod.h"

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int add(int a, int b){
    return a + b;
}

int three_add(int a, int b, int c){
    return a + b + c;
}


void test01(int a, int){
    std::cout << "占位参数函数测试" << a << std::endl;
}

void ref_func(int &a){
    std::cout <<"int &a调用: " << a << std::endl;
}

void ref_func(const int &a){
    std::cout << "const int &a 调用" << a << std::endl;
}

void default_param_test(int i){
    std::cout <<"default_param_test(i)调用: " << i << std::endl;
}

// void default_param_test(int i, int j = 10){
//     std::cout <<"default_param_test(i, j)调用: " << i << "," << j << std::endl;
// }