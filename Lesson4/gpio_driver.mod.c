#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91054450, "cdev_init" },
	{ 0xd8348d01, "cdev_add" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x97f6ccb, "gpio_to_desc" },
	{ 0x764e0dec, "gpiod_direction_output_raw" },
	{ 0x4de48976, "gpiod_direction_input" },
	{ 0xfe990052, "gpio_free" },
	{ 0x64c46c83, "device_destroy" },
	{ 0x489cc00b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xfe98eccf, "gpiod_set_raw_value" },
	{ 0x6cc36c3c, "cdev_del" },
	{ 0x3c232389, "gpiod_get_raw_value" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x91422cce, "class_create" },
	{ 0xc2443f79, "device_create" },
	{ 0xe13423fe, "module_layout" },
};

MODULE_INFO(depends, "");

