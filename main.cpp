#include <iostream>
#include <chrono>

int main()
{
    int oneBillion = 1000000000;

    const auto start = std::chrono::high_resolution_clock::now(); // Get the starting time

    int i = 0;
    while (i < oneBillion) {
        i++;
    }

    const auto end = std::chrono::high_resolution_clock::now(); // Get the ending time

    const std::chrono::duration<double> elapsed_seconds = end - start; // Calculate the elapsed time

    std::cout << "Time taken to count up to 1 billion: " << elapsed_seconds.count() << " seconds\n";

    system("pause");
    return 0;
}
