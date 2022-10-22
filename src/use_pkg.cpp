#include <package.hpp>
#include <iostream>

int main()
{
    Calculator<int(int)> cal1([](int id) -> int {
        std::cout << id << std::endl;
        return id;
    });

    cal1(13);
}
