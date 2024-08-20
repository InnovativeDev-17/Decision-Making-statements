#include<iostream>

using namespace std;

int main()
{
	char a;
	
	cout<<"Enter a character: "<<endl;
	cin>>a;
	
	if(a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' ||  a == 'u')
	{
		cout<<a<<" is a vowel."<<endl;
	}
	else
	{
		cout<<a<<" is a consonant."<<endl;
	}
}/*
Enter a character: 
f
f is a consonant.
*/