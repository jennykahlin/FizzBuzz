#include "fizzbuzz.h"

#include <string.h>
#include <stdio.h>

static char fizzbuzz_output[32];

const char* fizzbuzz_say(int number)
{
	memset(fizzbuzz_output, 0, sizeof(fizzbuzz_output));

	if(((number%3) && (number%5))==0){
		printf("Number %d FizzBuzz\n", number);
	}
	else if((number%3)==0){
		printf("Number %d Fizz\n", number);
	}
	else if((number%5)==0){
		printf("Number %d Buzz\n", number);
	}
	else{
		printf("Number %d\n", number);


	return fizzbuzz_output;
}
