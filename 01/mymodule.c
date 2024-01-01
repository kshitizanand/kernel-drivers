#include <linux/module.h>
#include <linux/init.h>

/* META INFO */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kshitiz Anand");
MODULE_DESCRIPTION("A hello world LKM");

/**
 * @brief This function is called when the module is loaded into kernel
 */
static int __init ModuleInit(void) {
	printk("Kshitiz: Hello Kernel\n");
	return 0;
}

/**
 * @brief This function is called when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
	printk("Kshitiz: Bbye Kernel!\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);


