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
	{ 0x2ec97348, "kobject_put" },
	{ 0xe6f19b34, "blkdev_issue_discard" },
	{ 0x23c1cf32, "kset_create_and_add" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x104c672, "kernel_write" },
	{ 0xa3016f7, "iget_failed" },
	{ 0x608d0267, "zstd_get_error_code" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa429902b, "blkdev_report_zones" },
	{ 0x1d080a09, "fault_in_iov_iter_readable" },
	{ 0x3b4094fa, "drop_nlink" },
	{ 0x9538db28, "set_anon_super" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xb88e6cc5, "__mark_inode_dirty" },
	{ 0x72e73904, "d_invalidate" },
	{ 0x9b35eb73, "__set_page_dirty_nobuffers" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0x27864d57, "memparse" },
	{ 0x1ff516aa, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa185d328, "inode_permission" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xe00add0f, "generic_write_checks" },
	{ 0x1d396f8, "fsverity_ioctl_measure" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0x8fbd5857, "fsverity_cleanup_inode" },
	{ 0x3cbb940b, "zstd_init_dstream" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7facc0a6, "filemap_write_and_wait_range" },
	{ 0x47709e42, "free_anon_bdev" },
	{ 0x1fdf59d5, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xd14822f0, "migrate_page" },
	{ 0xa247fd92, "find_get_pages_contig" },
	{ 0xad74a67, "kill_anon_super" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x89a0cd52, "crc32c_impl" },
	{ 0x799cb2d5, "dget_parent" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8c683fcd, "posix_acl_to_xattr" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x4ba344d7, "file_ra_state_init" },
	{ 0xc078d22c, "zstd_init_cstream" },
	{ 0x2ec6bba0, "errseq_set" },
	{ 0x59e2d635, "rcuwait_wake_up" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa49731a, "is_bad_inode" },
	{ 0xa257e0e5, "pagecache_get_page" },
	{ 0xbb5cffe8, "folio_wait_bit" },
	{ 0x6d4231e6, "__folio_lock" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xf39a6755, "truncate_inode_pages_range" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x75cc6914, "generic_file_open" },
	{ 0xbabbc577, "posix_acl_access_xattr_handler" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x3922fe2f, "posix_acl_update_mode" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xf25034ce, "vfs_kern_mount" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x164f5714, "tag_pages_for_writeback" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xae45b671, "__percpu_down_read" },
	{ 0xe251c00b, "filemap_read" },
	{ 0xe5b0d31c, "touch_atime" },
	{ 0xb62889fc, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0x1151052, "dput" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc0a7a96f, "sysfs_create_files" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xe091c977, "list_sort" },
	{ 0x6a6b3428, "invalidate_inode_pages2" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0xa21d8b99, "bio_trim" },
	{ 0xb48d4d22, "security_sb_eat_lsm_opts" },
	{ 0x53126ecc, "__percpu_counter_sum" },
	{ 0x311e6907, "bioset_init" },
	{ 0xf5596c3b, "security_sb_remount" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xea6f9a36, "zlib_deflate_dfltcc_enabled" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x288fdd1, "add_to_page_cache_lru" },
	{ 0x46671694, "filemap_fdatawait_range" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0xdfc12ef1, "zstd_decompress_stream" },
	{ 0x373027c0, "set_page_writeback" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x527ea3b0, "d_instantiate_new" },
	{ 0xb7208e8a, "kobject_del" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xee812f9c, "page_cache_sync_ra" },
	{ 0x1c06d09e, "igrab" },
	{ 0x49617c34, "super_setup_bdi" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf19f60b1, "noop_direct_IO" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1697e6f7, "redirty_page_for_writepage" },
	{ 0xb15b4109, "crc32c" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xd90b6e63, "pagevec_lookup_range_tag" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xa64c3892, "set_page_dirty" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xecd7134e, "insert_inode_locked4" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0xe87e3ed0, "truncate_setsize" },
	{ 0xcb2ac8ca, "try_to_release_page" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x9e278e7b, "end_page_writeback" },
	{ 0xc505f552, "wbc_account_cgroup_owner" },
	{ 0xf9644485, "d_delete" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xece784c2, "rb_first" },
	{ 0xa03538ec, "invalidate_bdev" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xef878912, "blkcg_root_css" },
	{ 0x707c6edc, "folio_write_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb6deb300, "inode_update_time" },
	{ 0xc0b2533d, "bio_reset" },
	{ 0x467535d9, "__insert_inode_hash" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x45ca618, "inode_owner_or_capable" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xa164df89, "misc_register" },
	{ 0x135ec1ab, "generic_remap_file_range_prep" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3350a3f6, "bio_associate_blkg_from_css" },
	{ 0x804a5b70, "raid6_call" },
	{ 0xa611ebbc, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0x6aa99869, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0xb2e66caa, "inode_add_bytes" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xe9e5685c, "read_cache_page_gfp" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf110b933, "kthread_associate_blkcg" },
	{ 0xdad63cf7, "folio_account_redirty" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xaeac049a, "generate_random_guid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa7194442, "posix_acl_chmod" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xcdf1a098, "d_obtain_alias" },
	{ 0x7ac64541, "__audit_inode_child" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x3135b16b, "iov_iter_alignment" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0x483499da, "sget" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xee159324, "bio_clone_fast" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0x500ebfc8, "file_remove_privs" },
	{ 0x86bbb805, "fault_in_iov_iter_writeable" },
	{ 0x61ed587e, "blkdev_issue_zeroout" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xf31b3fd1, "workqueue_set_max_active" },
	{ 0xeb3de78a, "crypto_shash_digest" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x24a578b0, "from_kgid" },
	{ 0x68d2307b, "blkdev_get_by_path" },
	{ 0x6e81e8b1, "bio_kmalloc" },
	{ 0xeb384549, "security_inode_init_security" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x664ce393, "file_update_time" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd9585300, "setattr_copy" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0x6185b747, "radix_tree_gang_lookup_tag" },
	{ 0x6626afca, "down" },
	{ 0xfe5eb2fd, "sysfs_merge_group" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xe69c76c5, "wait_on_page_writeback" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x170929f6, "kobj_sysfs_ops" },
	{ 0xdb33efb5, "unlock_two_nondirectories" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4b50bfe7, "truncate_pagecache" },
	{ 0xc9a4b416, "copy_to_user_nofault" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x703b9209, "set_cached_acl" },
	{ 0xb9af1d0d, "__xa_clear_mark" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x48853896, "filemap_fdatawrite_wbc" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xb7c0f443, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0xcbbf89a9, "kobject_add" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0xa5ea959d, "sysfs_unmerge_group" },
	{ 0xa79ef7dd, "__bio_advance" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xfa6214e, "migrate_page_move_mapping" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd333b64, "zstd_end_stream" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcf957b, "posix_acl_create" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x84f0bab7, "balance_dirty_pages_ratelimited" },
	{ 0x141aa120, "__inode_attach_wb" },
	{ 0x73e8d52d, "mount_subtree" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xee4271b9, "bio_put" },
	{ 0x4ea5d10, "ksize" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf826e747, "seq_escape_mem" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x244ac0c2, "mark_page_accessed" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x769f6e64, "errseq_check" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0xc2c5802, "work_busy" },
	{ 0x118ca5d2, "fsverity_verify_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdf75f98e, "mntput" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x6c31a440, "copy_page_from_iter_atomic" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x2398a1e1, "mnt_drop_write_file" },
	{ 0xd68133b, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x176abea4, "xattr_full_name" },
	{ 0x9f984513, "strrchr" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x21075824, "__free_pages" },
	{ 0x969644a7, "__check_sticky" },
	{ 0xff90868c, "blkdev_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x24dc5e6a, "fsverity_file_open" },
	{ 0x33b84f74, "copy_page" },
	{ 0x4e20bcf8, "radix_tree_tag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0xda925de2, "simple_dir_operations" },
	{ 0x2f0755af, "__filemap_set_wb_err" },
	{ 0x113cbd00, "fs_kobj" },
	{ 0x68bc1247, "sync_blockdev" },
	{ 0xf044aec9, "inode_sub_bytes" },
	{ 0xaf2cf77c, "truncate_inode_pages_final" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x6315c42c, "zstd_get_params" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x10077d8f, "filemap_alloc_folio" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xafc6c68e, "zstd_is_error" },
	{ 0xd53b93bc, "blkdev_zone_mgmt" },
	{ 0x69d53cbc, "posix_acl_from_xattr" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x1308720, "bioset_integrity_create" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0x2f1b2f83, "mnt_want_write_file" },
	{ 0x5f6a387, "lock_two_nondirectories" },
	{ 0xb88435bc, "inode_newsize_ok" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0x6e8cc88a, "add_swap_extent" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x50e8ec0d, "iomap_dio_rw" },
	{ 0xa736c36c, "lookup_one" },
	{ 0x5bf43e51, "inode_set_bytes" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0x7018ef9c, "inode_get_bytes" },
	{ 0x8df9dd10, "guid_null" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xafec89e4, "d_prune_aliases" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0x405c8b7a, "migrate_page_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68eeb183, "vfs_setpos" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6efb11a2, "clear_page_dirty_for_io" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xb8f9689f, "path_put" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x844d65c7, "kthread_park" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x89434b4b, "radix_tree_tag_clear" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x3c23631c, "d_tmpfile" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0x28abcbaa, "sysfs_remove_files" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe72cc289, "__pagevec_release" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xbb65888b, "iter_file_splice_write" },
	{ 0xed4bfc27, "wbc_attach_and_unlock_inode" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x84264ced, "fs_umode_to_ftype" },
	{ 0x9703bca3, "kset_unregister" },
	{ 0xb732c3f4, "iput" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xde2af4df, "truncate_pagecache_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x92307bdf, "generic_permission" },
	{ 0x520aa5f7, "inode_dio_wait" },
	{ 0x148974ee, "page_get_link" },
	{ 0x3ed33d00, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x5910b50, "fiemap_prep" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x4de1b089, "current_time" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4fdea54b, "generic_error_remove_page" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x8189c08f, "fsnotify" },
	{ 0xd07f543, "get_anon_bdev" },
	{ 0x751b1796, "kobject_init" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0xcf2a6966, "up" },
	{ 0xc950e760, "invalidate_mapping_pages" },
	{ 0xde09a94d, "xas_find" },
	{ 0x787c882b, "lzo1x_1_compress" },
	{ 0x6f3b0bf5, "fget" },
	{ 0x1057a279, "bsearch" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1803a6ed, "raid6_2data_recov" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xff564be0, "filemap_fdatawrite_range" },
	{ 0x34e4379c, "posix_acl_default_xattr_handler" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0x51c60bea, "bpf_trace_run6" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0xe55b0c77, "security_sb_set_mnt_opts" },
	{ 0x89c93bbb, "kobject_rename" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xd0e07c36, "try_to_writeback_inodes_sb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x1852308, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc0364007, "fault_in_writeable" },
	{ 0x27cb619b, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0x1b2e56a1, "set_blocksize" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x80a717a8, "__percpu_counter_compare" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf2e5bd87, "security_free_mnt_opts" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xaf9d18d5, "discard_new_inode" },
	{ 0xa67ae5a2, "zero_fill_bio" },
	{ 0x71dbb2b, "simple_dir_inode_operations" },
	{ 0xf89be872, "bio_add_zone_append_page" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x899484f0, "filemap_range_has_page" },
	{ 0x3f34644d, "zstd_dstream_workspace_bound" },
	{ 0xffc4f200, "zstd_compress_stream" },
	{ 0xc3805cd1, "fs_ftype_to_dtype" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0xefea2a17, "inode_to_bdi" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0xfbc93035, "__bio_add_page" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xdd05c595, "pagecache_isize_extended" },
	{ 0x2262fa87, "fsverity_ioctl_enable" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd1e9ea77, "wbc_detach_inode" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc82e5f65, "page_cache_async_ra" },
	{ 0x858315a1, "filemap_flush" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x4d1a1724, "file_check_and_advance_wb_err" },
	{ 0x1bc6a123, "clear_nlink" },
	{ 0x8bf51fec, "setattr_prepare" },
	{ 0x7432662d, "vfs_fsync_range" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x49112d97, "migrate_page_copy" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc885951d, "generic_fillattr" },
	{ 0x973371d0, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9eedd85, "__page_file_index" },
	{ 0xabc65b7, "truncate_inode_pages" },
	{ 0x9d26675e, "zstd_cstream_workspace_bound" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "libcrc32c,raid6_pq,xor");


MODULE_INFO(srcversion, "BAC777C9CFE7F2DDFAA2049");