#pragma once

const int dataSize = 20;

class SortingTestData {
    public:
        int *inputData[dataSize];
        int *expectedOutputData[dataSize];
        SortingTestData(int *input[dataSize], int *output[dataSize])
        {
            
            for (int i = 0; i < dataSize; ++i)
            {
                inputData[i] = input[i];
                expectedOutputData[i] = output[i];
            }
        }
};