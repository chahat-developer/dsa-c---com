#include<iostream>
using namespace std;

// function to print array
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    // declare
    int number[15];

    // accessing array
    cout << "value at 14 index : "<< number[14] << endl;

    // initializing array
    int second[3] = {5, 7, 11};

    // accessing element
    cout << "value at 2 index : "<< second[2] << endl;

    // partial initialization
    int third[15] = {2,7};

    int n = 15;
    cout << "Printing the array :" << endl;

    for(int i = 0; i < n; i++){
        cout << third[i] << " ";
    }
    cout << endl;

    // Initialize all with 0
    int forth[10] = {0};
    printArray(forth, 10);

    // Only first element = 1, rest = 0
    int fifth[10] = {1};
    printArray(fifth, 10);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout << "size of array is : " << fifthsize << endl;

    char ch[5]= {'a', 'b', 'c', 'd', 'e'};
    cout << "size of char array is : " << ch[2]<< endl;

    for (int i = 0; i < 5; i++)
    {
       cout<< ch[i] <<" ";
    }
    
    cout<< "Printing Done" << endl;
    double firstDouble[5];
    float firstfloat[6];
    bool firstBool[9];
    

    cout << endl <<" Every thing is fine"<<endl <<endl;

    return 0;
}