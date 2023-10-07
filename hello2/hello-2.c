#include <linux/init.h> /* needed for the macros */
#include <linux/module.h> /* needed for all modules */
#include <linux/printk.h> /* needed for pr_info() */

static int __init hello_2_init(void)
{
	pr_info("Hello, world 2 \n");
	return 0;
}

static void __exit hello_2_exit(void)
{
	pr_info("Goodbye, world 2\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");
