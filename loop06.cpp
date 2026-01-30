#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    for (int i = 2; i <n; i++)
    {
        if (n%i == 0)
        {
            // Rem = 0 , Not a prime
          cout<<"Not a prime number" <<endl;
          break;
        }
        else{
            // Remender is not 0, may be prime
            cout<<"Rem is not 0 , May be prime";
            break;
        }
    }
    
}