/**
 *   @file: pointers.cc
 * @author: Nasseef Abukamail
 *   @date: May 26, 2021
 *  @brief: Simple pointers
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
    cout << "num = " << num << endl;
    cout << "*intPtr = " << *intPtr << endl;
    
    //deallocate intPtr 
    delete intPtr;

    return 0;
} /// main