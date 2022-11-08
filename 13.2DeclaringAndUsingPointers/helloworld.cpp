#include <iostream>

int main(){
    // variables store a data type in the computer's memory 
    // pointers store a variable's location in memory
    // int * , string *, char *, double *, float * 

    int *p_number{};
    double *p_fractional_number{};

    // Explicitely initialize to nullptr
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    //Pointers to different variables are  of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // 4
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "" << std::endl;

    std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    std::cout << "" << std::endl;

    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;
    std::cout << "" << std::endl;

    int *p_number5{}, *other_int_var{};
    int *p_number6{}, other_int_var6{};	
    // Confusing as you wonder if other_int_var6 is also a pointer to int. It is not
	// The structure is exactly the same for the previous statement
    std::cout << "" << std::endl;

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;
    //It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time
    std::cout << "" << std::endl;

    //Initializing pointers and assigning them data
    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int{&int_var};// The address of operator (&);
    
    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;
    std::cout << "" << std::endl;


     //You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;
    std::cout << "" << std::endl;

    //Dereferencing a pointer : 
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "value: " << p_int2 << std::endl; //Dereferencing a pointer :

    return 0;
}
