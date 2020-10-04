#include<math.h>  // #(preprocessor directive) include header file math.h

//function to find factorial of a number:
int factorial(int num) //definition of a function :syntax:return_type function_name(arguments)
{ int i,fact=1;
  for( i=1; i<=num ; i++) //forloop_syntax:for(initialization;condition;increment/decrement
   fact *= i;    //recursion(calling a function itself again and again untill loop exits
  return fact;
}

//function to find whether a number is prime or not:
char isprime(int number) //function definition
{ int i;
  for( i=2; i<number ; i++ )//for_loop
   if( number%i == 0 )
      return 'n'; //n=No number is not prime
  if( i==number) 
    return 'y';  //y=Yes number is prime

}

//function to check whether a number is palindrome or not:
char ispalindrome(int number)   //function definition
{ int i, reverse=0;
  for( ; number!=0 ; number/=10 )  //  number/= 10 gives number containing all digits except the last. It's just a way of iterating over digits.
n /= 10 is equivalent to n = n / 10 
   reverse = reverse*10 + number%10;
  if(reverse == number )    //palindrome number is a number if we reverse the digits the output is same
    return 'y';  //y= yes number is a palindrome 
  else
    return 'n';  //n= no, the number is not a palindrome
}

//function to check whether a number is armstrong or not:
char isarmstrong(int num)   
{ int i, arm=0, len=0, Digits[len], num_cpy;
  for( num_cpy=num, i=0 ; num_cpy!=0 ; num_cpy/=10 )//the value of number is passed to copied number to iterate that in loop ,initialization is from zero ,loop stops when number is not equal to 0
  { len++;//len++means every time the loop is iterated the value of len increases by 1
    Digits[i] = num_cpy%10;
  }
  for( i=0; i<len; i++ )//for loop 
   arm += pow(Digits[i],len);  // arm = arm + pow(Digits[i],len)     //pow(base,exponent) eg:pow(5,2)gives 5^2=25  
  if( arm = num ) //if else condition
	  return 'y';
  else 
	  return 'n';
}

//function to find average of two numbers:
int average( int num1, int num2 )    //function definition    //taking two numbers as argument/parametetrs
{ return (num1 + num2)/2;  //returning average of two numbers
}


