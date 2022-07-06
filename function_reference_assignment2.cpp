#include<iostream>
using namespace std;


int Add(int a,int b, int &result)     //Add two numbers and return the result through a reference parameter
{
    int sum;
    sum = a+b;
    result = sum;
    return result;

}
int Factorial(int a, int &result)     //Find factorial of a number and return that through a reference parameter
{

    int i ;
    int x = 1;
    result =x;
    
    for(i=1 ; i<= a;++i)
    {
       // cout<< endl; 
    result =result * i;

    }

    return result;

}
void Swap(int &a, int &b)            //Swap two numbers through reference arguments
{

    int temp;
    temp = a;
    a = b;
    b = temp;

}

int main()
{

    int a,b,c=0;
    // *result =0;
    cout<<"enter the two numbers \n";
    cin>>a>>b;
    //int add;
    int &ptr1 = a;
    int &ptr2 = b;
    int &result = c;
    //*add = Add(4,5);
    cout<<"the addition of two number is "<<Add(ptr1,ptr2 , c)<<endl;
    
    //cout << " the swap of the two number is " << Swap(&a,&b)<<endl;
    Swap(a,b);
    cout <<"the value os the  *a is after swapping is \n"<<a <<endl;
    cout<<"the value od the  *b is after swapping is \n"<< b<<endl;
    //cout <<AddVal(&a , &b, &c);
    cout<<"\nfactorial"<<endl;
    result = 0;
    cout<<Factorial(a , c);
    cout<<endl;


}