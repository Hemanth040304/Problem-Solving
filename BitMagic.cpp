#include <bits/stdc++.h>
using namespace std;

void PrintBin(int n){
	for(int i = 7 ; i > -1 ; i--){
		cout<<((n>>i)&1);
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;

	//Binary values
	for(int i = 0 ; i < 8 ; i++)
	PrintBin(i);

	//	trick 1
	//check even or odd
	if(n&1)cout<<"odd\n";
	else cout<<"even\n";
	

	//trick 2
	//upper case to lower case
	for(char c = 'A' ; c <= 'D' ; c++){
		cout<<c<<"<---";
		PrintBin(c);
	}
	for(char c = 'a' ; c <= 'd' ; c++){
		cout<<c<<"<---";
		PrintBin(c);
	}
	//Upper to Lower --> cout<<char('A'|' ');
	//Lower to Upper --> cout<<char('a'&'_');
	

	//Trick 3 
	// check given number is power of 2
	if(!(n&(n-1))){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
}