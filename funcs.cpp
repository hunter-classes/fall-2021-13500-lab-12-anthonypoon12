#include <iostream>
#include <vector>
#include "funcs.h"
std::vector<int> makeVector(int n){
    std::vector<int> output;
    for (int i = 0; i < n; i++)
        output.push_back(i);
    return output;
}
std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> output;
    for (int i: v)
        if (i>0)
            output.push_back(i);
    return output;
}
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for (int i: vegeta)
        goku.push_back(i);
    vegeta.clear();
}