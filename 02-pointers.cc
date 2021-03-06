/**
 *   @file: 02-pointers.cc
 * @author: Nasseef Abukamail
 *   @date: May 26, 2021
 *  @brief: Simple pointers example
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    // pointer to an integer initialize to nullptr
    int *intPtr = nullptr;
    int num = 5;
    //make intPtr point to num's address
    intPtr = &num;
    //output num in two different ways
    cout << "num = " << num << endl;
    cout << "*intPtr = " << *intPtr << endl;
    
    //allocate a new integer
    intPtr = new int;
    *intPtr = 99;

    //make two pointers point to the same location
    int *intPtr2 = intPtr;
    cout << "*intPtr = " << *intPtr << endl;
    cout << "*intPtr2 = " << *intPtr2 << endl;
   

    //modify what intPtr2 is pointing to
    *intPtr2 = 88;
    //this will also change *intPtr
    cout << "*intPtr = " << *intPtr << endl;
    cout << "*intPtr2 = " << *intPtr2 << endl;
   
    //deallocate intPtr, this will make intPtr2 a dangling pointer
    delete intPtr;

    //using the auto declaration
    auto value = 2.3;   // creating a double variable
    auto ptr = &value; //creating a pointer to a double
    *ptr = 12.3;
    cout << "value is now changed to " << value << endl;
    
    return 0;
} /// main