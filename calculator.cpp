#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    char sign;
    cout<<"Enter first number: ";
    cin>>n1;
    // cout<<n1<<endl;
    cout<<"Enter second number: ";
    cin>>n2;
    // cout<<n2<<endl;
    cout<<"Enter operator: ";
    cin>> sign;
    while (n1||n2>0)
    {
        if(sign == '+'){
            cout <<"Addition is: "<< n1+n2 << endl;
            break;
        } else if(sign == '-'){
            cout<<"Subtration is: "<<n1-n2<<endl;
            break;
        } 
        else if(sign == '*'){
            cout<<"Multiplication is: "<<n1*n2<<endl;
            break;
        } 
        else if(sign == '/'){
            cout<<"Division is: "<<n1/n2<<endl;
            break;
        }
        
    }
    
    return 0;
}