# This makefile is taken from the Linux Device Driver 
# 3rd edition book

# If KERNELRELEASE is defined, we've been invoked from the
# kernel build system and can use its language
ifneq ($(KERNELRELEASE),)
	obj-m = hello-module.o

# Otherwise we called directly from the command
# line; invoke the kernel build system
else
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell uname -r)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

endif
