#include<iostream>

#define MAX_DEGREE 101
using namespace std;

typedef struct{
    int degree;
    float coef[MAX_DEGREE];
} Polynomial;

void print_poly(Polynomial p, char str[]){
    cout.precision(5); //소수점 자리수 지정
    int i;
    cout << "\t"<< str;
    for(int i=0;i<p.degree;i++) //0항 부터 최고차항까지 출력함
        cout<< p.coef[i] <<' '<< p.degree-i;  
    cout << p.coef[p.degree] << endl;
}
Polynomial read_poly(){
    int i;
    Polynomial p;
    
    cout << "다항식의 최고 차수를 입력하시오: ";
    cin >> p.degree;
    cout << "각 항의 계수를 입력하시오"<< "(총" << p.degree+1 <<"개): ";
    for(int i=0;i<=p.degree;i++){
        cin >> p.coef[i];
    }
}
//다항식의 합을 구하는 함수
Polynomial add_poly(Polynomial a, Polynomial b){
    int i;
    Polynomial p;
    //a의 차수가 더 크면 p=a; 한 후에 p+=b 를 함 (복사후 차수 큰거 더하기)
    if(a.degree > b.degree){
        p=a;
        for(i=0; i<=b.degree;i++)
            p.coef[i+(p.degree-b.degree)] += b.coef[i];
    }
    //b의 차수가 더 크면 p=-b 한 후에 p+=a 를 함 
    else {
        p = b;
        for(int i=0;i<=a.degree; i++)
            p.coef[i+(p.degree-a.degree)] += a.coef[i];
    }
    //반환
    return p;
};

int main(){
    Polynomial a,b,c;
    
    a = read_poly();
    b= read_poly();
    c = add_poly(a,b);
    print_poly(a,"A = ");
    print_poly(b,"B = ");
    print_poly(c,"C = ");
}
