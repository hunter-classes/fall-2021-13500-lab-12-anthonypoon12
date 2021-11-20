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
    return 0;
}