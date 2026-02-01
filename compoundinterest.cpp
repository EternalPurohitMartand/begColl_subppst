#include <iostream>
#include <cmath>
using namespace std;
int main(){

    float A,P,r,R,n,t;
    
    cout<<"Principal is                                        :";
    cin>>P;
    cout<<"Rate of Interest is                                 :";
    cin>>r;
    R=r/100;
    cout<<"time(in years) is                                   :";
    cin>>t;
    cout<<"Number of times interest applied per time period is :";
    cin>>n;
    A= P*pow((1 + R/n), (n*t));
    cout<<"Compound interest is "<<A<<endl;
    return 0;
}