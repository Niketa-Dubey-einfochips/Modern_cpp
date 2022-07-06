#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
//#include<stl_algo.h>
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

std::string ToUpper(const std::string &str) ;
std::string ToLower(const std::string &str) ;
string ToUpper( const string &str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   //checking for lowercase characters
			str[i] = str[i] - 32;        //converting lowercase to uppercase  
	}
	cout<<"\n The string in upper case: "<< str;
}
string ToLower(const string  &str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}
	cout<<"\n The string in lower case: "<< str;
}

int main()
{
    string s,a;
    s= ToUpper("hello");
    cout<<s<<endl;
    ToLower("Hi");
}