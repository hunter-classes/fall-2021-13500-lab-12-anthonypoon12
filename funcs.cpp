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
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> output;
    int ind = v1.size();
    if (v1.size()<v2.size())
        ind=v2.size();
    for (int i=0; i<ind; i++){
        output.push_back(0);
        if (v1.size()>i)
            output[i]+=v1[i];
        if (v2.size()>i)
            output[i]+=v2[i];
    }
    return output;
}