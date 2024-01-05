#include <linux/module.h>
#include <linux/init.h>
#include <linux/fs.h>

/* META INFO */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kshitiz Anand");
MODULE_DESCRIPTION("Register a device number and implement some callbacks.");

/**
 * @brief This function is called when the device file is opened
 */
static int driver_open(struct inode *device_file, struct file *instance) {
	printk("dev_nr : open was called.\n");
	return 0;
}


/**
 * @brief This function is called when the device file is closed
 */
static int driver_close(struct inode *device_file, struct file *instance) {
	printk("dev_nr : close was called.\n");
	return 0;
}


/**
 * @brief This function is called when
 */
static struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = driver_open,
	.release = driver_close
};


#define MYMAJOR 90
/**
 * @brief This function is called when the module is loaded into kernel
 */
static int __init ModuleInit(void) {
	int retVal = 0;
	printk("Kshitiz: Hello Kernel\n");
	retVal = register_chrdev(MYMAJOR, "kshitiz_dev_nr", &fops);
	if (retVal == 0) {
		printk("dev_nr - regitered Device number Major: %d, Minor: %d", MYMAJOR, 0);
	}
	else if(retVal > 0) {
		printk("dev_nr - regitered Device number Major: %d, Minor: %d", retVal >> 20, retVal&0xfffff);
	}
	else {
		printk("dev_nr - could not register a device!"); 
	}

	return 0;
}

/**
 * @brief This function is called when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
	unregister_chrdev(MYMAJOR, "kshitiz_dev_nr");
	printk("Kshitiz: Bbye Kernel!\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);


