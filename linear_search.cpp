#include<iostream>
using namespace std;

bool search(int aarr[], int size, int key){
    
    for (int i = 0; i < size; i++)
    {
        if (aarr[i] == key)
        {
            return true;
        }
    }
    return false;
}          
                //    search number

int main(){

    int arr[10] = {5, -7, -2, -1,10, 20, 3, 4, 5, 6};
    

    cout << " Enter the element to search : " << endl;
    int key;
    cin >> key;


    bool found = search(arr, 10, key);

    if (found){
        cout << "Key is present in the array " << endl;
    }
    else{
        cout << "Key is not present in the array " << endl;
    }
    
    
    return 0;
}