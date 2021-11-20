#include <iostream>
#include <vector>
#include "funcs.h"
int main(){
    int var = 10;
    int var2 = 5;
    std::vector<int> vec1 = makeVector(var);
    std::vector<int> vec2 = makeVector(var2);
    std::cout<<"a vector of size 10 with each value being the index: \n";
    for (int i=0; i < vec1.size(); i++)
        std::cout<<vec1[i]<<"\n";
    std::cout<<"a vector of size 5 with each value being the index: \n";
    for (int i=0; i < vec2.size(); i++)
        std::cout<<vec2[i]<<"\n";
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> goodvibe = goodVibes(v);
    std::cout<<"all positive integers in {1,2,-1,3,4,-1,6}: \n";
    for (int i=0; i < goodvibe.size(); i++)
        std::cout<<goodvibe[i]<<"\n";
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    std::cout<<"appending {4,5} to {1,2,3}:\n ";
    gogeta(v1,v2);
    std::cout<<"first vector: \n";
    for (int i: v1)
        std::cout<<i<<"\n";
    std::cout<<"second vector: \n";
    for (int i: v2)
        std::cout<<i<<"\n";
    std::cout<<"sum of vectors {1,2,3} and {4,5}: \n";
    std::vector<int> vv1{1,2,3};
    std::vector<int> vv2{4,5};
    std::vector<int> ans = sumPairWise(vv1,vv2);
    for (int i: ans)
        std::cout<<i<<"\n";
    return 0;
}