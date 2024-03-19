#include<iostream>
#include"realRandom_urandom.hpp"
using namespace std;

int main(){
    realRandom_urandom r; // 객체 생성

    cout << "Generated random number: " << r.getRand() << endl; //난수 출력
}