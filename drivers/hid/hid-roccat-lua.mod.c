#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

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

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0xf91c29c6, "roccat_common2_receive" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cb929e7, "roccat_common2_send" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002C2E");

MODULE_INFO(srcversion, "65F83C17ADEF9FD4C80DC32");