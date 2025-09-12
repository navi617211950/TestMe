#pragma once
#include <iostream>

using namespace std;


struct student {
    string name;
    int age;
    float score;
    int printCount;
    void printInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Score: " 
        << score << ", Print Count: " << printCount << endl;
    }
} s3;

struct teacher {
    long id;
    string name;
    int age;
    struct student stu;

    void printInfo() const {
        cout << "Id: " << id << ", Name: " << name << ", Age: " << age 
        << ", Stu: " << stu.name << ", " << stu.age << ", " << stu.score << endl;
    }
};


void test_struct(){
    student s1;
    s1.name = "zhangsan";
    s1.age = 23;
    s1.score = 56.5f;
    s1.printInfo();

    student s2 = {"lisi", 10, 89.6f};
    s2.printInfo();
}


void test_structarr(){
    student arr[3] = {
        {"Zhangsan", 52, 56.5f},
        {"Lisi", 35, 2.5f},
        {"Wangwu", 18, 12.6f}
    };
    cout << "arr的大小" << sizeof(arr) << ", Student的大小" << sizeof(student) << endl;
    int size = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i< size; i++){
        cout << arr[i].name << "\t";
        arr[i].printInfo();
    }

    student *p = &s3;
    p->name = "Arraw";
    p->age = 52;
    p->score = 10.0f;
    p->printInfo();
}


void test_nest_sturct(){
    student stu = {"张三", 12, 59.f};
    teacher th;
    th.id = 1001270192L;
    th.name = "李麻子";
    th.age = 59;
    th.stu = stu;
    th.printInfo();
}

void print_struct_info(student s) {
    s.age = 85;
}

void print_struct_info2(student *s){
    s->age = 200;
}


/// @brief 通过结构体指针作为参数传递给函数，节省内不能空间，因为值传递相当于复制
/// @param s 结构体指针
void printInfoByPoint(const student *s){
    //结构体指针被const修饰，不能修改结构体值
    //s-> name = "Kaka";
    // 底层const修饰符只能限制指针指向的值不能被修改，但是指针本身指向可以被修改
    student s2 = {"wangwu", 54, 66.0f};
    s = &s2;
    cout << "Name: " << s->name << ", Age: " << s->age << ", Score: " 
    << s->score << ", Print Count: " << s-> printCount << endl;
}