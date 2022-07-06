#include<iostream>
using namespace std;

int  main()
{

//Try to modify x1 & x2 and see the compilation output
int x = 5 ;
const int MAX = 12 ;
const int &ref_x1 = x ;  //modified  using const 
const int &ref_x2 = x ;
cout<<ref_x1<<endl;
cout<<ref_x2<<endl;
cout<<"address of x is \n"<<endl;
cout<<&x<<endl;

 
//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
const int *ptr1 = &x ;
x= 10;
cout<< "value os x is "<<x <<endl;
cout<<"address of x is \n"<<endl;
cout<<&x<<endl;
cout<<ptr1<<endl;
int *const ptr2 = &x ;
const int * const ptr3 = &x ;
 
//Find which declarations are valid. If invalid, correct the declaration
//const int * const ptr3 = &MAX ; // commented due to reinitalization
const int *ptr4 = &MAX ;
cout<<MAX<<endl;
cout<<ptr4<<endl;
 
const int &r1 = ref_x1 ;
const int &r2 = ref_x2 ;
 
const int *&p_ref1 = ptr1 ;

 int *const &p_ref2 = ptr2 ;//modified
}