#include <iostream>
using namespace std;
int main()
{
    int final_number;
    cout<<"Pls give the final number: ";
    cin>>final_number;
    // cout<<final_number<<endl;
    int i, sum;
    i=0;
    sum=0;
    while(i<final_number)
    {
        i=i+1;
        sum=sum+i;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}