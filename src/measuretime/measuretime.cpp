#include "measuretime.hpp"
#include<iostream>

//measureTime 구현부
//측정 시작 함수
void measureTime::startMeasure(){
    start = clock();
}
//측정 종료 함수
void measureTime::endEMeasure(){
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    std::cout << duration << " sec" << std::endl;
}