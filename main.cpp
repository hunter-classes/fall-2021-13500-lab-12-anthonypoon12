#include <iostream>
#include <vector>
#include "funcs.h"
int main(){
    int var = 10;
    int var2 = 5;
    std::vector<int> vec1 = makeVector(var);
    std::vector<int> vec2 = makeVector(var2);
    for (int i=0; i < vec1.size(); i++)
        std::cout<<vec1[i]<<"\n";
    for (int i=0; i < vec2.size(); i++)
        std::cout<<vec2[i]<<"\n";
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> goodvibe = goodVibes(v);
    for (int i=0; i < goodvibe.size(); i++)
        std::cout<<goodvibe[i]<<"\n";
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    gogeta(v1,v2);
    for (int i: v1)
        std::cout<<i<<"\n";
    for (int i: v2)
        std::cout<<i<<"\n";
    return 0;
}