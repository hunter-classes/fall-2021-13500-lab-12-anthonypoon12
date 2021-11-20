#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "funcs.h"
TEST_CASE("return vector"){
    int var = 10;
    int var2 = 1000;
    std::vector<int> test1 = makeVector(var);
    std::vector<int> test2 = makeVector(var2);
    for (int i =0; i<var;i++){
        CHECK(test1[i]==i);
    }
    for (int i =0; i<var2;i++){
        CHECK(test2[i]==i);
    }
}
TEST_CASE("TaskB"){
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> final = {1,2,3,4,6};
    std::vector<int> test = goodVibes(v);
    for (int i = 0; i < test.size(); i++){
        CHECK(test[i] == final[i]);
    }
    std::vector<int> v1{-1};
    std::vector<int> test1 = goodVibes(v1);
    CHECK(test.empty()==false);
}