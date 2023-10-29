//배열에서 요소 옮기기
#include<stdio.h>
using namespace std;

#define items 20
void insert(int array[], int loc, int value){
   
   for(int i=items-1;i>loc;i--){ // insert(array, 2, 10); items보다 1작게해야 실 인덱스로 사용가능, loc 바로 뒤 인덱스까지만 뒤로 미루기
    array[i] = array[i-1];
   }

   array[loc] = value;
}
int remove(int array[], int loc){
    int rt = array[loc];

    for(int i=loc+1;i<items;i++){
        array[i-1] = array[i]; //앞 방은 현재 인덱스의 밸류를 가지게 되고 한칸씩 앞당겨짐
    }
    return rt;   
}
void print(int n[]){
    printf("\n");
    for(int i=0;i<items;i++){
        printf("%d ",n[i]);
    }
}
int main(){
    int array[items] ={1,2,3,4,5,6,7,8,9,10,};

    insert(array, 0, 10);
    print(array);

    printf("\npop: %d\n",remove(array, 0));
    print(array);
    return 0;
}