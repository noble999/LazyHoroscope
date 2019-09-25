//Authors:Noble LeDuc
#include<iostream>
#include<string>
#include<ctype.h>
#include<stdio.h>

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
  first_Name[0]=toupper(first_Name[0]);
  cout<<"What is your last name?\n";
  cin>>last_Name;
  last_Name[last_Name.length()-1]=toupper(last_Name[last_Name.length()-1]);
  //tell fortune
  cout<<"Welcome, "<<first_Name[0]<<"."<<last_Name[0]<<"., here is your fortune...";
  lucky=first_Name.length();
  cout<<"\nyour lucky number is "<<lucky;
  if((first_Name[0]=='A')||(first_Name[0]=='E')||(first_Name[0]=='I')||(first_Name[0]=='O')||(first_Name[0]=='U'))
  {
   cout<<"\nyou are destined to be famous!";
  }
  else
  {
   cout<<"\nyou should keep a low profile.";
  }
  if((last_Name[last_Name.length()-1]=='A')||(last_Name[last_Name.length()-1]=='E')||
     (last_Name[last_Name.length()-1]=='I')||(last_Name[last_Name.length()-1]=='O')||
     (last_Name[last_Name.length()-1]=='U'))
  {
	cout<<"\nyou have already met your true love.";
        cout<<"\nhave a good day!";
  }
  else
  {
	cout<<"\nhave a good day!";
  }
	cout<<endl;

  return 0;
}
