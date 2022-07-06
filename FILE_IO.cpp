#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void write()
{
    ofstream out{"data.txt"};
    out<<"hello world"<<endl;
    out<<10<<endl;
    out.close();

}
void read()
{
    ifstream input{"data.txt"};
    if (!input.is_open())
    {
        cout<<"could not open the file"<<std::endl;
    }
    //input.open ("data.txt");
    string message; // creating string object 
    getline(input,message); //reading from the file
    int value{};
    input>>value;
    if(input.eof())//stream state flags
    {
        cout<<"end of file operation \n"<<endl;
    }
    if (input.good()) //stream state flags
    {
        cout<<"i/o operations are succesful"<<endl;

    }
    else{
        cout<<"some i/o operations failed\n"<<endl;
    }
    input.close();
    cout<<message<<":"<<value<<endl;

}

int main()
{
    write();
    read();
    return 0;
}