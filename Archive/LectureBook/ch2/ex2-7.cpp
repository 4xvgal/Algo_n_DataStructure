#include<stdio.h>
using namespace std;
//ex 2-7.c
//다항식 프로그램

#define MAX_DEGREE 101

typedef struct {
    int degree; //최고 차항
    float coef[MAX_DEGREE]; //항의 계수 

}Polynomial;
// 다항식 입력함수
Polynomial read_poly(){
    Polynomial p;
    printf("다항식의 최고 차수 입력 :");
    scanf("%d",&p.degree);

    printf("각항의 계수 입력");

    for(int i=0;i<=p.degree;i++){
        scanf("%f",p.coef+i); //각항의 계수를 입력받음 p.coef[i];
    }
    return p;
}
//다항식 출력함수
void print_poly(Polynomial p,char str[] ){
    printf("/t%s", str);
    for(int i=0;i<p.degree;i++){
        printf("%5.1f x^%d + ", p.coef[i], p.degree -i);
    }

}

// 두 개의 다항식을 더한 결과를 반환하는 함수
Polynomial add_poly(Polynomial a, Polynomial b){
    // 결과 다항식을 저장할 객체 생성
    Polynomial c;
    int i;

    // 결과 다항식의 차수 결정
    if(a.degree > b.degree){
        c.degree = a.degree;
    }else{
        c.degree = b.degree;
    }

    // 결과 다항식의 계수 초기화
    for(i=0;i<=c.degree;i++){
        c.coef[i] = 0.0;
    }

    // 첫 번째 입력 다항식의 계수를 결과 다항식에 더함
    for(i=0;i<=a.degree;i++){
        c.coef[c.degree-i] += a.coef[a.degree-i];
    }

    // 두 번째 입력 다항식의 계수를 결과 다항식에 더함
    for(i=0;i<=b.degree;i++){
        c.coef[c.degree-i] += b.coef[b.degree-i];
    }

    // 결과 다항식 반환
    return c;
}

void main(){

}
