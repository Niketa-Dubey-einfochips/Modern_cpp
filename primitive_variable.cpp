#include<iostream>
int main()
{
    //scalar type
    int i =0;
    using namespace std;
    cout<<i;
    char ch = 'a';
    bool flag = true;//true or false
    float f = 1.283f;
    double d = 5214.67;
    //vector
    int arr[5];

    int arr1[5] = {1,2,3,4,5};

    char buff[50];
    cout<<"enter your name\n";
    cin.getline(buff,64,'\n');
    cout<<"your name is : "<<buff <<endl;
    return 0;

    
}