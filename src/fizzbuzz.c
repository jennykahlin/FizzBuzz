#include "fizzbuzz.h"

#include <string.h>
#include <stdio.h>

static char fizzbuzz_output[32];

const char* fizzbuzz_say(int number)
{
	memset(fizzbuzz_output, 0, sizeof(fizzbuzz_output));

	if(((number%3)==0 && (number%5)==0)){
		sprintf(fizzbuzz_output, "FizzBuzz");
	}
	else if((number%3)==0){
		sprintf(fizzbuzz_output, "Fizz");

	}
	else if((number%5)==0){
		sprintf(fizzbuzz_output, "Buzz");
	}
	else{
		sprintf(fizzbuzz_output, "%d", number);
	}

	return fizzbuzz_output;
}
