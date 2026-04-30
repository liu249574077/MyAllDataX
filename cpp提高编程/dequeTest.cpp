//
//  DequeTest.cpp
//  MyFirstCPP
//
//  Created by yingqiang.liu on 2025/6/10.
//

#include <stdio.h>
using namespace std;
#include <string>
#include <iostream>
#include <deque>
#include <vector>
#include <ctime>


class Person
{
public:
    Person(){}
    Person(string name,int score)
    {
        this->name = name;
        this->score = score;
    }
    string name;
    int score;
};

void createVector(vector<Person> &d)
{
    string s = "ABCDE";
    for(int i = 0;i<5;i++)
    {
        string name = "选手：";
        name += s[i];
        
        Person p(name,18 + i);
        d.push_back(p);
    }
}
void printScore(const deque<int> &d)
{
    for(deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
}
void createScore(vector<Person> &d)
{

    
    
    for(vector<Person>::iterator it = d.begin();it != d.end();it++)
    {
        deque<int> s;
        for(int i = 0 ; i<10;i++)
        {
            int score = rand()%41 + 60;
            s.push_back(score);
        }
//        printScore(s);
        sort(s.begin(),s.end());
        printScore(s);
        
        s.pop_front();
        s.pop_back();
        int sum = 0;
        for(deque<int>::iterator it = s.begin();it != s.end();it++)
        {
            sum += *it;
        }
        int avg = sum / s.size();
        it->score = avg;
        
    }
    
}

void printPerson(const vector<Person> &d)
{
    for(vector<Person>::const_iterator it = d.begin();it!= d.end();it++)
    {
        cout << "name" << it->name << "age: " << it->score << endl;
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    
    vector<Person> d;
    
    createVector(d);
    
    createScore(d);
    
    printPerson(d);
    return 0;
}
