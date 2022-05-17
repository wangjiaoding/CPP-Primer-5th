/*
 * @Author: 王教鼎
 * @Date: 2022-05-17 21:34:13
 * @Description: 练习1.6
 */
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    // std::cout << "The sum of " << v1;  这个地方加了分号，是不对的
    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}