a) The data pointed by the pointer is constant, but the pointer itself however may be changed.
const char *p = "ABC"; // Constant data= "ABC", pointer is not const p is a pointer variable, which points to chars. The const word may also be
written after the type:
char const *p = "ABC"; // Constant data= "ABC", pointer is not const Whatever is pointed to by p may not be changed: the chars are declared as
const. The pointer p itself however may be changed.
*p = 'Z'; // Compiler Error! Because data is constant
p++; // OK, because the address in the pointer may change.