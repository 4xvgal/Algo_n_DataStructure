class QuickSort{
    //퀵소트 클래스
    //클래스 내부의 배열은 포인터이므로 매개변수로 사용 배열을 직접적으로 접근합니다.
    //클래스 내부의 배열은 포인터이므로 클래스 내부에서는 배열 메모리를 해제 하지 않습니다.
    private:
        void Swap(int &a, int &b){ //두 수를 교환하는 함수
            int temp = a;
            a = b;
            b = temp;
        }
        int *arr;
        int size;
    public:
        QuickSort(int *arr, int size){ //배열과 크기를 받는 생성자
            this->arr = arr;
            this->size = size;
        } 
        QuickSort(int **arr, int size) //포인터를 받는 생성자 
        {
            this->arr = *arr;
            this->size = size;
        }
        QuickSort(){
            this-> arr= nullptr;
        };
        // 퀵 정렬을 수행하는 함수 선언
        int Partition(int Left, int Right);
        // 퀵 정렬 본체 함수 선언
        void QuickSortFunc(int Left, int Right);
        
        int * getArr(){ //배열을 반환하는 함수
            return arr;
        }
};

//퀵 정렬 본체 함수 구현
void QuickSort::QuickSortFunc(int Left, int Right){
    if(Left < Right){
        int pivot = Partition(Left, Right);
        QuickSortFunc(Left, pivot-1);
        QuickSortFunc(pivot+1, Right);
    }
}
//퀵정렬 함수 구현
/**
 * Partitions the array for the QuickSort algorithm.
 * 
 * @param Left The left index of the partition.
 * @param Right The right index of the partition.
 * @return The index of the pivot element after partitioning.
 */
int QuickSort::Partition(int Left,int Right){
    int i = Left;
            int j = Right;
            int pivot = arr[Left];
            while( i< j){
                while(arr[i] <= pivot){ // find the first element greater than pivot
                //피벗보다 큰 첫번째 원소를 찾는다.
                    i++;
                }
                while(arr[j] > pivot){ // find the first element smaller than pivot
                //피벗보다 작은 첫번째 원소를 찾는다.
                    j--;                    
                }
                if(i < j){ // if i < j, swap arr[i] and arr[j]
                // 큰요소와 작은요소를 교환한다. 큰요소는 뒤에서부터 찾은요소이고 작은요소는 앞에서부터 찾은요소다.
                    Swap(arr[i], arr[j]); 
                }
            }
            Swap(arr[Left], arr[j]); // 피벗과 arr[j]를 교환한다.
            return j; // 피벗의 인덱스를 리턴한다.
}