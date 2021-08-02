#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>



static int __init init_hello(void){

        printk(KERN_ALERT "Hello, kernel!\n");

        return 0;

}



static void __exit exit_hello(void){

        printk(KERN_ALERT "Good-bye, kernel!\n");

}



module_init(init_hello);

module_exit(exit_hello);

MODULE_LICENSE("GPL");

