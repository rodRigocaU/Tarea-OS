#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

//LO COMPILO CON EL COMANDO "MAKE" EN LA TERMINAL PONIENDO "obj-m += simple_I.o" EN EL ARCHIVO DE MAKEFILES (SOLO CAMBIANDO LA PRIMERA LINEA)

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

