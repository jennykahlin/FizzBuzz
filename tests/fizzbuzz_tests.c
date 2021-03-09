#include "..\\src\fizzbuzz.h"

#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_fizzbuzz_1(void)
{
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(-5));
}

void test_fizzbuzz_2(void)
{
	TEST_ASSERT_EQUAL_STRING("-2", fizzbuzz_say(-2));
}

void test_fizzbuzz_3(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(15));
}

void test_fizzbuzz_4(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(45));
}

void test_fizzbuzz_5(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(-75));
}

void test_fizzbuzz_6(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(0));
}

void test_fizzbuzz_7(void)
{
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(5));
}

void test_fizzbuzz_8(void)
{
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(10));
}

void test_fizzbuzz_9(void)
{
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(3));
}

void test_fizzbuzz_10(void)
{
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(6));
}

void test_fizzbuzz_11(void)
{
	TEST_ASSERT_EQUAL_STRING("2", fizzbuzz_say(2));
}

void test_fizzbuzz_12(void)
{
	TEST_ASSERT_EQUAL_STRING("11", fizzbuzz_say(11));
}

int main(int argc, char **argv)
{
	UNITY_BEGIN();

	RUN_TEST(test_fizzbuzz_1);
	RUN_TEST(test_fizzbuzz_2);
	RUN_TEST(test_fizzbuzz_3);
	RUN_TEST(test_fizzbuzz_4);
	RUN_TEST(test_fizzbuzz_5);
	RUN_TEST(test_fizzbuzz_6);
	RUN_TEST(test_fizzbuzz_7);
	RUN_TEST(test_fizzbuzz_8);
	RUN_TEST(test_fizzbuzz_9);
	RUN_TEST(test_fizzbuzz_10);
	RUN_TEST(test_fizzbuzz_11);
	RUN_TEST(test_fizzbuzz_12);

	return UNITY_END();
}
