a) The data pointed by the pointer is constant, but the pointer itself however may be changed.
const char *p = "ABC"; // Constant data= "ABC", pointer is not const p is a pointer variable, which points to chars. The const word may also be
written after the type:
char const *p = "ABC"; // Constant data= "ABC", pointer is not const Whatever is pointed to by p may not be changed: the chars are declared as
const. The pointer p itself however may be changed.
*p = 'Z'; // Compiler Error! Because data is constant
p++; // OK, because the address in the pointer may change.



b) The pointer itself is a const pointer which may not be changed. Whatever data is pointed to by the pointer may be changed.
char * const sp = "ABC"; *sp = 'Z';
sp++;
// Pointer is constant, data may change
// OK, data is not constant
// Compiler Error! Because pointer is constant
c) Neither the pointer nor what it points to may be changed
const char * const ssp = "ABC"; *ssp = 'Z';
ssp++;
// Pointer and data are constant
// Compiler Error! Because data is constant // Compiler Error! Because pointer is const
The same pointer definition may also be written as follows:
char const * const ssp = "ABC";
 Object Oriented Programming
Casts
Traditionally, C offers the following cast construction: • (typename) expression
Example: f=(float)i/2; //iisintand fisfloat
Following that, C++ initially also supported the function call style cast notation:
• typename(expression)
Example: Converting an integer value to a floating point value
int i=5; float f;
f = float(i)/2;
// i is an integer. Initial value is 5.
// f is an floating point variable.
// first, i is converted to float and then divided by 2.
But, these casts are now called old-style casts, and they are deprecated. Instead, four new-style casts were introduced:
a) static_cast:
The static_cast<type>(expression) operator is used to convert one type to an
acceptable other type.
int i=5;
float f;
f = static_cast<float>(i)/2;
// i is an integer. Initial value is 5.
// f is an floating point variable.
// i is converted to float and divided by 2.
http://www.faculty.itu.edu.tr/buzluca http://www.buzluca.info
©1999-2010 Dr. Feza BUZLUCA 2.14
7
The definition or declaration in which const is used should be read from the variable or function identifier back to the type identifier:
"ssp is a const pointer to const characters"