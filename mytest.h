#pragma once

#include <iostream>
#include <string>

/// @brief 测试输入
void testcin() {
    int a;
    std::cin >> a;
    std::cout << "You entered: " << a << std::endl;
}


void printShuixianhua(){
    int i = 1;
    while(i < 1000){
        int bai = i/ 100;
        int shi = (i/10) % 10;
        int ge = i % 10;
        if(i == bai * bai * bai + shi * shi * shi + ge * ge * ge){
            std::cout << i << "\t";
        }
        i++;
    }
    std::cout << std::endl;
}

/// @brief 敲7游戏,输出1-100中所有含7或7的倍数的数字
void nockTheTable(){
    for(int i = 1; i <= 100; i++){
        if(i % 10 == 7 || i % 7 == 0){
            std::cout << i << "\t";
        }
    }
    std::cout << std::endl;
    for (int i = 1; i < 100; ++i) {
        if (i % 10 == 7 || i % 7 == 0) {
            std::cout << i << "\t";
        }
    }
    std::cout << std::endl;
}

void printStar(){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            std::cout << "*  ";
        }
        std::cout << std::endl;
    }
}

/// @brief 打印99乘法表
void printMultiplicationTable(){
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= i; j++){
            std::cout << j << " x " << i << " = " << i * j << "\t";
        }
        std::cout << std::endl;
    }
}

void testGoto(){
    std::cout << "Start" << std::endl;
    goto FLAG;
    std::cout << "Middle" << std::endl;
    FLAG:
    std::cout << "End" << std::endl;
}

/**
 * @namespace arrtest
 * @brief 数组测试
 * This namespace contains functions and variables related to array testing.
 * Functions:
 * - void printArray(int arr[], int size):
 *     Prints the contents of the string 'str', followed by the elements of the array 'arr'
 *     along with their indices and memory addresses.
 */
namespace arrtest {
    std::string str = "Hello, Namespace!";


    /// @brief 打印数组
    /// @param arr 数组指针
    /// @param size 数组大小
    void printArray(int arr[], int size) {
        std::cout << str << std::endl;
        std::cout << "Array elements:" << arr << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << "arr["<< i <<"] = " << arr[i] << "(" << (&arr[i]) << ")" << " " << std::endl;
        }
    }


    /// @brief 检查猪的体重，找出最重的猪
    void checkPigWeight(){
        int arr[5] = {300, 350, 200, 400, 250};
        int max = arr[0];
        for(int i = 1; i < 5; i++){
            std::cout << "Current pig weight: " << arr[i] << std::endl;
            if(arr[i] > max){
                max = arr[i];
            }
        }
        std::cout << "Maximum pig weight: " << max << std::endl;
    }

    /// @brief 反转数组
    /// @param arr 数组指针
    /// @param size 数组大小
    /// @return 数组指针
    int* reverseArray(int *arr, int size) {
        int start = 0;
        int end = size - 1;
        while (start < end) {
            // Swap elements at start and end
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            // Move towards middle
            start++;
            end--;
        }
        return arr;
    }

    void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            std::cout << ">>>Pass " << i + 1 << ":" << std::endl;
            for (int j = 0; j < size - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j + 1]
                    std::cout << "   Swapping arr[" << j << "] " << arr[j] << " and arr[" << j + 1 << "] " << arr[j + 1] << std::endl;
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }


    /// @brief 测试二维数组
    void test2DArray() {
        int arr[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        };
        std::cout << "2D Array elements:" << std::endl;
        
        // 获取二维数组的总元素个数，行数和列数
        int len = sizeof(arr) / sizeof(arr[0][0]);
        int rows = sizeof(arr) / sizeof(arr[0]);
        int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
        std::cout << "Total elements: " << len << std::endl;
        std::cout << "Rows: " << rows << ", Cols: " << cols << std::endl;
        
        std::cout << "Array base address: " << arr << std::endl;
        std::cout << "First row address: " << arr[0] << std::endl;
        std::cout << "First element address: " << &arr[0][0] << std::endl;
        for (int i = 0; i < rows; i++) {
            std::cout << "Row " << i << " address: " << arr[i] << std::endl;
            for (int j = 0; j < cols; j++) {
                std::cout << "\tarr[" << i << "][" << j << "] = " << arr[i][j] << "\t(address:" << &arr[i][j] << ")" << std::endl;
            }
        }
    }

    void printScore(){
        std::string names[3] = { "张三", "李四", "王五" };
        int scores[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}
        };
        int rows = sizeof(scores) / sizeof(scores[0]);
        int cols = sizeof(scores[0]) / sizeof(scores[0][0]);
        for (size_t i = 0; i < rows; i++)
        {
            int sum = 0;
            std::cout << names[i] << "的成绩: ";
            for (size_t j = 0; j < cols; j++)
            {
                sum += scores[i][j];
                std::cout << scores[i][j] << " ";
            }
            std::cout << "总分:" << sum << ", 平均分: " << sum / cols;
            std::cout << std::endl; 
        }
    }
}

