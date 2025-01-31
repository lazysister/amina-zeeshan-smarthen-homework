#include<iostream>
using namespace std;
int stickers(int n1){return n1*n1*6;}
int main(){
    int length;
    cout<<"enter the side length of rubics cube: ";
    cin>>length;
    cout<<"number of stickers needed: "<<stickers(length);
    return 0;
}