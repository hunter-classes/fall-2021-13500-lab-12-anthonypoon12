#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "funcs.h"
TEST_CASE("return vector"){
    int var = 10;
    int var2 = 1000;
    std::vector<int> test1 = makeVector(var);
    std::vector<int> test2 = makeVector(var2);
    std::vector<int> test3 = makeVector(0);
    std::vector<int> test4 = makeVector(-100);
    for (int i =0; i<var;i++){
        CHECK(test1[i]==i);
    }
    for (int i =0; i<var2;i++){
        CHECK(test2[i]==i);
    }
    CHECK(test3.size()==0);
    CHECK(test4.size()==0);
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
    CHECK(test1.size()==0);
}
TEST_CASE("Task C"){
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    std::vector<int> v3={1,2,3,4,5};
    gogeta(v1,v2);
    for (int i =0; i<v1.size(); i++)
        CHECK(v1[i]==v3[i]);
    CHECK(v2.size()==0);
    std::vector<int> v10{1,2,3,4,5};
    std::vector<int> v20;
    std::vector<int> v30={1,2,3,4,5};
    gogeta(v1,v2);
    for (int i =0; i<v10.size(); i++)
        CHECK(v10[i]==v30[i]);
    CHECK(v20.size()==0);
}
TEST_CASE("TASK D"){
    
    std::vector<int> vv1{1,2,3};
    std::vector<int> vv2{4,5};
    std::vector<int> vv3{4,80};
    std::vector<int> vv4{10,1,4};
    std::vector<int> ans = {5,7,3};
    std::vector<int> ans2 = {14,81,4};
    std::vector<int> output = sumPairWise(vv1,vv2);
    std::vector<int> output2 = sumPairWise(vv3,vv4);
    for (int i=0; i<output.size();i++)
        CHECK(output[i]==ans[i]);
    for (int i=0; i<output2.size();i++)
        CHECK(output2[i]==ans2[i]);
}