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
	{ 0x2785f9a6, "snd_ac97_write" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0xd349d253, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xb19b445, "ioread8" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1bcd733a, "snd_ac97_suspend" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc495e259, "snd_ac97_bus" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5af3b706, "snd_ac97_mixer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd31061a9, "snd_devm_alloc_dir_pages" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb3165232, "snd_ac97_resume" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-ac97-codec,snd-pcm,snd");

MODULE_ALIAS("pci:v00008086d00002416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002426sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002486sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000069sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000089sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "844F0DAE320C98F3257D9CB");