#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/hash.h>
#include <linux/jiffies.h>
#include <asm/param.h>.
//#include <linux/gcd.h>

//PROFESOR EL GCD NO ME FUNCIONABA POR ESO TRATE DE HACER DE ESTA MANERA
unsigned long gcd(unsigned long a, unsigned long b)
{
	unsigned long r;
	if (a < b)
		swap(a, b);
	if (!b)
		return a;
	while ((r = a % b) != 0) {
		a = b;
		b = r;
	}
	return b;
}




int simple_init(void)
{
       printk(KERN_INFO "Loading Module de simple\n");
       printk(KERN_INFO "%lu\n", GOLDEN_RATIO_PRIME);
       printk("Current jiffies: %lu.n", jiffies);
       printk("Current HZ: %lu.n", HZ);

       return 0;
}


void simple_exit(void) {
       unsigned long r = gcd(3300,24);
	printk(KERN_INFO "Removing Module de simple\n");
       printk(KERN_INFO "%lu\n", r);
       printk("Current jiffies: %lu.n", jiffies);
}

module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");

