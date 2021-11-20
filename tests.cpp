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