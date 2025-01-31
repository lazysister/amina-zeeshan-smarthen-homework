#include<iostream>
using namespace std;
int main(){
    double length;
    double height;
    double width;
   string unit;
    cout<<"enter the lenght of the pyramid (meters)";
    cin>>length;
    cout<<"enter the height of the pyramid (meters)";
    cin>>height;
    cout<<"enter the width of the pyramid (meters)";
    cin>>width;
    cout<<"enter the desird output unit  (meters, centimeters, milimeters, kilometers)";
    cin>>unit;
    cout<<"volume of pyramid is: ";
    if (unit == "meters"){cout<<(length*width*height)/3<<"cubic meters"   <<endl; }
    else if(unit =="centimeters"){cout<<(length*100*width*100*height*100)/3<<"cubic centimeters"   <<endl; }
    else if(unit =="miliimeters"){cout<<(length*1000*width*1000*height*1000)/3<<"cubic milimeters"<<endl; }
    else if(unit =="kilometers"){cout<<(length/1000*width/1000*height/1000)/3<<"cubic kilometers" <<endl; }
    else{cout<<"invalid unit";}
    
    
    
    return 0;
}