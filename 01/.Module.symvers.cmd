cmd_/home/kshitiz/Desktop/Driver-Tutorial/kernel-drivers/01/Module.symvers :=  sed 's/ko$$/o/'  /home/kshitiz/Desktop/Driver-Tutorial/kernel-drivers/01/modules.order | scripts/mod/modpost -m -a    -o /home/kshitiz/Desktop/Driver-Tutorial/kernel-drivers/01/Module.symvers -e -i Module.symvers -T - 