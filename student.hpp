#pragma once // prevents multiple definitions

#include <iostream> // print library

// Exercise 1: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

// ===============
// implementations

int add(int a, int b)
{  
   int sum ;
   
   sum = a + b ;
   
   return sum; // TODO: fix
}

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b)
{
   int prod;
   
   prod = a*b;
   
   return prod; // TODO: fix
}
