#include <lodepng.h>
#include <iostream>

int main()
{
    const char* filename = "/home/maly/document/chrono-personal-learning/rabit.png";
    unsigned wide = 0;
    unsigned height = 0;
    unsigned char *out = nullptr;

    auto err = lodepng_decode32_file(&out, &wide, &height, filename);
    if(err)
        std::cout << "error" << std::endl;
    else
    {
        std::cout << wide << "\t" << height << std::endl;
        std::cout << out << std::endl;
    }
    
}