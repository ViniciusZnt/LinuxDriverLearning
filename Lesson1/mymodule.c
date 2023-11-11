#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_LICENSE("VinciusZnt");
MODULE_LICENSE("Hello World");

//Funcão chamada quando quando o modulo é carregado dentro do kernel

static int __init ModuleInit(void)
{
	printk("Hello,Kernel\n");
	return 0;
}

//Função chamada quando o modulo é removido do kernel

static void __exit ModuleExit(void)
{
	printk("GodBye,Kernek\n");
}
module_init(ModuleInit);
module_exit(ModuleExit);


