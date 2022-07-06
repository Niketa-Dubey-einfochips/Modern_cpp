#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct record{ //another way to write binary data to file using structure
    int id;
    char name[10];
};
void Write_record(record *p)
{
    ofstream binstream{"records" ,ios::binary | ios::out};
    binstream.write((const char*)p , sizeof(record));

}

record getrecord()
{
    ifstream input{"records", ios::binary | ios::in};
    record r;
    input.read((char*)&r, sizeof(record));
    return r;
}

int main()
{
    record r;
    r.id = 1001;
    strcpy_s(r.name,10, "niketa");
    Write_record(&r);

    record r2 = getrecord();
    cout<<r2.id<<":"<<r2.name<<endl;
        // ofstream textstream{"data"};
    // textstream <<12345678<<endl;


    
    // ofstream binarystream{"binary",std::ios::binary | std::ios::out}; //creating binary file
    // int num{12345678};//buffer num 
    // binarystream.write ((const char*)&num ,sizeof(num));//typecaste num to const char* to get one bite each 
    
    // ifstream input{"binary",ios::binary| ios::in};//for reading the file
    // input.read((char*) &num, sizeof(num));//
    // cout<<num<<endl;
    // return 0;
}