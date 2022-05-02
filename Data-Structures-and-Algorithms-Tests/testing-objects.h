#pragma once
#include <unordered_map>
using namespace std;

extern const int testDataSize = 20;

extern int testDataOne[] = { 5 };

extern int sortedTestDataOne[] = { 5 };

extern int testDataTwo[] = { 11, 21, 23, 12, 31, 33, 42, 49, 44, 9, 5, 16, 45, 38, 25, 20, 2, 10, 19, 29 };

extern int sortedTestDataTwo[] = { 2, 5, 9, 10, 11, 12, 16, 19, 20, 21, 23, 25, 29, 31, 33, 38, 42, 44, 45, 49 };

extern int testDataThree[] = { 66, 47, 44, 21, 70, 86, 77, 78, 76, 62, 89, 46, 68, 92, 23, 17, 72, 29, 26, 25,
                            71, 18, 96, 37, 31, 15, 8, 48, 28, 22, 13, 9, 55, 2, 65, 32, 42, 6, 63, 100, 5,
                        88, 20, 85, 69, 45, 82, 51, 30, 90 };

extern int sortedTestDataThree[] = { 2, 5, 6, 8, 9, 13, 15, 17, 18, 20, 21, 22, 23, 25, 26, 28, 29, 30, 31, 32, 37,
                            42, 44, 45, 46, 47, 48, 51, 55, 62, 63, 65, 66, 68, 69, 70, 71, 72, 76, 77, 78,
                        82, 85, 86, 88, 89, 90, 92, 96, 100 };

extern int testDataFour[] = { 26, 40, 98, 32, 53, 12, 14, 60, 19, 78, 99, 68, 88, 62, 77, 83, 51, 84, 30, 1,
                            81, 70, 87, 44, 11, 17, 55, 35, 2, 33, 86, 61, 13, 56, 24, 47, 41, 85, 96, 34,
                        93, 22, 48, 80, 31, 63, 74, 57, 97, 16, 82, 54, 64, 4, 46, 89, 58, 42, 91, 76, 6,
                    59, 49, 5, 100, 94, 25, 10, 65, 71, 23, 43 };

extern int sortedTestDataFour[] = { 1, 2, 4, 5, 6, 10, 11, 12, 13, 14, 16, 17, 19, 22, 23, 24, 25, 26, 30,
                            31, 32, 33, 34, 35, 40, 41, 42, 43, 44, 46, 47, 48, 49, 51, 53, 54, 55, 56, 57,
                        58, 59, 60, 61, 62, 63, 64, 65, 68, 70, 71, 74, 76, 77, 78, 80, 81, 82, 83, 84, 85,
                    86, 87, 88, 89, 91, 93, 94, 96, 97, 98, 99, 100 };

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