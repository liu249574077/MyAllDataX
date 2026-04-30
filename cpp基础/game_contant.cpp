//
//  helloworld.cpp
//  MyFirstCPP
//
//  Created by yingqiang.liu on 2025/5/21.
//

//#include "helloworld.hpp"
//#include <iostream>
//#include <string>
//#include <ctime>
#include "mysum.h"
#include <string>
#define MAX 1000

struct Person
{
    string name;
    int sex;
    int age;
    string addr;
};

struct Contant
{
    struct Person persons[MAX];
    int lenth;
};

void showMeue()
{
    cout << "***************" << endl;
    cout << "*****  1,添加联系人   ****" << endl;
    cout << "*****  2，显示联系人   *****" << endl;
    cout << "*****  3，删除联系人   *****" << endl;
    cout << "*****  4，查找联系人   ****" << endl;
    cout << "*****  5，修改联系人   ***" << endl;
    cout << "*****  6，清空联系人   ****" << endl;
    cout << "*****  0，退出系统    ****" << endl;
    
}

void addPerson(struct Contant * contant)
{
    Person p;
    string name;
    cout << "请输入姓名" << endl;
    cin >> name;
    contant->persons[contant->lenth].name = name;
    
    
    int sex;
    while (true) {
        cout << "请输入性别 1 男 2 女" << endl;
        cin >> sex;
        if (sex == 1 || sex ==2) {
            break;
        } else {
            cout << "输入有误" << endl;
        }
    }
    contant->persons[contant->lenth].sex = sex;
    
    int age;
    cout << "请输入年龄" << endl;
    cin >> age;
    contant->persons[contant->lenth].age = age;
    
    cout << "请输入地址" << endl;
    string addr;
    cin >> addr;
    contant->persons[contant->lenth].addr = addr;
    
    
    contant->lenth += 1;
    
    
}

string realSex(int sex)
{
    string realSex;
    switch (sex) {
        case 1:
            realSex = "男";
            break;
        case 2:
            realSex = "女";
            break;
        default:
            realSex = "未知";
            break;
    }
    return realSex;
}

void showContant(const struct Contant contant)
{
    cout << "通讯录中共有" << contant.lenth << "人" << endl;
    for(int i =0;i<contant.lenth ; i++){
        cout << "姓名:" << contant.persons[i].name << "  " << "性别：" << realSex(contant.persons[i].sex) << "年龄:" << contant.persons[i].age << "地址：" << contant.persons[i].addr << endl;
    }
    
}

bool isExit(const struct Contant * contant,string name)
{
    for(int i =0;i<contant->lenth ; i++){
        if(contant->persons[i].name == name){
            return true;
        }
    }
    return false;
}

void deleteContant(struct Contant * contant,string name)
{
    bool exit = false;
    for(int i =0;i<contant->lenth ; i++){
        if(contant->persons[i].name == name){
            exit = true;
        }
        if (exit) {
            contant->persons[i] = contant->persons[i+1];
        }
    }
    
    contant->lenth -= 1;
    cout << "通讯录中共有" << contant->lenth << "人" << endl;
}




int main()
{
    struct Contant contant;
    contant.lenth = 0;
    
    
//    system("cls");
    
    while (true) {
        showMeue();
        
        int select;
        cin >> select;
        cout << select << endl;
        switch (select) {
            case 0:
                return 0;
                break;
            case 1:
                addPerson(&contant);
                break;
            case 2:
                showContant(contant);
                break;
            case 3:
                string name;
                cin >> name;
                if (isExit(&contant,name)) {
                    deleteContant(&contant,name);
                }else{
                    cout << "查无此人" << endl;
                }
                break;
           
//            default :
//                cout << "功能未开发，请重新输入" << endl;
//                break;
        }
    }
    
    return 0;
}




