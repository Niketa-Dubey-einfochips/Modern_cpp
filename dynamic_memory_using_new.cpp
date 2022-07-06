#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

void mallloc()
{
    int *p = (int *)malloc(5*sizeof(int));
    if ( p==NULL)
    {
        printf("failed to allocate memory \n");
        return ;
    }
    *p =5;
    printf("%d\n" , *p);
    p =NULL; //to remove dagling pointer 
}

void New()
{
    int *p = new int(5);
    *p = 6;
    cout<<*p <<endl;
    delete p ;
    p = nullptr;
}

int Newarray()
{
    int *p = new int[5];
    for(int i =0; i<5 ; i++)
    {
        p[i] = i;
    }
    delete []p;
}

char strings()
{
    char *p = new char [4];
    strcpy(p , "c++");

}

void TwoD() {
	int *p1 = new int[3];
	int *p2 = new int[3];

	int **pData = new int *[2];
	pData[0] = p1;
	pData[1] = p2;

	pData[0][1] = 2;

	delete[]p1;//delete pData[0]
	delete[]p2;

	delete[] pData;
}
int main() {
	int data[2][3] = {
		1,2,3,
		4,5,6
	}; //1,2,3,4,5,6
	   //data[0][1]
	cout<<strings();
	return 0;
}