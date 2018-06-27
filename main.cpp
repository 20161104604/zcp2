//
//  main.swift
//  zcp1
//
//  Created by 20161104604 on 2018/6/27.
//  Copyright © 2018年 20161104604. All rights reserved.
//


#include <iostream>
#include <cstring>
#include <String>
using namespace std;

struct Student
{
    int no;
    string name;
    string sex;
    string program;
    string form;
    string Class;
    string tel;
    int f;
    double score[10];
    double min;
    double max;
    double ave;
    
};
struct Referee
{
    string name;
    string sex;
    string tel;
};
// 函数声明
void  output ( student *s,int n,referee *r);
void search(student *s,referee *r);
