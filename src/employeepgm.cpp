#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Employee
{

  string name, language;
  int age,salary, emp_id,number;
  double  experience;  
 void getdata()
{
  cout<< "Enter number of employees \n";
  cin >> number;

for (int i=0;i<number;i++)
  {
  cout << "Enter employee name \n";
  cin >> name;
  cout << "Please insert your age \n";
  cin >> age;
  cout << "Enter emp_id \n";
  cin >> emp_id;
  cout << "Enter languages of interest \n";
  cin >> language;
  cout << "Enter year of experience \n";
  cin >> experience;
  cout << "Enter your salary \n";
  cin >> salary;
  }
}

 public: void AddRecord()
{
  fstream file;
  file.open("data.txt", ios:: out);
  getdata();
  file << "Details of " <<number <<" employees are: \n";
  file <<"Name: "<<name.c_str() <<" \n" <<"Age: "<< age << " \n" <<"Employee id: "<<emp_id << " \n" <<"Languages known: "<< language.c_str() << " \n" <<"Experience details: " <<experience <<" \n" <<"Salary: "<< salary;
  file.close();


}
};

int main ()
{
  Employee e;
  e.AddRecord();
  cout<<"\nData written successfully...";  
}
