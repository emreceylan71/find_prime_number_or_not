﻿
#include <iostream>
using namespace std;

int main()
{
	
	int l,a;
	cout << "You can find prime numbers .\nDo you want to find prime number you choose? \nPlease enter number : ";
	cin >> l ;


	for (int i = 2; i < l; i++) {
		a= l % i ;
		if (a == 0) {
			return cout << "This is not prime number" << endl;
			
		}

	}

	cout << "Yes. This is prime number.";
	
		
	
}

