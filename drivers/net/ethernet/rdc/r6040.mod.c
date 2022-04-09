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
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x5d34fc48, "phy_ethtool_nway_reset" },
	{ 0x807e060e, "phy_do_ioctl" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xcc2400bd, "phy_start" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xa4394e71, "phy_stop" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0x133536b8, "register_netdev" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0x3d07ff5f, "phy_connect" },
	{ 0x701a3149, "phy_find_first" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb19b445, "ioread8" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7714a710, "__napi_schedule_irqoff" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x754d539c, "strlen" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("pci:v000017F3d00006040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "289EEB308DBD1108C97C1C8");