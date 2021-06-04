
#include <iostream>

using namespace std;

int main()

{	
	string rec1;
	string rec2;
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cin>>rec1>>rec2;

	int broj1 = rec1[0];
	int broj2 = rec2[0];
	
	if(broj1 > broj2){
		cout<<"abecedni redosled reci "<<rec2<<" "<<rec1;
	}
	if(broj2 > broj1){
		cout<<"abecedni redosled reci "<<rec1<<" "<<rec2;
	}
}
