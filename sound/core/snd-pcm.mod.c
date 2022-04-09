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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x59ceb925, "put_pid" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0xd45009df, "snd_register_device" },
	{ 0xe2c004c0, "snd_device_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x7bbd139b, "remap_vmalloc_range" },
	{ 0xea124bd1, "gcd" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x7b2c562b, "snd_card_file_remove" },
	{ 0xed9661a7, "snd_device_free" },
	{ 0xd490e571, "pid_vnr" },
	{ 0xb7a1dc7, "dma_mmap_attrs" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x61339a67, "snd_power_wait" },
	{ 0x60e5c53e, "snd_device_initialize" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xa267eb70, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xd349d253, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x1a9f2df9, "dma_mmap_noncontiguous" },
	{ 0x3ca4aa48, "dma_alloc_noncontiguous" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2b2a924, "dma_free_noncontiguous" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8371509, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xe20a0229, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xfb578fc5, "memset" },
	{ 0x6ec1522, "dma_sync_sg_for_device" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x6fc0cfdf, "snd_device_new" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x3fb8f9e4, "snd_timer_new" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x643cb3f, "snd_unregister_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2289469e, "dma_need_sync" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x16720bc7, "__devres_alloc_node" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x3cd2da89, "dma_vmap_noncontiguous" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x1402b66d, "snd_card_file_add" },
	{ 0xd2a7c1a0, "snd_ctl_register_ioctl" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc84c0fbe, "dma_alloc_pages" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa4faa6c8, "devres_add" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb297c272, "snd_ctl_remove" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xdf0ca3f4, "cpu_latency_qos_request_active" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf88cc0fc, "snd_info_free_entry" },
	{ 0xfe0c2458, "snd_timer_interrupt" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x8c4c5fbe, "dma_free_pages" },
	{ 0xae48d48e, "dma_sync_sg_for_cpu" },
	{ 0x9d901a17, "dma_mmap_pages" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0xea4769ad, "vm_iomap_memory" },
	{ 0xada31e57, "gen_pool_dma_alloc_align" },
	{ 0x57bf1f64, "dma_vunmap_noncontiguous" },
	{ 0x67f8d0e7, "snd_ctl_get_preferred_subdevice" },
	{ 0x8beac374, "snd_timer_notify" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x50098bcd, "snd_ctl_unregister_ioctl_compat" },
	{ 0x22915e0, "snd_info_create_module_entry" },
	{ 0xea4af12b, "snd_info_register" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x13c576a7, "dma_can_mmap" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "DA9B06C7E8873A9864A1052");