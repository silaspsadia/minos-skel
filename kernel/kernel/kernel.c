#include <stdio.h>

#include <extern/multiboot.h>
#include <kernel/tty.h>
#include <arch/i386/io.h>
#include <arch/i386/idt.h>
#include <arch/i386/gdt.h>
#include <arch/i386/kb.h>
#include <libbap/bap_test.h>
#include <libkern/heap.h>
#include <libkern/phys_mem.h>
#include <libkern/virt_mem.h>

void kernel_welcome(void) {
	terminal_centerwrite("~*~*~*~*~*~*~*~*~*~*~\n");
	terminal_centerwrite("* Welcome to MinOS. *\n");
	terminal_centerwrite("*~*~*~*~*~*~*~*~*~*~*\n\n");
}

void kernel_init(struct multiboot_info *mb) {
	terminal_initialize();
	kernel_welcome();
	gdt_init();
	idt_init();
	phys_memory_init(mb);
	virt_memory_init();
	kernel_heap_init();
	kb_init();
	asm(" sti ");
}

void kernel_main(void) {
	for(;;)
		asm("hlt");
}
