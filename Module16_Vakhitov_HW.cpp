#include <iostream>
#include "time.h"
#define _CRT_SECURE_NO_WARNINGS



const int N = 5;


int main()
{
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    std::cout <<  " Date: " << buf.tm_mday << "\n";


    int array[N][N] = { {1, 2,}, {3, 4} };
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

            array[i][j] = i + j;
            std::cout << array[i][j];
        }
        std::cout << "\n";
        
    }

    int sum = 0;
    for (int i = 0 ; i < N; i++)
    {
        sum += array[buf.tm_mday % N][i];
    }
    std::cout << " Sum: " << sum;
    

}

