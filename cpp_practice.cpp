#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

struct name{
  string firstname,middlename,lastname,fullname = "";

  string print(){
   fullname += firstname+" "+middlename+" "+lastname;

   return fullname;
}
};

int main(){
  string str;
  //cout << "Hello World!" <<endl;
  name n = {"Muhammad","Abubakar","Tahir","" };

  str = n.print();
  cout<<"Name : "<< str <<endl;

  return 0;
}
