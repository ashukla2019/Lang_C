#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	// fun_ptr is a pointer to function fun()
	void (*fun_ptr)(int) = &fun; // or void (*fun_ptr)(int) = fun;

	// Invoking fun() using fun_ptr
	(*fun_ptr)(10); // or fun_ptr(10);

	return 0;
}

#include <stdio.h>
void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 15, b = 10;

	printf("Enter Choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n");
	scanf("%d", &ch);

	if (ch > 2) return 0;

	(*fun_ptr_arr[ch])(a, b);

	return 0;
}

//Like normal data pointers, a function pointer can be passed as an argument and can also be 
//returned from a function.
//For example, consider the following C program where wrapper() receives a void fun() as 
//parameter and calls the passed function.
// A simple C program to show function pointers as parameter
#include <stdio.h>

// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
	fun();
}

int main()
{
	wrapper(fun1);
	wrapper(fun2);
	return 0;
}
