#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

//PARA COMPILAR SOLO LE HAGO EL "MAKE" DENTRO DE LA TERMINAL

int simple_init(void)
{
       printk(KERN_INFO "Loading Module de simple\n");

       return 0;
}


void simple_exit(void) {
	printk(KERN_INFO "Removing Module de simple\n");
}

module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");

