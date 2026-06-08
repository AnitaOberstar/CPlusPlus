// TryingMorePointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int SumElements(int A[],int size) {
	int sum = 0;
	/*
	int size = sizeof(A) / sizeof(A[0]);
	cout << "Inside the function size of A = " << size << endl;
	cout << "Inside the function size of sizeof(A) " << sizeof(A) << endl;
	cout << "Inside the function size of sizeof(A[0]) " << sizeof(A[0]) << endl;
	*/
	for (int i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}
int main()
{
    int x = 5;
	int* p = &x; // p is a pointer to an integer, and it holds the address of x
	*p = 10; // This changes the value of x to 10 through the pointer p
	int** q = &p; // q is a pointer to a pointer to an integer, and it holds the address of p
	int*** r = &q; // r is a pointer to a pointer to a pointer to an integer, and it holds the address of q

	cout << "Value of x = " << x << endl;  
	cout << "Value *p = " << *p << endl;
    cout << "address of *q = " << *q << endl;
	cout << "Value of ***r = " << *** r << endl;

	int A[] = { 2, 4, 6, 8, 10 };
	int i;
	for (i = 0; i < 5; i++) {
		cout << "Value of A[i] = " << A[i] << endl;;
		cout << "Address of &A[i] = " << &A[i] << endl;
		cout << "Address of A+1 = " << A+1 << endl;
	}
	
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumElements(A,size);
	
	cout << "size of A = " << size  << endl;
	cout << "Total of A = " << total << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
