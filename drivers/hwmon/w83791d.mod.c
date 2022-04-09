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
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x5a7a2318, "devm_i2c_new_dummy_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,hwmon-vid");

MODULE_ALIAS("i2c:w83791d");

MODULE_INFO(srcversion, "730CE8A44830605AA51B8C5");