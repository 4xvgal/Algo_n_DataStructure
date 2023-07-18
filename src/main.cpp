#include<iostream>
#include<cmath>
#include"measuretime.hpp"
using namespace std;

int main(){
    int two[10];
    int two2[10];
    measureTime t1;
    t1.startMeasure();
    for(int i=0;i<10;i++){
        two[i]=2;
        if (i==0){
            two[i]=1;
        }
        else {
            for(int j=0;j<i-1;j++){
                two[i]= two[i] * 2;
            }
        }
    }
    t1.endEMeasure();
    t1.startMeasure();
    for(int i=0;i<10;i++){
        two2[i] = int(pow(2,i));
    }
    t1.endEMeasure();
    for(int i=0;i<10;i++){
        cout << two[i] << " ";
    }
    cout << endl;
    for(int i=0;i<10;i++){
        cout << two2[i] <<" ";
    }
}