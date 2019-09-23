//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first_Name=" ";
  string last_Name=" ";
  int lucky=0;
  //get user input
  cout<<"What is your first name?\n";
  cin>>first_Name;
  cout<<"What is your last name?\n";
  cin>>last_Name;
  //tell fortune
  cout<<"Welcome, "<<first_Name[0]<<"."<<last_Name[0]<<"., here is your fortune...";
  lucky=first_Name.length();
  cout<<"\nyour lucky number is "<<lucky<<endl;
  return 0;
}
