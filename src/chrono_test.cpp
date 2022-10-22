#include <chrono>
#include <iostream>
#include <av_spin.hpp>
#include <thread>

using namespace std::chrono;

int main()
{
    using Lck = Lock<2>;
    int sum = 0;

    auto func = [&](int id)
    {
        Lck lck;
        lck.lock();
        std::cout << "thread " << id << "\tlaunch!" << std::endl;
        lck.unlock();
        for (int i = 0; i < 100000; i++)
        {
            lck.lock();
            ++sum;
            lck.unlock();
        }
    };

    auto start = high_resolution_clock::now();
    std::thread th1(func, 1);
    std::thread th2(func, 2);

    th1.join();
    th2.join();
    auto end = high_resolution_clock::now();

    auto du = duration_cast<nanoseconds>(end - start);
    std::cout << "the total time is\t" << du.count() << "ns" << std::endl;
    std::cout << "the result is:\t" << sum << std::endl;

    seconds s = hours(1) + 2 * minutes(10) + seconds(70) / 10;
    std::cout << s.count() << "s\n";
}
