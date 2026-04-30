//
//  MyArray.cpp
//  MyFirstCPP
//
//  Created by yingqiang.liu on 2025/6/9.
//
#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>

template <class T>
class MyArray
{
public:
    MyArray(int capcity)
    {
//        cout << "构造函数" << endl;
        this->m_Capcity = capcity;
        this->m_Size = 0;
        m_Address = new T[this->m_Capcity];
    }
    
    
    MyArray(const MyArray& arr)
    {
//        cout << "拷贝构造函数" << endl;
        this->m_Capcity = 0;
        this->m_Size = 0;
        if (m_Address != NULL) {
            delete[] m_Address;
            m_Address = NULL;
        }
        
        this->m_Capcity = arr.m_Capcity;
        this->m_Size = arr.m_Size;
        m_Address = new T[arr.m_Capcity];
        for(int i = 0;i<arr.m_Size;i++)
        {
            m_Address[i] = arr.m_Address[i];
        }
    }
    
    ~MyArray()
    {
//        cout << "析构函数" << endl;
        this->m_Capcity = 0;
        this->m_Size = 0;
        if (m_Address != NULL) {
            delete[] m_Address;
            m_Address = NULL;
        }
    }
    
    MyArray& operator=(MyArray& arr)
    {
//        cout << "赋值" << endl;
        this->m_Capcity = 0;
        this->m_Size = 0;
        if (m_Address != NULL) {
            delete[] m_Address;
            m_Address = NULL;
        }
        
        this->m_Capcity = arr.m_Capcity;
        this->m_Size = arr.m_Size;
        m_Address = new T[arr.m_Capcity];
        for(int i = 0;i<arr.m_Size;i++)
        {
            m_Address[i] = arr.m_Address[i];
        }
        return *this;
    }
    
    T& operator[](int index)
    {
        if (index >= this->m_Size) {
            cout << "error" <<endl;
        }
        return this->m_Address[index];
    }
    
    int getCapcity()
    {
        return this->m_Capcity;
    }
    
    int getSize()
    {
        return this->m_Size;
    }
    
    void pushBack(const T& t)
    {
        if (m_Size == m_Capcity) {
            cout << "满了" << endl;
            return;
        }
        
        this->m_Address[m_Size] = t;
        this->m_Size++;
    
    }
    
    void pop()
    {
        if (m_Size == 0) {
            return;
        }
        m_Size--;
        return ;
    }
    
private:
    int m_Capcity;
    int m_Size;
    T *  m_Address;
};

