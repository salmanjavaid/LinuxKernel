#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void){
  printk(KERN_INFO "hello world 1\n");
  return 0;
}

void cleanup_module(void){
  printk(KERN_INFO "good bye hello world 1\n");
}
