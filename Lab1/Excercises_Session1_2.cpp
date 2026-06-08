// Excercises_Session1_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int a = 127; // global variable

int* myFunc() {
    return &a; // return the address of 'a'
}


// Call by reference
void updateValues(double* value_1, double* value_2)
{
    *value_1 = 45.6;
    *value_2 = 78.9;
}

// Function to swap two values using pointers
void change(int* i, int* j) {
    int temp = *i;  // Store the value pointed by i in a temporary variable
    *i = *j;        // Assign the value pointed by j to the location pointed by i
    *j = temp;      // Assign the temporary value to the location pointed by j
}

// Define the struct Book
struct Book {
    string title;
    string author;
    int pages;
    double price;
};

int fun();  // Function declaration


struct NumberHolder {
    int value;
};

NumberHolder fun1() {
    NumberHolder nh;
    cout << "\n Enter an integer number please: ";
    cin >> nh.value;
    return nh;
}

int main()
{
	//unique pointers are a type of smart pointer in C++ that provides exclusive ownership of a dynamically allocated object. 
    // They automatically manage the memory they point to, ensuring that it is properly released when the unique_ptr goes out of scope. 
    // This helps prevent memory leaks and dangling pointers, as the unique_ptr will automatically delete the associated memory when it is no longer needed.
    /*
    unique_ptr<int> ptr = make_unique<int>(10); // Smart pointer manages memory 
    cout << *ptr << endl;          // Output: 10 (Accessing value) 
    return 0;                      // Memory automatically released 
    */

	// Shared pointers are a type of smart pointer in C++ that allows multiple pointers to share ownership of a dynamically allocated object.
    /*
    shared_ptr<int> sPtr1 = make_shared<int>(100);
    shared_ptr<int> sPtr2 = sPtr1; // Shared ownership 
    cout << "Count: " << sPtr1.use_count() << endl;

    sPtr2.reset(); // Decrease the reference count 
    cout << "Count after reset: " << sPtr1.use_count() << endl;
    */
	//pointers are variables that store memory addresses. They allow you to indirectly access and manipulate data in memory.
    /*
    int x = 20;            // Declare an integer variable and initialize it
    int* ptr = &x;     // Declare a pointer and assign it the address of x

    cout << *ptr;      // Dereference the pointer to get the value of x
    */
    /*
    double x, y, * ptr;   // Declare two double variables (x, y) and a pointer to double (ptr)
	x = 3.14;              // Initialize x with the value 3.14  
    // now, the following two steps

    ptr = &x;             // Assign the address of x to the pointer ptr (ptr now points to x)
    y = *ptr;             // Dereference the pointer ptr to get the value of x and assign it to y

    // are indeed equivalent to the single step:

    y = *&x;              // Dereference the address of x (which is just x) and assign it to y

	cout << y;	  
*/
    /*
    int number = 100; 	 // Initialize an integer variable
    int* ptr = &number; 	 // Pointer ptr stores the address of number
    int** pptr = &ptr;	  // Pointer to pointer pptr stores the address of ptr

    // Printing values using pointer to pointer
    cout << "Value of number: " << number << endl;         // Prints the value of number
    cout << "Value of *ptr: " << *ptr << endl;                    // Dereferencing ptr gives value of number
    cout << "Value of **pptr: " << **pptr << endl;            // Dereferencing pptr gives value of number
*/
    /*
    // Call by reference using pointers
	// In this example, we have a function updateValues that takes two double pointers as parameters.
	// The function updates the values pointed to by these pointers. In the main function, we declare two double variables x and y, and we pass their addresses to the updateValues function. After the function call, we print the updated values of x and y.
	// & is the address-of operator, which gives the memory address of a variable. * is the dereference operator, which allows us to access or modify the value at a given memory address.
    double x = 12.3, y = 56.7;

    // Print values before the function call
    cout << "Before function call: x = " << x << ", y = " << y << endl;

    // Function call
    updateValues(&x, &y);

    // Print values after the function call
    cout << "After function call: x = " << x << ", y = " << y << endl;
    */
    /*
	// In this example, we have a global variable a initialized to 127. The function myFunc returns the address of a. In the main function, we declare a pointer ptr and assign it the value returned by myFunc. We then print the address stored in ptr and the value at that address (which is the value of a).
	// Note that since a is a global variable, it will remain valid for the entire duration of the program, so returning its address from myFunc is safe. However, if we were to return the address of a local variable from a function, it would lead to undefined behavior since the local variable would go out of scope once the function returns.
    int* ptr;
    ptr = myFunc();
    cout << "Pointed address is " << ptr << endl; // ok
    cout << "Value at address is " << *ptr << endl; // ok
*/
    /*
    // In this example, we have a pointer a that points to a string literal "Hello". We print the memory address stored in a, the address of the pointer variable a itself, the constant memory address of the string literal "Hello", and the address of the string literal. Finally, we print the contents of a, which is the string "Hello".
	// Note that string literals are stored in a read-only section of memory, and the pointer a points to the first character of the string. The address of the pointer variable a is different from the address of the string literal, as they are stored in different locations in memory.
    const char* a = "Hello";     // Pointer to a string

    // Display the memory address of the string 
    cout << "a is " << (void*)a << endl;

    // Display the address of the pointer variable 'a'
    cout << "&a is " << (void*)&a << endl;

    // Display the constant memory address of the string
    cout << "Constant address is " << (void*)"Hello" << endl;

    // Display the address of the string 
    cout << "&Constant address is " << (void*)&"Hello" << endl;

    // Prints the string stored at pointer 'a' (i.e. "Hello")
    cout << "a contents =" << a << endl;
    */
    /*
	// In this example, we declare an array of integers with 5 elements and initialize it with the values 1 to 5. We then declare a pointer ptr and initialize it to point to the first element of the array. We use a loop to access and print each element of the array by dereferencing the pointer with an offset (ptr + i).
	// Note that in C++, the name of an array (in this case, arr) can be used as a pointer to its first element. Therefore, when we assign ptr = arr, we are actually assigning the address of the first element of the array to the pointer ptr. The expression *(ptr + i) is used to access the i-th element of the array by adding i to the pointer and then dereferencing it.
    int arr[5] = { 1, 2, 3, 4, 5 };  // Array declaration
    // Pointer initialization to the first element of the array
    int* ptr = arr;

    // Accessing array elements using pointer
    for (int i = 0; i < 5; i++) {

        // Dereferencing pointer to access array elements
        cout << "Element " << i << ": " << *(ptr + i) << endl;

    }
    */
    /*
	// In this example, we declare two integer variables x and c, and a pointer to an integer a. We first assign the address of x to the pointer a and print the value of x and the value pointed to by a (which is also x). Then we assign the address of c to the pointer a and print the value of x, the value pointed to by a (which is now c), and the value of c.
    int x = 55;  	// Declare and initialize x to 55
    int c = 77;  	// Declare and initialize c to 77
    int* a;     	// Declare a pointer to an integer

    a = &x;              // Assign the address of x to the pointer a
    cout << "x==>: " << x << " #a==>: " << *a << endl;

    a = &c;
    cout << "x==>: " << x << " *a==>: " << *a << " c==>: " << c << endl;
*/
    /*
    // In this example, we declare three integer variables value_1, value_2, and value_3 to hold input data. We prompt the user to enter three integers and read them from the standard input. We then compare the values and swap them using the change function to arrange them in ascending order. Finally, we display the sorted data.
    int value_1, value_2, value_3;  // Declare three integer variables to hold input data

    // Prompt the user to enter three data items
    cout << "Arrange three data integers in ascending order\n";
    cout << "*********************\n";
    cout << "Type three data integers ==> : ";
    cin >> value_1 >> value_2 >> value_3;  // Take input from the user

    // Compare and swap the values to arrange them in ascending order
    if (value_1 > value_2)
    change(&value_1, &value_2);  // If value_1 is greater than value_2, swap them
    if (value_2 > value_3)
    change(&value_2, &value_3);  // If value_2 is greater than value_3, swap them
    if (value_1 > value_2)
    change(&value_1, &value_2); // Check again to ensure value_1 and value_2 are in order
    // Display the sorted data
    cout << "Data in ascending order: " << value_1 << " " << value_2 << " " << value_3 << "\n";
    return 0; // Return 0 to indicate successful execution
    */
    
    /*
	// In this example, we define a struct called Book with four members: title, author, pages, and price. We then create an instance of the Book struct called my_book and assign values to its members. Finally, we print the values of the members using the struct instance.
    Book my_book; // Create an instance of the struct Book
    my_book.title = "C++ Programming for Dummy";      // Assign values to the title member of the Book struct
    my_book.author = "unknown";                               // Assign values to the author member of the Book struct
    my_book.pages = 250;     // Assign values to the pages  member of the Book struct
    my_book.price = 29.99;

    // Print the values using the struct members
    cout << "Title: " << my_book.title << endl;
    cout << "Author: " << my_book.author << endl;
    cout << "Pages: " << my_book.pages << endl;
    cout << "Price: " << my_book.price << endl;
    */
    
    //Excercise 4
    /*
	// In this example, we have a function fun that prompts the user to enter an integer and returns 0. In the main function, we call fun twice and store the returned values in variables a and b. We then print the values of a and b.
    int a = fun();
    int b = fun();
    cout << "First value is: " << a << "\n";
    cout << "Second value is: " << b << "\n";
    */
    
    /*
	// In this example, we define a struct called NumberHolder with a single member variable value. We have a function fun1 that prompts the user to enter an integer and returns a NumberHolder instance with the entered value. In the main function, we call fun1 twice to get two NumberHolder instances a and b, and then we print the values stored in a and b.
    NumberHolder a = fun1();
    NumberHolder b = fun1();

    cout << "First value is: " << a.value << "\n";
    cout << "Second value is: " << b.value << "\n";
    */

    return 0;               // Return 0 to indicate successful execution

}

int fun() {
    int number;
    cout << "\n Enter an integer number please: ";
    cin >> number;
    return 0; // Return 0 to indicate successful execution
}
