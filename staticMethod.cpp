#include<iostream>
using namespace std;

class Employee{

public:
static int count; // static variable
string eName;

void setName(string name)
{
eName = name;
count++;
}

static int getCount() // sta"tic method
{
return count;
}
};

int Employee::count = 0; // defining the value of count

int main()
{
Employee Harry;
Harry.setName("Harry");
cout<< Employee::getCount()<< endl;
}
