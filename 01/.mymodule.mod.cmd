cmd_/home/kshitiz/Desktop/Driver-Tutorial/kernel-drivers/01/mymodule.mod := printf '%s\n'   mymodule.o | awk '!x[$$0]++ { print("/home/kshitiz/Desktop/Driver-Tutorial/kernel-drivers/01/"$$0) }' > /home/kshitiz/Desktop/Driver-Tutorial/kernel-drivers/01/mymodule.mod