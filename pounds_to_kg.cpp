#include <iostream>
using namespace std;
int main()
{
    double pound, kg, rate;
    rate=0.44535924;
    cout<<"Please insert the nubmer of pounds u would like to know in kilogram: ";
    cin>>pound;
    kg=pound*rate;
    cout<<"After my cauculation, it's "<< kg <<" kilogram/kilograms.\n";
    return 0; 
}