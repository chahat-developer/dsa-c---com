#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";

    }   cout<<endl;
                                            //  two no swap(arr[i], arr[i+1]);  //  swap function
}

void swapAlternatel(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
     
    }
    
}
int main(){

    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};

    swapAlternatel(even, 8);
    printArray(even, 8);
    cout<<endl;   

    swapAlternatel(odd, 5);
    printArray(odd, 5);
    cout<<endl;



    return 0;
}