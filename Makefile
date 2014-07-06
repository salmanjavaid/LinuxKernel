obj-m += hello_world_1.o
obj-m += hello_world_2.o
obj-m += hello_world_3.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean