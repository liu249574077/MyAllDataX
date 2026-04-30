bilibili学习链接

https://www.bilibili.com/video/BV1nW411L7xm?spm_id_from=333.788.videopod.episodes&vd_source=f54678773793e7a77de084a602148058&p=20

11.Linux的终端
![img.png](img.png)
![img_1.png](img_1.png)

12.使用VMware的备份功能
![img_2.png](img_2.png)

13.Linux的文件目录
![img_3.png](img_3.png)
![img_4.png](img_4.png)
01.指令和选项
![img_5.png](img_5.png)
02.基础指令（1）
ls 
ls -l 
ls -a 
ls -la / ls -al

![img_6.png](img_6.png)
![img_7.png](img_7.png)
![img_8.png](img_8.png)

ls -h 可读性较高的方式
![img_9.png](img_9.png)

ls -lah 

pwd指令
![img_10.png](img_10.png)
cd命令
![img_11.png](img_11.png)
midir
![img_12.png](img_12.png)
![img_13.png](img_13.png)
touch
![img_14.png](img_14.png)
cp指令
![img_15.png](img_15.png)
![img_16.png](img_16.png)
mv指令 移动和重明明
![img_17.png](img_17.png)
![img_18.png](img_18.png)
rm命令
#rm 选项 需要删除的文档路径
![img_19.png](img_19.png)

rm -rf linux* 

-r 递归 -f 强制 *通配符 删除linux开头的文件
vim 
vim是一款文本编辑器
![img_20.png](img_20.png)

输出重定向
![img_21.png](img_21.png)
> 覆盖输出
>> 追加输出

cat指令
![img_22.png](img_22.png)

高级指令

1，df -m 查看磁盘剩余空间
![img_24.png](img_24.png)

2，free -m 查看内存使用情况
![img_23.png](img_23.png)
swap，用于临时内存，当系统真实内存不够用的时候可以临时使用磁盘空间充当内存。

3，head -n 文件路径
查看一个文件前n行的内容，如果不指定n，则默认显示前10行

4，tail -n 文件路径
查看一个文件末尾n行的内容，如果不指定n，则默认显示后10行
tail -f 文件路径（不能是用户自己手动添加的）
查看一个文件的动态变化

5，less指令
作用：查看文件，以较少内容输出，按下辅助功能按键（数字——回车，回车，空格）查看更多
less 文件名

6 wc指令
作用：统计文件内容信息（包括行数，单词数，字节数）
wc -lwc 文件名
-l 行数
-w 单词数
-c 字节数
![img_25.png](img_25.png)
7 date指令
date 输出格式 
![img_26.png](img_26.png)
获取之前或者之后的时间
date -d "+1 day" "+%Y-%m-%d %H:%M:%S"
8 cal指令
cal等价于cal -1  输出当前月份
cal -3 输出前一月 当前月 后一月
cal -y 【年份】 输出该年分
cal -sm 输出月的起始周日或者周一

9 clear或者ctrl L 清屏

10 管道（重要）
作用：管道一半可以用于过滤，特殊，扩展处理
语法。管道不能单独使用，需要配合前面所讲的一些指令来一起使用，
其作用主要是辅助作用。
ls /|grep y
针对上面这个命令的说明：
以管道作为分界线 前面的命令有个输出，后面需要先输入，然后再输出。
通俗的讲就是管道前面的输出就是后面指令的输入
grep指令：主要用于过滤

特殊用法 cat路径｜less 等价于less 路径

拓展：统计某个目录下的文件数 
ls 路径 ｜ wc -l

高级指令
hostname
hostname -f
![img_27.png](img_27.png)
id指令
用来显示一个用户的基本信息
id
id 用户名

验证用户信息 cat /etc/passwd
验证用户组信息 cat /etc/group

3 whoami 指令
作用：显示当前登陆的用户名,一般用于shell脚本
4.ps -ef指令（重点）
指令：主要查看服务器的进程信息
选项含义：
    -e：等价于“-A”，表示列出全部的进程
    -f：显示全部的列（显示全字段）
![img_28.png](img_28.png)
列的含义：
UID：该进程执行的用户id
PID：进程id
PPID：该进程的父级进程id。如果一个程序的父级进程找不到，该程序的进程称为僵尸进程
C：Cpu的占用率，其形式是百分数
STIME：该进程的启动时间
TTY：终端设备，发起该进程的设备识别号，如果显示“？” 则表示该进程并不是当前终端设备发起的
CMD：该进程的名称或者对应的路径

ps -ef grep 进程名

5.top指令
作用：查看服务器的进程占的资源
语法：
进入命令：#top  （动态显示）
推出命令：q

6 du-sh指令（例：du -sh /etc/）
查看目录的真实大小
指令构成及功能：
du：是 “disk usage” 的缩写，用于估计文件和目录的磁盘使用情况。
-s：即 “summarize”，表示仅显示每个参数的总大小，不显示子目录和文件的详细大小信息。
-h：“human - readable” 的缩写，用于以人类可读的格式显示大小，如 K（KB）、M（MB）、G（GB）等。

7 find指令
作用：用于查找文件（参数有55个之多）
语法：find 路径范围 选项 选项的值 （find /etc -name httpd.conf）

8 service指令（重点）
作用：用于控制一些软件的服务启动/停止/重启
语法： service 服务名 start/stop/restart
例如：需要启动本机安装的Apache（service httpd start）

9 kill指令
作用：杀死进程
语法： kill 进程PID/killall 进程名称

10 ifconfig
获取网卡信息
inet addr 就是网卡的ip地址

11 reboot指令
作用：重启计算机
reboot 
reboot -w 模拟重启，只写重启日志

12 shutdown指令
作用：关机 （慎用）
![img_29.png](img_29.png)

14
uname 系统名
uname -a 系统的所有信息（类型/全部主机名/内核版本/发行时间/开源计划）

15 netstat -tnlp
作用：查看网络连接状态
基础参数
-a（all）：显示所有连接（包括监听和非监听状态）。
-n（numeric）：以数字形式显示 IP 和端口（不解析域名或服务名）。
-t（tcp）：仅显示 TCP 连接。
-u（udp）：仅显示 UDP 连接。
-l（listening）：仅显示处于监听状态的连接（用于排查服务是否启动）。
-p（program）：显示占用连接的进程名和 PID（需 root 权限）。
-i（interfaces）：显示网络接口状态。
-r（routes）：显示路由表。

16 man指令

作用：manual 手册（包含了Linux中全部命令的手册，英文）
man 命令 （按下q推出）


tool.chinaz.com
网络命令
ping + 主机名
netstat
tranceroute + 主机名

arp
地址解析协议，即（Address Resolution Protocol） 是根据IP地址获取MAC物理地址的协议。








