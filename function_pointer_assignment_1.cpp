/*
Author :- Niketa Dubey
course name :- complete modern C++
*/

#include<iostream>
using namespace std;
int Add(int *a , int *b) //addition of two nubers using pointer 
{
    int sum = *a+*b;
    //cout<< "the sum of a and b is "<<endl <<<<endl;
    return sum ;
}

int AddVal(int *a , int *b ,int *result) // result of addition stroing in result variable
{
    *result = *a+*b;
   // cout << "the sum of the two numbers is \n"<<*result <<endl;
    return *result;
}

void Swap (int *a , int  *b)  //Swap two numbers through reference arguments
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //cout <<"the value os the  *a is after swapping is \n"<<a <<endl;
    //cout<<"the value od the  *b is after swapping is \n"<< b<<endl;


}

int factorial(int *a, int *result)  //Find factorial of a number and return that through a reference parameter
{
    int i ;
   // int fact;
    *result =1;
    //cin >> *a;
    for(i=1 ; i<= *a;++i)
    {
       // cout<< endl; 
        *result = *result * i;

    }

    return *result;
}

int main()
{
    int a,b,c=0, *ptr1 ,*ptr2 , *result =0;
    cout<<"enter the two numbers \n";
    cin>>a>>b;
    int add;
    ptr1 = &a;
    ptr2 = &b;
    result = &c;
    //*add = Add(4,5);
    cout<<"the addition of two number is "<<Add(ptr1,ptr2)<<endl;
    
    //cout << " the swap of the two number is " << Swap(&a,&b)<<endl;
    Swap(&a,&b);
    cout <<"the value os the  *a is after swapping is \n"<<a <<endl;
    cout<<"the value od the  *b is after swapping is \n"<< b<<endl;
    cout <<AddVal(&a , &b, &c);
    cout<<"\nfactorial"<<endl;
    result = 0;
    cout<<factorial(&a , &c);
    cout<<endl;

}

//void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference paramete