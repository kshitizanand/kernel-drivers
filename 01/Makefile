obj-m += mymodule.o

all:
#	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	make -C ${RPI_KERNEL_SOURCE} M=$(PWD) modules

clean:
	make -C ${RPI_KERNEL_SOURCE} M=$(PWD) clean
#	make -C /home/kshitiz/rpi-kernel/linux M=$(PWD) clean
