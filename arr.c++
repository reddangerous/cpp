#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[6][20]{"programmer","developer","engineer","Student","teacher","proffessor"};//array of arrays
	char name[25];//array of of 25 characters
	int found=0;//space containing integer 0
	cout<<"who are you :";
	cin>>name;
	for(int i=0;i<6;i++) //declaring i with value 0,transversal operation in arr
	{
		if(!strcmp(name,arr[i])){ //function in string.h returning true or false.supplied by line 7 supplied by index: comparing if its true or false
		cout<<"\n conglatulations";
		cout<<"\n You are invited!";
		found = 1;//ew value of 1 
		break;
		
	}
	else
	found++;//found icremented by 1=1
}
if(found !=1){ //
cout<<"\n sorry you are not invited";
cout<<endl;
return 0;}
	}

