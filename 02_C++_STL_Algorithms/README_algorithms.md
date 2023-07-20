## STL 算法相关

1. 函数对象  

2. 谓词（返回bool类型的仿函数）
    - 一元谓词（operator()接受一个参数。）  
        e.g. find_if的第三个参数
    - 二元谓词（operator()接受两个参数。）  
        e.g. sort的第三个参数  

3. 内建函数对象分类(#include <functional>)  
> [Function objects](https://en.cppreference.com/w/cpp/utility/functional)  

    - 算术仿函数(Arithmetic operations)
        plus minus multiplies divides modulus negate  

    - 关系仿函数(Comparisons)  
        equal_to not_equal_to greater less greater_equal less_equal  

    - 逻辑仿函数(Logical operations)  
        logical_and logical_or logical_not
