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
	{ 0x72460c4, "mlx5_fill_page_frag_array" },
	{ 0x16127a89, "mlx5_core_access_reg" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x10824778, "rdma_user_mmap_entry_put" },
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0xe01cc260, "mlx5_cmd_destroy_vport_lag" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9f925b55, "mlx5_free_bfreg" },
	{ 0x953c6e9c, "mlx5_lag_is_active" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x9f8cbf70, "rdma_nl_put_driver_string" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa78d2608, "mlx5_vector2eqn" },
	{ 0xa139afba, "mlx5_eq_destroy_generic" },
	{ 0xb0efcb0b, "mlx5_alloc_bfreg" },
	{ 0x9aaeb375, "mlx5_core_query_ib_ppcnt" },
	{ 0xe03c73ce, "rdma_roce_rescan_device" },
	{ 0x61711e33, "mlx5_rl_remove_rate_raw" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x1083ef0f, "mlx5_cmd_cleanup_async_ctx" },
	{ 0x9cd49678, "mlx5_eq_disable" },
	{ 0xed4fdb7f, "mlx5_qp_debugfs_cleanup" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x642851e8, "ib_umem_copy_from" },
	{ 0xa4e95591, "mlx5_core_modify_cq_moderation" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xa8f9bdb, "mlx5_debugfs_root" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xa4dc7f6e, "mlx5_core_reserved_gids_count" },
	{ 0xa6c03c4, "mlx5_lag_get_peer_mdev" },
	{ 0x19dd2c0a, "mlx5_core_destroy_cq" },
	{ 0xe8074f29, "mlx5_eswitch_get_total_vports" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xc44992ee, "devlink_param_driverinit_value_get" },
	{ 0x6f8d407f, "rdma_port_get_link_layer" },
	{ 0xb8dadbe1, "mlx5_core_modify_tis" },
	{ 0xf6f7fd3a, "ib_dealloc_pd_user" },
	{ 0xa5ea9d59, "mlx5_qp_debugfs_init" },
	{ 0x61e4bb9c, "uverbs_destroy_def_handler" },
	{ 0x8abcd8f6, "rdma_nl_stat_hwcounter_entry" },
	{ 0x3bdbf38f, "__auxiliary_driver_register" },
	{ 0xa9669d09, "mlx5_core_query_mkey" },
	{ 0xf9d28a56, "mlx5_core_modify_rq" },
	{ 0xef93e995, "flow_resources_add" },
	{ 0xca9beaa4, "__xa_store" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xb57db935, "uverbs_copy_to" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x63fe8395, "ib_create_qp_kernel" },
	{ 0xa29eadcd, "ib_port_immutable_read" },
	{ 0x19613624, "mlx5_nic_vport_enable_roce" },
	{ 0x6f4e467c, "mlx5_query_port_oper_mtu" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x4fba453a, "mlx5_core_roce_gid_set" },
	{ 0xca724661, "uverbs_uobject_put" },
	{ 0xee7079f0, "ib_query_pkey" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1e0d08f3, "mlx5_query_hca_vport_context" },
	{ 0x550ce709, "pat_enabled" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xb62decec, "mlx5_nic_vport_unaffiliate_multiport" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa698148c, "mlx5_lag_is_master" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeeb595ff, "mlx5_fc_destroy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x869081e0, "_uverbs_alloc" },
	{ 0x4f653e77, "netdev_master_upper_dev_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x58f8f851, "netdev_master_upper_dev_get_rcu" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe0a45f0e, "mlx5_frag_buf_alloc_node" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xdfa45152, "mlx5_query_hca_vport_pkey" },
	{ 0x1778099a, "mlx5_query_port_vl_hw_cap" },
	{ 0xa626a4a9, "mlx5_eq_notifier_unregister" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc48a80ce, "ib_free_cq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x199addf3, "ib_umem_odp_map_dma_and_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x538811fe, "ib_uverbs_flow_resources_free" },
	{ 0x298f495a, "uverbs_copy_to_struct_or_zero" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xb23adf76, "mlx5_eswitch_get_proto_dev" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x407e68d9, "ib_umem_dmabuf_unmap_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x5012a70, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0xe9cb4e3b, "rdma_user_mmap_entry_insert_range" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3bda3036, "mlx5_eswitch_get_core_dev" },
	{ 0xefb054fd, "ib_modify_qp" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0x6230172c, "__mmdrop" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xb8ba76e4, "rdma_user_mmap_io" },
	{ 0x52047082, "ib_destroy_cq_user" },
	{ 0xd5287269, "mlx5_fc_query" },
	{ 0x2b283c36, "ib_dealloc_device" },
	{ 0x5a57cb85, "mlx5_eswitch_vport_match_metadata_enabled" },
	{ 0x4cf11548, "mlx5_core_modify_cq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x72457a19, "mlx5_eswitch_register_vport_reps" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x28916867, "mlx5_rl_remove_rate" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0x9781e4ef, "mlx5_cmd_exec_cb" },
	{ 0xe5ad0cad, "mlx5_create_lag_demux_flow_table" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6c2ac58, "mlx5_notifier_unregister" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe32e4ce3, "uverbs_fd_class" },
	{ 0x9b4cc51c, "mlx5_nic_vport_disable_roce" },
	{ 0x8512d676, "mlx5_frag_buf_free" },
	{ 0xcb9181d1, "mlx5_query_hca_vport_gid" },
	{ 0xfba04b08, "ib_destroy_qp_user" },
	{ 0x7afbacf8, "mlx5_query_port_max_mtu" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8a1eec48, "__ib_create_cq" },
	{ 0xc23477d, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x66fedccc, "ib_uverbs_get_ucontext_file" },
	{ 0x208e9b07, "mlx5_core_query_vport_counter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1fb8c85, "mlx5_core_query_sq_state" },
	{ 0x36018158, "mlx5_query_hca_vport_system_image_guid" },
	{ 0x7a88367a, "ib_umem_dmabuf_get" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x600a985c, "mlx5_core_modify_sq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe92ca554, "ib_umem_odp_unmap_dma_pages" },
	{ 0x24f322f3, "mlx5_del_flow_rules" },
	{ 0xacc9c7b9, "rdma_user_mmap_entry_get_pgoff" },
	{ 0x4b2a7868, "mlx5_set_port_caps" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0x7d11271e, "nla_put" },
	{ 0x602d42fe, "mlx5_query_nic_vport_node_guid" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4d1fd0fd, "__ib_alloc_cq" },
	{ 0x4925daa7, "ib_query_port" },
	{ 0x26a08c7a, "mlx5_query_ib_port_oper" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xf07d2099, "mlx5_get_uars_page" },
	{ 0xfdbded05, "ib_umem_dmabuf_map_pages" },
	{ 0x8ad4f94e, "mlx5_lag_get_slave_port" },
	{ 0xfdb03ab2, "mlx5_put_uars_page" },
	{ 0xaca9a728, "mlx5_eq_create_generic" },
	{ 0x8dcfb593, "mlx5_cmd_init_async_ctx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4845be4e, "ib_umem_get" },
	{ 0xe303f8c2, "mlx5_query_port_ptys" },
	{ 0x6626afca, "down" },
	{ 0xf5ecce6f, "ib_umem_odp_get" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x96eb2c99, "mlx5_fc_id" },
	{ 0x711d32ca, "mlx5_comp_vectors_count" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x535a596b, "mlx5_get_flow_namespace" },
	{ 0x6b7f0ad5, "mlx5_eswitch_uplink_get_proto_dev" },
	{ 0xcc002b85, "mlx5_destroy_flow_table" },
	{ 0x22749e72, "simple_open" },
	{ 0x49fb00d, "mlx5_add_flow_rules" },
	{ 0x5e446580, "mlx5_lag_get_roce_netdev" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xaa67bb2e, "mlx5_dm_sw_icm_alloc" },
	{ 0x39c977a, "mlx5_core_create_cq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x321f8508, "mlx5_notifier_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2a4536f4, "mlx5_eswitch_unregister_vport_reps" },
	{ 0x64a7b1e1, "mlx5_query_nic_vport_system_image_guid" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x7821ad0, "ib_umem_odp_release" },
	{ 0xf691e356, "mlx5_lag_is_shared_fdb" },
	{ 0xf03ea1a1, "vm_insert_page" },
	{ 0xf0506269, "ib_dispatch_event" },
	{ 0xe8fdac1, "_uverbs_get_const_unsigned" },
	{ 0x6991febb, "rdma_user_mmap_entry_remove" },
	{ 0x8f933fb0, "ib_create_srq_user" },
	{ 0x3ee63dfa, "mlx5_packet_reformat_alloc" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xcc5028b0, "mlx5_eswitch_get_vport_metadata_for_match" },
	{ 0xe2b0a8ea, "mlx5_core_create_rq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa0a49e2, "mlx5_query_min_inline" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x29c84a45, "mlx5_cmd_create_vport_lag" },
	{ 0xc6cbbc89, "capable" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd67aae80, "mlx5_nic_vport_affiliate_multiport" },
	{ 0x7a89b85c, "mlx5_core_create_tis" },
	{ 0x21075824, "__free_pages" },
	{ 0xef66880, "mlx5_eq_notifier_register" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x71c16874, "pcie_relaxed_ordering_enabled" },
	{ 0x53e01ce1, "mlx5_debug_qp_remove" },
	{ 0x761527a1, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x715a43ce, "priv_to_devlink" },
	{ 0x1000e51, "schedule" },
	{ 0x4447148e, "mlx5_rdma_rn_get_params" },
	{ 0x1953c958, "mempool_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x5c944d62, "mlx5_eq_get_eqe" },
	{ 0x46ea3314, "mlx5_cmd_exec" },
	{ 0xebc94807, "auxiliary_driver_unregister" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x43e11534, "ib_find_cached_pkey" },
	{ 0xb6d49b28, "ib_unregister_device" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x88445a61, "ib_destroy_srq_user" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x3f751be6, "ib_umem_odp_alloc_implicit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x74a339e7, "mlx5_packet_reformat_dealloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x98fc1574, "mlx5_core_query_rq" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb6a10453, "flow_resources_alloc" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0xd3354a6, "rdma_alloc_hw_stats_struct" },
	{ 0x6d343dff, "ib_query_qp" },
	{ 0xc1582ba1, "mlx5_rsc_dump_next" },
	{ 0xe9e180d7, "mlx5_eswitch_get_encap_mode" },
	{ 0x16e6d67f, "get_device" },
	{ 0xa663a1d5, "uverbs_finalize_uobj_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4b4eb272, "ib_process_cq_direct" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x38fda586, "mlx5_db_alloc" },
	{ 0x758dfe92, "ib_umem_odp_alloc_child" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x7387d41b, "mlx5_modify_header_dealloc" },
	{ 0x1503d8f0, "mlx5_query_hca_vport_node_guid" },
	{ 0xe6402ac2, "mlx5_core_query_vendor_id" },
	{ 0x49fd9c0c, "mlx5_core_create_rqt" },
	{ 0x7aa04f80, "mlx5_fc_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x965bfe42, "ib_sg_to_pages" },
	{ 0x99c9fdd4, "mlx5_debug_qp_add" },
	{ 0x69acdf38, "memcpy" },
	{ 0x42f780e9, "mlx5_core_create_mkey" },
	{ 0xa376089e, "mlx5_create_auto_grouped_flow_table" },
	{ 0xf35f02f1, "mlx5_eq_update_ci" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x3cded2c8, "mlx5_rl_add_rate" },
	{ 0x10f91c88, "mlx5_core_modify_hca_vport_context" },
	{ 0xcfbd5b44, "ib_umem_find_best_pgsz" },
	{ 0xae864537, "mlx5_core_create_psv" },
	{ 0x40b61ca8, "debugfs_create_atomic_t" },
	{ 0xba70755e, "uverbs_uobject_fd_release" },
	{ 0x61492bb7, "mlx5_rl_are_equal" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0xcf2a6966, "up" },
	{ 0x39642a90, "mlx5_nic_vport_update_local_lb" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x73baf9a2, "ib_modify_qp_is_ok" },
	{ 0xaeae8360, "mlx5_query_nic_vport_qkey_viol_cntr" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xad6815cd, "mlx5_rsc_dump_cmd_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x16fb069e, "__ib_alloc_pd" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x28f094d7, "rdma_read_gid_l2_fields" },
	{ 0xa6f1c1e7, "mlx5_eq_enable" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15d57e69, "mlx5_core_destroy_psv" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x4e775600, "uverbs_idr_class" },
	{ 0x476148f2, "mlx5_rsc_dump_cmd_create" },
	{ 0xe85c7814, "uverbs_get_flags32" },
	{ 0x689a3c70, "mlx5_lag_query_cong_counters" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9f85a98d, "mlx5_rl_add_rate_raw" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0x3e6373b5, "mlx5_eswitch_mode" },
	{ 0x28accfa, "mlx5_core_destroy_mkey" },
	{ 0x87404e11, "mlx5_db_free" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaab4ecdb, "ib_umem_release" },
	{ 0x92aafdfe, "mlx5_dm_sw_icm_dealloc" },
	{ 0x85ea1f67, "mlx5_modify_header_alloc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4b47c82c, "mlx5_eswitch_add_send_to_vport_rule" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "mlx5_core,ib_core,ib_uverbs");

MODULE_ALIAS("auxiliary:mlx5_core.rdma-rep");
MODULE_ALIAS("auxiliary:mlx5_core.multiport");
MODULE_ALIAS("auxiliary:mlx5_core.rdma");

MODULE_INFO(srcversion, "CF360CE94440467A76DA0D8");