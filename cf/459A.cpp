#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x0, y0, x1, y1;
    cin>> x0>> y0>> x1>> y1;

    int x= abs(x0- x1);
    int y= abs(y0- y1);   

    if(x== 0 && y!= 0){cout<< x1+ y<<" "<< y1<<" "<< x0+ y<<" "<< y0;}
    if(y== 0 && x!= 0){cout<< x1<<" "<< y1+ x<<" "<< x0<<" "<< y0+ x;}
    if(x== y){cout<< x0<<" "<< y1<<" "<< x1<<" "<< y0;}
    if(x!= y&& x*y!= 0){cout<<-1;}
}