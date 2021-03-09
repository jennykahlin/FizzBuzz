#include "fizzbuzz.h"

#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_fizzbuzz_example(void)
{
	TEST_ASSERT_EQUAL_INTEGER(2, 1+1);
}

int main(int argc, char **argv)
{
	UNITY_BEGIN();

	RUN_TEST(test_fizzbuzz_example);

	return UNITY_END();
}
