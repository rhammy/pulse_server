#include <thread>
#include <cstdio>

// g++ -std=c++17 -O2 -Wall -pthread src/main.cpp -o pulse_server

int main() {
    unsigned int threadNum = std::thread::hardware_concurrency();
    printf("Number of hardware cores: %d\n", threadNum);
}