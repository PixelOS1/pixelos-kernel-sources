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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x37037400, "skb_to_sgvec" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0x349cba85, "strchr" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x7857cdae, "sk_stop_timer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfc041082, "crypto_default_rng" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x7650c19b, "sock_release" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7199dc7d, "sock_recvmsg" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xabd58d1c, "udp_tunnel_xmit_skb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe091c977, "list_sort" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb76c882b, "pskb_put" },
	{ 0x394d699b, "dst_cache_set_ip6" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xd65e4b2a, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd277b621, "dev_nit_active" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x40f50316, "kernel_listen" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcf5e61c4, "sock_rfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xff607c6c, "skb_cow_data" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x4094f035, "udp_sock_create6" },
	{ 0x45ef50b6, "setup_udp_tunnel_sock" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0xece784c2, "rb_first" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2c309f61, "udp_tunnel_sock_release" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x70366ad, "kfree_skb_partial" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0x8518a4a6, "_raw_spin_trylock_bh" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x6230f05, "ip_mc_join_group" },
	{ 0xfb8d6db5, "iov_iter_kvec" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x7d11271e, "nla_put" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x1f5d65b, "dst_cache_get" },
	{ 0x459f3f88, "skb_push" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x87f244b9, "sk_free" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xa07a37f0, "memchr" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xb3356d1d, "crypto_stats_rng_generate" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x15950b0c, "proto_register" },
	{ 0x3bc2a1df, "skb_try_coalesce" },
	{ 0x9f984513, "strrchr" },
	{ 0x14ee637e, "sk_reset_timer" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xeb07167c, "ipv6_dev_find" },
	{ 0x2999843c, "sock_register" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6799d664, "proto_unregister" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x21b84b5e, "put_cmsg" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe4b5ded9, "__pskb_copy_fclone" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x63aa0b54, "kernel_accept" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xdb48a4a6, "udp_tunnel6_xmit_skb" },
	{ 0x4c8ad6b4, "dst_cache_set_ip4" },
	{ 0x3dce5d9, "__ip_dev_find" },
	{ 0x96848186, "scnprintf" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xca9360b5, "rb_next" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd071739c, "udp_sock_create4" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x73012fe3, "trace_output_call" },
	{ 0xa6bbff67, "ip6_dst_hoplimit" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3a9f0715, "sock_i_uid" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x200b2041, "in6addr_any" },
	{ 0xa6a6ff6b, "netlink_net_capable" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "A4038A6E323AC83746FBEBE");