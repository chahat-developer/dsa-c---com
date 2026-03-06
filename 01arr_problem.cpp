#include<iostream>
using namespace std;

int findUnique(int arr[], int size){

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}
                // XOR principle: a^a = 0 and a^0 = a
int main(){

    int arr[7] = {1,2,3,4,2,3,1};

    cout << "Unique element is: " << findUnique(arr,7);

    return 0;
}