#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

#define AUTHOR "Salman Javaid"
#define DESC   "Testing Module"
static int __init hello_world_3_init(void){
  printk(KERN_INFO "hello world 3\n");
  return 0;
}

static void __exit hello_world_3_exit(void){
  printk(KERN_INFO "hello world 3 ends \n");
}


module_init(hello_world_3_init);
module_exit(hello_world_3_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESC);
MODULE_SUPPORTED_DEVICE("TEST");
