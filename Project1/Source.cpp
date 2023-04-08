#include <iostream>
#include <chrono>
using namespace std;
int main()
{
    
    auto start_time = chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; i++)
    {
        cout << i << endl;
    }
    auto end_time = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed_time = end_time - start_time;
    double seconds = elapsed_time.count();

    cout << "Program execution time: " << seconds << " seconds\n";

    return 0;
}
