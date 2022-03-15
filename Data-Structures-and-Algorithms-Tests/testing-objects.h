#pragma once
#include <unordered_map>
using namespace std;

extern const int testDataSize = 20;

extern int testDataOne[] = { 5 };

extern int testDataTwo[] = { 11, 21, 23, 12, 31, 33, 42, 49, 44, 9, 5, 16, 45, 38, 25, 20, 2, 10, 19, 29 };

extern int testDataThree[] = { 66, 47, 44, 21, 70, 86, 77, 78, 76, 62, 89, 46, 68, 92, 23, 17, 72, 29, 26, 25,
                            71, 18, 96, 37, 31, 15, 8, 48, 28, 22, 13, 9, 55, 2, 65, 32, 42, 6, 63, 100, 5,
                        88, 20, 85, 69, 45, 82, 51, 30, 90 };

extern int testDataFour[] = { 26, 40, 98, 32, 53, 12, 14, 60, 19, 78, 99, 68, 88, 62, 77, 83, 51, 84, 30, 1,
                            81, 70, 87, 44, 11, 17, 55, 35, 2, 33, 86, 61, 13, 56, 24, 47, 41, 85, 96, 34,
                        93, 22, 48, 80, 31, 63, 74, 57, 97, 16, 82, 54, 64, 4, 46, 89, 58, 42, 91, 76, 6,
                    59, 49, 5, 100, 94, 25, 10, 65, 71, 23, 43 };

class AlgorithmTestData {
    public:
        int *inputData[testDataSize];
        int *expectedOutputData[testDataSize];
        AlgorithmTestData(int *input[testDataSize], int *output[testDataSize])
        {
            
            for (int i = 0; i < testDataSize; ++i)
            {
                inputData[i] = input[i];
                expectedOutputData[i] = output[i];
            }
        }
};