#include<iostream>
using namespace std;
template<typename T>
T Max(T x, T y)
{
    cout<<typeid(T).name()<<endl;
    return x > y ? x : y;
}
int  main()
{
    max(3,5); 
    //if max(3.1,6);
    
    //then we can use typecaste like max(static_caste<float>(3),5.6f );
    //max<double>(3, 6.2); tell compliter to instantiate to folat and double
    
    //instantiate using address
    //int(*pfn)(int, int) = max; assign  max to int data type
    //instantiate char type
    //template char max(char x, char y); this is explicit instantiation
    max(3.4,7.8);
    return 0;
}