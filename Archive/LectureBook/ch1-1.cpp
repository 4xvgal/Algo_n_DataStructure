//챕터 1 프로그래밍 프로젝트

#include<iostream>
#include<ctime>
using namespace std;

//시간 측정을 위한 클래스
class measureTime{
private:
    clock_t start, finish;
    double duration;
public:
    void startMeasure();
    void endEMeasure();
};

//measureTime 구현부   
void measureTime::startMeasure(){
    start = clock();
}
void measureTime::endEMeasure(){
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << " sec" << endl;
}
 
//O(1)
//n(n+1)/2 공식
int algoA(int n){
    measureTime t;
    t.startMeasure();
    int sum =0;
    sum = (n*(n+1))/2;
    t.endEMeasure();
    return sum;
}
//O(n)
//1+2+3+...+n
int algoB(int n){
    measureTime t;
    t.startMeasure();
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    t.endEMeasure();
    return sum;
}
//O(n^2)
//0+(1)+(1+1)+(1+1+1)+(1+1+...+1)
int algoC(int n){
    measureTime t;
    t.startMeasure();
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum++;
        }
    }
    t.endEMeasure();
    return sum;
}

int main(){
    int input = 100000;
    cout << "input : " << input <<endl;
    cout << "algo A : "<< algoA(input) << endl;
    cout << "algo B : "<< algoB(input) << endl;
    cout << "algo C : " << algoC(input) << endl;
    return 0;
    // 실행결과
    // input : 100000
    // algo A : 7e-06 sec
    // 705082704
    // algo B : 0.000464 sec
    // 705082704
    // algo C : 4.76007 sec
    // 705082704
}