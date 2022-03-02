//
//  main.cpp
//  程序清单2.1
//
//  Created by SCH_MN on 2022/3/2.
//

#include <iostream>//引用的头文件吧，大概（新手期的谨慎）
int main()//函数头
{
    using namespace std;//使用名称空间（让定义可用？）
    cout << "Come up and C++ me some time.";//快来加入我们C++？
    cout << endl;//新开一行/另起一行/结束本行
    cout << "You won't regret it!" << endl;//你不会后悔的
    return 0;
}
/*成功实现本次的例子模拟
-调用了标准输入输出库函数 iostream
-使用了名称空间（虽然我还不知道这个名称空间具体发挥了什么作用）
-使用了 cout 工具来输出字符（书里还针对一些运行窗口关闭过快的情况，建议在 return 前加 cin.get() 后面会详细介绍）
 备注：C++中还有使用 嵌套注释 的方法，有机会去了解一下（尚未完成）
 
 目前分不清说法名词：编辑器、编译器、可执行代码、可执行程序
*/
