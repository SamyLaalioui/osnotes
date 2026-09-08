/**
 * @brief Math functionality definitions
 * author Samy Laalioui 
 */

#include "coolmath.h"
unsigned int gcd (unsigned int a, unsigned int b) 
{
 unsigned int temp;
 while (b>0)
 {
 temp =b;
 b = a%b;
 a = temp;
 }
 return a;
}

