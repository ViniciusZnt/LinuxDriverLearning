#include <linux/module.h>
#include <linux/init.h>
#include <linux/fs.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ViniciusZnt");
MODULE_DESCRIPTION("Register a device number and implement some callback functions");

// Função chamada quando um arquivo de dispositivo é aberto
static int driver_open(struct inode *device_file, struct file *instance)
{
    printk("dev_nr - open was called\n");
    return 0;
}

// Função chamada quando um arquivo de dispositivo é fechado
static int driver_close(struct inode *device_file, struct file *instance)
{
    printk("dev_nr - close was called\n");
    return 0;
}

static struct file_operations fops =
{
    .owner = THIS_MODULE,
    .open = driver_open,
    .release = driver_close,
};

#define MYMAJOR 90

static int __init ModuleInit(void)
{
    int retval;
    printk("Hello kernel\n");
    retval = register_chrdev(MYMAJOR, "dev_nmbr", &fops);
    if (retval == 0)
    {
        printk("dev number registered - Major: %i, Minor: %i\n", MYMAJOR, 0);
    }
    else if (retval > 0) // In this case already exists a device number with this major number
    {
        printk("dev number registered - Device number Major: %i, Minor: %i\n", retval >> 20, retval & 0Xfffff);
    }
    else
    {
        printk("Could not register device number\n");
        return -1;
    }
    return 0;
}

static void __exit ModuleExit(void)
{
    unregister_chrdev(MYMAJOR, "dev_nmbr");
    printk("Goodbye, Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
