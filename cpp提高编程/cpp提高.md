1,模版
![img.png](img.png)
2，函数模版基本语法
![img_1.png](img_1.png)
![img_2.png](img_2.png)
3模版注意事项
![img_3.png](img_3.png)
![img_4.png](img_4.png)
4 普通函数和模版函数的区别
![img_5.png](img_5.png)
![img_6.png](img_6.png)
5 普通函数和模版函数的调用规则
![img_7.png](img_7.png)
![img_8.png](img_8.png)
6 模版的局限性
![img_9.png](img_9.png)
![img_11.png](img_11.png)
![img_10.png](img_10.png)

8 类模版
![img_12.png](img_12.png)

9 类模版和函数模版的区别
![img_13.png](img_13.png)
![img_14.png](img_14.png)
![img_15.png](img_15.png)

10 类模版中成员函数的创建时机
![img_16.png](img_16.png)
![img_17.png](img_17.png)

11 类模版做函数参数
![img_18.png](img_18.png)
![img_19.png](img_19.png)
![img_20.png](img_20.png)
![img_21.png](img_21.png)

![img_22.png](img_22.png)

12 类模版与继承
![img_23.png](img_23.png)
![img_24.png](img_24.png)
![img_25.png](img_25.png)
13 模板-类模板成员函数类外实现
![img_26.png](img_26.png)
14类模版的分文件编写（主流第二种）
![img_27.png](img_27.png)
15 模板-类模板与友元
![img_28.png](img_28.png)
![img_29.png](img_29.png)
![img_30.png](img_30.png)
16-18 数组类封装
![img_31.png](img_31.png)

MyArray.hpp;
[MyArray.hpp](MyArray.hpp)

19 STL的基本概念
STL的诞生 STL的基本概念 STL的六大组件 STL中的容器，算法，迭代器
![img_32.png](img_32.png)
![img_33.png](img_33.png)
![img_34.png](img_34.png)
![img_35.png](img_35.png)

20 vector存放内置数据类型
![img_36.png](img_36.png)
21STL初识-vector存放自定义数据类型
![img_37.png](img_37.png)
22 STL初识-容器嵌套容器
![img_38.png](img_38.png)
23 string容器构造
![img_39.png](img_39.png)
24 string容器赋值操作
![img_40.png](img_40.png)
25 string容器-字符串拼接
![img_41.png](img_41.png)
26 string容器-字符串查找和替换
![img_42.png](img_42.png)
![img_43.png](img_43.png)
27 string容器-字符串比较
![img_44.png](img_44.png)
28 string容器-字符存取
![img_45.png](img_45.png)
29 string容器-字符串插入和删除
![img_46.png](img_46.png)
30 string容器-子串获取
![img_47.png](img_47.png)

31 vector容器-构造函数
![img_48.png](img_48.png)
![img_49.png](img_49.png)
32 vector容器-赋值操作
![img_50.png](img_50.png)
![img_51.png](img_51.png)

33 vector容器-容量和大小
![img_52.png](img_52.png)
![img_53.png](img_53.png)
34 vector容器-插入和删除
![img_54.png](img_54.png)
35 vector容器-数据存取
![img_55.png](img_55.png)

36 vector容器-互换容器
![img_56.png](img_56.png)
![img_57.png](img_57.png)
![img_58.png](img_58.png)
37 vector容器-预留空间
![img_59.png](img_59.png)
![img_60.png](img_60.png)
38 deque容器-构造函数
![img_61.png](img_61.png)
![img_62.png](img_62.png)
![img_63.png](img_63.png)
39 deque赋值
![img_64.png](img_64.png)
40 deque容器-大小操作
![img_65.png](img_65.png)
41 deque容器-插入和删除
![img_66.png](img_66.png)
![img_67.png](img_67.png)
![img_68.png](img_68.png)
![img_69.png](img_69.png)
42 deque容器-数据存取
43 deque容器-排序操作
sort()
44 STL案例1-评委打分
[dequeTest.cpp](dequeTest.cpp)
45 stack容器-基本概念
![img_70.png](img_70.png)
46 stack容器-常用接口
![img_71.png](img_71.png)
47 queue容器-基本概念
![img_72.png](img_72.png)
![img_73.png](img_73.png)

48 queue容器-常用接口
![img_74.png](img_74.png)
49 list容器-基本概念
![img_75.png](img_75.png)
![img_76.png](img_76.png)
![img_77.png](img_77.png)
50 list容器-构造函数
![img_78.png](img_78.png)
![img_80.png](img_80.png)
![img_79.png](img_79.png)
51 list容器-赋值和交换
![img_81.png](img_81.png)
52 list容器-大小操作
![img_82.png](img_82.png)
53 list容器-插入和删除
![img_83.png](img_83.png)
54 list容器-数据存取
![img_84.png](img_84.png)
![img_85.png](img_85.png)
![img_86.png](img_86.png)
55 list容器-反转和排序
//所有不支持随机访问迭代器的容器，不可以用标准算法
//不支持随机访问迭代器的容器，内部会提供一些对应的算法。
//sort（L1.begin（），L2.end()）;
L1.sort();
![img_87.png](img_87.png)
![img_88.png](img_88.png)

56 list容器-排序案例
![img_89.png](img_89.png)

57 set容器-构造和赋值
![img_90.png](img_90.png)
![img_91.png](img_91.png)
![img_92.png](img_92.png)


58 set容器-大小和交换
![img_93.png](img_93.png)

59 set容器-插入和删除
![img_94.png](img_94.png)
60 set容器-查找和统计
![img_95.png](img_95.png)
![img_96.png](img_96.png)
61 set容器-set和multiset区别
![img_97.png](img_97.png)
![img_98.png](img_98.png)
62 pari使用-pair对组的创建
![img_99.png](img_99.png)
63 set容器-内置类型指定排序规则
![img_100.png](img_100.png)

64 set容器-自定义数据类型指定排序规则
![img_101.png](img_101.png)
![img_102.png](img_102.png)

65 map容器-构造和赋值
![img_103.png](img_103.png)
![img_104.png](img_104.png)

66 map容器-大小和交换
![img_105.png](img_105.png)
![img_106.png](img_106.png)

67 map容器-插入和删除
![img_107.png](img_107.png)
68 map容器-查找和统计
![img_108.png](img_108.png)
69 map容器-排序
![img_109.png](img_109.png)
![img_110.png](img_110.png)

71 函数对象-函数对象基本使用
![img_111.png](img_111.png)

72 谓词-一元谓词
![img_112.png](img_112.png)
内建函数对象
74 内建函数对象-算术仿函数
![img_113.png](img_113.png)
![img_114.png](img_114.png)
75 内建函数对象-关系仿函数
![img_115.png](img_115.png)
![img_116.png](img_116.png)

76 内建函数对象-逻辑仿函数
![img_117.png](img_117.png)
![img_118.png](img_118.png)
77 常用遍历算法-for_each
![img_119.png](img_119.png)
![img_120.png](img_120.png)
![img_121.png](img_121.png)
78 常用遍历算法-transform
![img_122.png](img_122.png)

79 常用遍历算法-find
![img_123.png](img_123.png)
![img_124.png](img_124.png)
80 常用查找算法-find_if
![img_125.png](img_125.png)

81 常用查找算法-adjacent_find
![img_126.png](img_126.png)

82 常用查找算法-binary_search
![img_127.png](img_127.png)
![img_128.png](img_128.png)

83 常用查找算法-count
![img_129.png](img_129.png)
![img_130.png](img_130.png)
![img_131.png](img_131.png)
![img_132.png](img_132.png)
84 常用查找算法-count_if
![img_133.png](img_133.png)

85 常用排序算法-sort
![img_134.png](img_134.png)

86 常用排序算法-random_shuffle
![img_135.png](img_135.png)
![img_136.png](img_136.png)
87 常用排序算法-merge
![img_137.png](img_137.png)
![img_138.png](img_138.png)
![img_139.png](img_139.png)
88 常用排序算法-reverse
![img_140.png](img_140.png)
![img_141.png](img_141.png)
89 常用拷贝和替换算法-copy
![img_142.png](img_142.png)

90 常用拷贝和替换算法-replace
![img_143.png](img_143.png)
91 常用拷贝和替换算法-replace_if
![img_144.png](img_144.png)
92 常用拷贝和替换算法-swap
![img_145.png](img_145.png)

93 常用算术生成算法-accumulate
![img_146.png](img_146.png)
![img_147.png](img_147.png)

94 常用算术生成算法-fill
![img_148.png](img_148.png)
![img_149.png](img_149.png)
95 常用集合算法-set_intersection
![img_150.png](img_150.png)
![img_151.png](img_151.png)
![img_152.png](img_152.png)

96 常用集合算法-set_union
![img_153.png](img_153.png)

97 常用集合算法-set_difference
![img_154.png](img_154.png)