#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPLv3");
MODULE_AUTHOR("Trung An");
MODULE_DESCRIPTION("Print `Hello World` to kernel debug log");

static int hello_init(void) {
	printk(KERN_DEBUG "Hello World!");
	return 0;
}

static void hello_exit(void) {
	printk(KERN_DEBUG "Module `hello` exits!");
}

module_init(hello_init);
module_exit(hello_exit);
