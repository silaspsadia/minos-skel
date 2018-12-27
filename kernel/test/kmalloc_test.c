#include <libkern/heap.h>
#include <test/kmalloc_test.h>
#include <test/unit.h>

NEW_TEST_SUITE(kmallocTest, 1);

TEST(ShouldNotPanic)
{
	kmalloc(1);
}

END_SUITE();

void kmalloc_test(void)
{
	RUN_SUITE(kmallocTest);
}
