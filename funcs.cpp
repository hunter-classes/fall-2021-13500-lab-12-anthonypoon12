#include <iostream>
#include <vector>
#include "funcs.h"
std::vector<int> makeVector(int n){
    std::vector<int> output;
    for (int i = 0; i < n; i++)
        output.push_back(i);
    return output;
}