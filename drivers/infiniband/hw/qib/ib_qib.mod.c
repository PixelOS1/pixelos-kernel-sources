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
	{ 0xa39f67e5, "cdev_alloc" },
	{ 0x5adb1fdf, "rvt_add_rnr_timer" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xc7e8c43a, "rvt_compute_aeth" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x349cba85, "strchr" },
	{ 0xee111615, "param_ops_int" },
	{ 0x79902b78, "rvt_alloc_device" },
	{ 0x754d539c, "strlen" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x7517ac2, "get_tree_single" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xd1213764, "rvt_comm_est" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xa6b9a850, "seq_open" },
	{ 0xe46dadc0, "rvt_restart_sge" },
	{ 0xa1c451, "rvt_copy_sge" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x3e567c2c, "pcie_set_readrq" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x196b051d, "simple_recursive_removal" },
	{ 0xe9a7758d, "lookup_one_len_unlocked" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7eddfca6, "rvt_init_port" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8458819a, "rvt_register_device" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaffe8c3a, "kobject_set_name" },
	{ 0x4541366c, "rvt_rc_error" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xfa6ca004, "driver_for_each_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x1e25bb60, "pcie_get_readrq" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x5e8b9594, "rvt_get_rwqe" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x668b19a1, "down_read" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xca0b8641, "ib_free_send_mad" },
	{ 0xf5461416, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8727cd8c, "__get_task_comm" },
	{ 0x46622c36, "pcie_get_mps" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd7eb31f9, "rvt_mcast_find" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x751449d4, "dca3_get_tag" },
	{ 0xa6a7f4da, "unpin_user_page" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xdbaf1ecf, "rvt_dealloc_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x68294a00, "rvt_cq_enter" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x4a1a6708, "kill_litter_super" },
	{ 0x86632d5a, "default_llseek" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x8ca15d2d, "rvt_qp_iter_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf97510c6, "rvt_qp_iter_next" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x68d212c3, "init_uts_ns" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x331c7db8, "dca_add_requester" },
	{ 0xce807a25, "up_write" },
	{ 0xfec856a9, "pci_request_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe0f60c6d, "rdma_destroy_ah_attr" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x1a9ba1, "__task_pid_nr_ns" },
	{ 0xf0506269, "ib_dispatch_event" },
	{ 0x1740f3c0, "rvt_add_retry_timer_ext" },
	{ 0xaf1178a0, "ib_create_send_mad" },
	{ 0x33758ecf, "ib_post_send_mad" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x3b080755, "ib_port_sysfs_get_ibdev_kobj" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x21075824, "__free_pages" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x7bc8acc, "pcie_set_mps" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc2e6afec, "rvt_rkey_ok" },
	{ 0xa916b694, "strnlen" },
	{ 0xda925de2, "simple_dir_operations" },
	{ 0xf10af411, "rvt_get_credit" },
	{ 0x5fc7e1d5, "pci_free_irq" },
	{ 0x9f271d50, "rvt_send_complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x8735ed3d, "irq_set_affinity_notifier" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc89a344a, "pin_user_pages" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x9b4f8716, "rdma_create_ah" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x5b94c72, "rvt_unregister_device" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x528e364c, "rvt_stop_rc_timers" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x2df8e3a2, "rvt_error_qp" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x4de1b089, "current_time" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xedc03953, "iounmap" },
	{ 0x6a6decb2, "simple_fill_super" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x96848186, "scnprintf" },
	{ 0x4195254f, "class_destroy" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0xe7b52e5f, "mult_to_ib_rate" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7da295e7, "seq_release" },
	{ 0x16a2de10, "param_get_string" },
	{ 0x27cb619b, "new_inode" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0xb4c8e2cc, "lookup_one_len" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x17831320, "dca_remove_requester" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x71dbb2b, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdbd019c4, "ib_wq" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x1aafecfe, "__class_create" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x548c6580, "d_instantiate" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x4ad6faac, "rvt_ruc_loopback" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xe385842, "ib_rvt_state_ops" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf562eb58, "pin_user_pages_fast" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "rdmavt,ib_core,dca");

MODULE_ALIAS("pci:v00001FC1d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00007220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00007322sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9326D0EB1C48DDECC120EB4");