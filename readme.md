# 说明
练习 C++ 题目的测试场


# 环境（update 2021/3/28）
1. 安装CodeBlocks, 主要需要其中的MinGW
2. 配置MinGW_HOME, 将%MinGW_HOME%\bin添加到Path
3. 在cpp文件上按debug扭，根据新版（1.54.3）VSCode引导操作，会同时生成launch.json和task.json


# 环境 original
1. 创建launch.json
   按debug按钮，按照提示创建launch.json
   2020/10/20新版本的vscode，只要配置好g++的path，点一下那个创建launch.json之后，
2. 创建tasks.json （配置g++ 参数）
   方法1 源码文件上按F5,按照提示创建tasks.json
   方法2 shift + ctrl + p -> Tasks:Configure Task -> C/C++ g++.exe build active file
 

# 编译运行
F5
具体使用快捷键参见/test/hello_*.cpp的注释。

# 备注
mingw64工具链不好下载，可以直接安装CodeBlocks，使用里面带的那一套。
http://www.codeblocks.org/


# 00 算法和背诵程序
反复练习的测试场
00_practice/

挑选出来的背诵程序
00_recite/

天勤复制上机指导
00_secondary


// TODO
《算法基础与在线实践》
01/

// TODO
《妙趣横生的算法C语言版》
02/


@Queue
《算法竞赛入门经典（第2版）》
《程序设计基础》


# 01 DataStructure
>以课本为主 可执行代码不多
- 01_zju/        《数据结构（第2版）》 浙江大学 陈越
- xdf/        新东方考研 数据结构 刷题
- 02_tsinghua/   《数据结构（C++语言版）》 清华大学 邓俊辉


# 02 C++
《新标准C++程序设计》 北京大学 郭炜
00/ readme_0200.md 2019年复习精选示例代码

三套清华期末C++考试题
01/ readme_0201.md 详细说明及目录

// TODO （全部）
《C++程序设计习题及解答》 钱能 （67道例题）
02/ readme_0202.md 详细说明及目录

// TODO (全部)
《C++语言基础教程题解与上机指导》 吕凤翥

@Queue
《C++程序设计教程（第二版） 习题及解答》 钱能 （87道例题）
北大C++习题


# 03 C
《妙趣横生的算法C语言版》 （编程基本功）（20题）（已选 18道）
01/ readme_0301.md 详细说明及目录

@Obsolete
《C程序设计题解汇编》
关于中文名：测试发现如果文件夹带中文则无法启动调试，但仍可以编译成功。故取消文件夹的中文名。


# leetcode
LeetCode


# luogu
洛谷


# pat_basic_level
PAT 乙类题目  
[题目列表](https://pintia.cn/problem-sets/994805260223102976/problems/type/7)

# stl
常用stl使用场景
00_stl_demo

// TODO
《算法竞赛入门经典（第2版）》中的STL示例
01

# test
纯测试用

# templates
程序八股（样板代码）