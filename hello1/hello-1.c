#include <linux/module.h> /* needed by all modules */
#include <linux/printk.h> /* needed for pr_info() */

int init_module(void)
{
	pr_info("Hello world 1.\n");

	/* a non 0 return means it failed and module can't be loaded. */
	return 1;
}

void cleanup_module(void)
{
	pr_info("Goodbye world 1.\n");
}

MODULE_LICENSE("GPL");
