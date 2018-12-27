#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <math.h>
#include <libkern/constants.h>
#include <libkern/memlayout.h>
#include <libkern/phys_mem.h>
#include <libkern/poison.h>
#include <libkern/virt_mem.h>
#include <libkern/heap.h>

#define MIN_BLOCK_SIZE 	1024
#define HEAP_START_SIZE (8192 / sizeof(header_t))

static header_t base;

// Put your setup routines here (init data structures etc.)
void kheap_init(void)
{
}

// This is the main function for allocating kernel memory
void *kmalloc(size_t nbytes)
{
}

// This is a complement to kmalloc and should be reentrant
void kfree(void *ap)
{
}

// This is a recommended helper function 
void *acquire_more_heap(size_t nunits)
{
}

// You should implement something to reset the heap
// For debugging only (note the __)
void __kheap_reset(void)
{
}
