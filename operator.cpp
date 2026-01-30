#include<iostream>
using namespace std;

int main(){
    
    int a=4;
    int b=6;

    cout<<" a&b :"<< (a&b) <<endl;
    cout<<" a|b :"<<(a|b) <<endl;
    cout<<" ~a  :"<< ~a <<endl;
    cout<<" a^b :"<< (a^b)<<endl;

    cout<<" The value Of :"<<(17>>1)<<endl;
    cout<<" The value Of :"<<(17>>2)<<endl;
    cout<<" The value Of :"<<(19<<1)<<endl;
    cout<<" The value Of :"<<(21<<2)<<endl;
    
    int i = 7;
    
    cout<<" THE Value of : " <<(i++)<<endl;
    cout<<" THE Value of : " <<(++i)<<endl;
    cout<<" THE Value of : " <<(i--)<<endl;
    cout<<" THE Value of : " <<(--i)<<endl;

}