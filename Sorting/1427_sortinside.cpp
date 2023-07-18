#include<iostream>
#include<string>
using namespace std;

void merge(int arr[], int p, int q, int r);
void mergeSort(int arr[], int l, int r);
int main(){
    string input;
    unsigned int* array;

    cin >> input;
    int len = input.length();
    
    array = new unsigned int [len];

    for(int i=0;i<len;i++){
        const char* charPtr = input.substr(i,1).c_str();
        array[i] = atoi(charPtr);
    }
    delete[] array;
}

void mergeSort(int arr[], int l, int r){
    if (l<r) {
        //m is the point where the array is divided into two subarryas
        //m 은 배열의 정 중앙. l은 왼편 시작점 , r 오른편 시작점
        int m = l + ( r-l) /2;
        mergeSort(arr,l,m); //반으로 나눈 왼편
        mergeSort(arr, m+1, r); //반으로 나눈 오른편
        
        //Merge the sorted sub arrays
        //두개의 정렬된 배열을 병합한다.
        merge(arr,l,m,r);
    }
}

void merge(int arr[], int p, int q, int r ){
    //Create L <- A[p..q] and M <- A[q+1..r]
    int n1 = q - p +1;
    int n2 = r - q;

    int L[n1], M[n2];

    for(int i=0;i<n1;i++)
        L[i] = arr[p+i];
    for(int j=0;j<n2;j++)
        M[j] = arr[q+1+j];
    //Maintain current index of sub-arrays and main array
    int i,j,k;
    i=0;
    j=0;
    k=p;
    
    //Until we reach either end of L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while(i<n1 && j < n2) {
        if(L[i] <= M[j]){
            arr[k] = L[i];
            i++;
        }
    }
}