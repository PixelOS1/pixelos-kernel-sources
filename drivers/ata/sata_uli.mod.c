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
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x72033af8, "ata_common_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0x9f5261c4, "ata_bmdma_port_ops" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1dd69ef9, "ata_port_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x63dede30, "ata_pci_bmdma_init" },
	{ 0x98206fd, "ata_pci_sff_init_host" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00005289sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005281sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A378ED60E776C525FC8FD5");