#include<iostream>
using namespace std;
float fuel(float dis);

int main(){
    float distance;
    cout<<"enter the distance";
    cin>>distance;
    cout<<"calculate fuel"<<fuel(distance);

}
float fuel(float dis){
    float yourfuel;
    yourfuel=dis*10;
    return yourfuel;
}