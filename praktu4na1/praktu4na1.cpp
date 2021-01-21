#include <iostream>
#include "Teacher.h"
int main()
{
    Teacher a, b;
    std::cin >> a;
    std::cout << a;
    std::cin >> b;
    if (a == b)
        std::cout << "They are the same! ";
    else
        std::cout << "Different information ";
}