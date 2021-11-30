# 说明
练习 C++ 题目的测试场

# 环境(update 2021/11/1)
>基本步骤从 update 2021/3/28。但VSCode升级后配置文件需要重新生成一下。
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