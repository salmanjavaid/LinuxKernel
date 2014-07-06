#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init hello_world_2_init(void){
  printk(KERN_INFO "Hello world2\n");
  return 0;
}


static void __exit hello_world_2_exit(void){
  printk(KERN_INFO "helloworld2 exit\n");
}


module_init(hello_world_2_init);
module_exit(hello_world_2_exit);
