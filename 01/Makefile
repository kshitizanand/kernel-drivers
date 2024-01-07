obj-m += mymodule.o

all:
#	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	make -C /home/kshitiz/rpi-kernel/linux M=$(PWD) modules

clean:

	make -C /home/kshitiz/rpi-kernel/linux M=$(PWD) clean
