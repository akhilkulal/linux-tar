#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(hello)

{
    printk("Hello, from inside Linux kernel\n");// ignore colouring here
    printk("Get aside");
    return 0;
}
