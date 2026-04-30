这是一个关于C++学习视频的总结，
源地址：https://www.bilibili.com/video/BV1et411b73Z/?spm_id_from=333.337.search-card.all.click&vd_source=f54678773793e7a77de084a602148058
课程安排：
![img.png](img.png)

2,HelloWorld
  cout << "HelloWorld" << endl;
3,单行多行注释
    //    /**/
4，变量
   int a  = 10
   cout << "a = " << a << endl;
5 常量
    #define 宏常量 #define 常量名 常量值 //通常在文件上方定义
    const修饰的变量 const 数据类型 常量名 = 常量值
    
    #define Day = 7
    int main()
    {
        //Day = 8;  error 

        const int a = 30;
        a = 31 //error
    }
6 关键字
![img_1.png](img_1.png)
7 标识符命名规则
![img_2.png](img_2.png)

8数据类型
![img_3.png](img_3.png)
9 sizeof 关键字
![img_4.png](img_4.png)

10 实型（浮点型）
![img_5.png](img_5.png)

11 字符型
    char ch = ‘a’；
![img_6.png](img_6.png)

12 转义字符
![img_7.png](img_7.png)

13 字符串
![img_8.png](img_8.png)
![img_9.png](img_9.png)

14 bool数据类型
![img_10.png](img_10.png)

15 运算符
![img_11.png](img_11.png)

16-35 赋值运算符
![img_12.png](img_12.png)
![img_13.png](img_13.png)
![img_14.png](img_14.png)
![img_15.png](img_15.png)
![img_16.png](img_16.png)
![img_18.png](img_18.png)
![img_19.png](img_19.png)
![img_20.png](img_20.png)
![img_21.png](img_21.png)

36-40 循环 嵌套循环
![img_22.png](img_22.png)
41 goto
![img_23.png](img_23.png)
42-46 数组
![img_24.png](img_24.png)
![img_25.png](img_25.png)
![img_26.png](img_26.png)
![img_27.png](img_27.png)
![img_28.png](img_28.png)

47-49 二维数组
![img_29.png](img_29.png)
![img_30.png](img_30.png)

50 函数
![img_31.png](img_31.png)
![img_32.png](img_32.png)
54-55 函数的声明
![img_33.png](img_33.png)
![img_34.png](img_34.png)

56-57 指针
![img_35.png](img_35.png)
![img_36.png](img_36.png)
![img_37.png](img_37.png)
    32位系统，任何指针占4个字节，64位系统，任何指针都占8个字节

58-59 空指针，野指针
![img_38.png](img_38.png)
![img_39.png](img_39.png)

60 const修饰指针
![img_40.png](img_40.png)
![img_41.png](img_41.png)
![img_42.png](img_42.png)
![img_43.png](img_43.png)
![img_44.png](img_44.png)

61 指针和数组
![img_45.png](img_45.png)
62 指针和函数
![img_46.png](img_46.png)
63 指针配合数组和函数
![img_47.png](img_47.png)
![img_48.png](img_48.png)

64 结构体
![img_49.png](img_49.png)
![img_50.png](img_50.png)
65结构体数组
![img_51.png](img_51.png)
66结构体指针
![img_52.png](img_52.png)
67结构体嵌套结构体
![img_53.png](img_53.png)
![img_54.png](img_54.png)
68将结构体作为函数的参数
![img_55.png](img_55.png)
![img_56.png](img_56.png)
69结构体中const使用场景
![img_57.png](img_57.png)
![img_58.png](img_58.png)

game_contant.cpp

c++核心编程
内存四驱
![img_59.png](img_59.png)
1代码区 2全局区
![img_60.png](img_60.png)
![img_61.png](img_61.png)
![img_62.png](img_62.png)
3栈区
![img_63.png](img_63.png)
4 堆区
![img_64.png](img_64.png)
![img_65.png](img_65.png)
5 new操作符
![img_66.png](img_66.png)
![img_67.png](img_67.png)

引用
6 引用的基本语法
![img_68.png](img_68.png)
7，引用的注意事项
![img_69.png](img_69.png)
8,引用做函数参数
![img_70.png](img_70.png)
![img_71.png](img_71.png)
9 引用做函数的返回值
![img_72.png](img_72.png)
![img_73.png](img_73.png)
10 引用的本质
![img_74.png](img_74.png)
11 常量引用
![img_75.png](img_75.png)
![img_76.png](img_76.png)
函数高级
12 函数的默认参数
![img_77.png](img_77.png)
13 函数的占位参数
![img_78.png](img_78.png)
14 函数的重载
![img_79.png](img_79.png)
![img_80.png](img_80.png)
15函数重载注意事项
![img_81.png](img_81.png)
![img_82.png](img_82.png)

16-17  封装

18 访问权限public protected private
![img_83.png](img_83.png)
19 stuct和class的区别
![img_84.png](img_84.png)
![img_85.png](img_85.png)
20 成员属性设为私有
![img_92.png](img_92.png)
21-22 封装案例
类和对象-对象特性
23 构造函数和析构函数
![img_86.png](img_86.png)
![img_87.png](img_87.png)

24构造函数的分类以及调用
![img_88.png](img_88.png)
![img_89.png](img_89.png)
![img_90.png](img_90.png)
25 拷贝构造函数调用时机
![img_91.png](img_91.png)
26 构造函数的调用规则
![img_93.png](img_93.png)
27 深拷贝与浅拷贝
![img_94.png](img_94.png)
![img_95.png](img_95.png)
![img_96.png](img_96.png)
![img_97.png](img_97.png)
28 初始化列表
![img_98.png](img_98.png)
![img_99.png](img_99.png)
29 类对象作为类成员
![img_100.png](img_100.png)
![img_101.png](img_101.png)
![img_102.png](img_102.png)
![img_103.png](img_103.png)
30-31 静态成员
![img_104.png](img_104.png)
![img_105.png](img_105.png)
![img_106.png](img_106.png)
![img_108.png](img_108.png)
32 c++对象模型和this指针
成员变量和成员函数分开存储
![img_107.png](img_107.png)
![img_109.png](img_109.png)
![img_110.png](img_110.png)
 33 this指针的用途
![img_111.png](img_111.png)
![img_112.png](img_112.png)
34 空指针访问成员函数
![img_113.png](img_113.png)
35 const修饰成员函数
![img_114.png](img_114.png)
![img_115.png](img_115.png)
36 全局函数做友元
![img_117.png](img_117.png)
37 类做友元
![img_118.png](img_118.png)
38 成员函数做友元
![img_119.png](img_119.png)

39 运算符重载
![img_120.png](img_120.png)
![img_121.png](img_121.png)
![img_122.png](img_122.png)
![img_123.png](img_123.png)

40 左移运算符重载
![img_124.png](img_124.png)
![img_125.png](img_125.png)
![img_126.png](img_126.png)

41 ++运算符重载
![img_127.png](img_127.png)
42 =运算符重载（深浅拷贝问题）
![img_128.png](img_128.png)
43 ==和！= 运算符重载
![img_129.png](img_129.png)
44 函数调用（）运算符重载（仿函数）
![img_130.png](img_130.png)
![img_131.png](img_131.png)

45 继承
基本语法
![img_132.png](img_132.png)
![img_133.png](img_133.png)
46继承方式
![img_134.png](img_134.png)
![img_135.png](img_135.png)
47继承中的对象模型
![img_136.png](img_136.png)
![img_137.png](img_137.png)
48构造和析构的顺序
![img_138.png](img_138.png)
![img_139.png](img_139.png)
49继承-同名成员的处理
![img_140.png](img_140.png)
![img_141.png](img_141.png)
50 同名静态成员的处理
![img_142.png](img_142.png)
![img_143.png](img_143.png)
51继承语法（多继承）
![img_144.png](img_144.png)
![img_145.png](img_145.png)
![img_146.png](img_146.png)
52菱形继承的问题以及解决（底层是指针偏移）
![img_147.png](img_147.png)
![img_148.png](img_148.png)
![img_149.png](img_149.png)
53 多态
![img_150.png](img_150.png)
![img_151.png](img_151.png)
![img_152.png](img_152.png)
![img_153.png](img_153.png)
54 多态多原理剖析 55计算器案例
![img_154.png](img_154.png)
56 纯虚函数和抽象类 57制作饮品
![img_155.png](img_155.png)
![img_156.png](img_156.png)
58虚析构和纯虚析构
![img_158.png](img_158.png)
![img_159.png](img_159.png)
61-64 文件操作
写文件
![img_160.png](img_160.png)
![img_161.png](img_161.png)
![img_162.png](img_162.png)
读文件
![img_163.png](img_163.png)
写文件
![img_164.png](img_164.png)
![img_165.png](img_165.png)
读文件
![img_166.png](img_166.png)
![img_167.png](img_167.png)

