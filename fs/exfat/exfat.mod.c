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
	{ 0xe6f19b34, "blkdev_issue_discard" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3b4094fa, "drop_nlink" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xd9eeb94f, "sb_min_blocksize" },
	{ 0x53b954a2, "up_read" },
	{ 0x23192af3, "unload_nls" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xb88e6cc5, "__mark_inode_dirty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd1e66572, "__generic_file_fsync" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0x44c1375c, "__fs_parse" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x81840807, "blkdev_issue_flush" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x1151052, "dput" },
	{ 0xd349d253, "seq_printf" },
	{ 0x43dc7314, "get_tree_bdev" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xca5c8d93, "d_find_alias" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x3096be16, "names_cachep" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x46671694, "filemap_fdatawait_range" },
	{ 0x69f8e976, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x2ef4fb01, "__getblk_gfp" },
	{ 0x1c06d09e, "igrab" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe87e3ed0, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x467535d9, "__insert_inode_hash" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x74c2a6e6, "mpage_readpage" },
	{ 0xc23477d, "current_task" },
	{ 0x60d96bae, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa081929e, "d_rehash" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2f784bb9, "write_inode_now" },
	{ 0xf1e046cc, "panic" },
	{ 0x20fc3a97, "mpage_writepages" },
	{ 0x7b99d747, "d_move" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x7f12859a, "__wait_on_buffer" },
	{ 0xd9585300, "setattr_copy" },
	{ 0xf0b9e70, "sync_dirty_buffer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x4b50bfe7, "truncate_pagecache" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xccb23c4, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe824d5f, "__brelse" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe7820b1a, "invalidate_inode_buffers" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x65a4b7bb, "sync_mapping_buffers" },
	{ 0x3942151b, "generic_file_mmap" },
	{ 0x2b6bf121, "block_write_full_page" },
	{ 0x68bc1247, "sync_blockdev" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x21b1b568, "generic_cont_expand_simple" },
	{ 0x32d5a63e, "load_nls" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdfab5c77, "generic_write_end" },
	{ 0x1d5b672e, "__breadahead" },
	{ 0x92997ed8, "_printk" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xa348c43c, "d_drop" },
	{ 0x901cb0ac, "fs_param_is_u32" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x7bca3057, "generic_file_write_iter" },
	{ 0xbb65888b, "iter_file_splice_write" },
	{ 0xb577ef70, "fs_param_is_s32" },
	{ 0x5f19d6c6, "fs_param_is_enum" },
	{ 0xb732c3f4, "iput" },
	{ 0x2aaba111, "cont_write_begin" },
	{ 0x37a0cba, "kfree" },
	{ 0xc221be4e, "iunique" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4de1b089, "current_time" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0x4228d694, "write_dirty_buffer" },
	{ 0xaa8075a, "__set_page_dirty_buffers" },
	{ 0x47494703, "block_truncate_page" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x38b0227e, "__bforget" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x47000950, "__blockdev_direct_IO" },
	{ 0x30b3461d, "inode_needs_sync" },
	{ 0xff564be0, "filemap_fdatawrite_range" },
	{ 0xb1d13541, "__find_get_block" },
	{ 0x7ac17b, "mark_buffer_dirty" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x27cb619b, "new_inode" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0x431ef4e3, "fs_param_is_string" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x68a93784, "generic_block_bmap" },
	{ 0x1bc6a123, "clear_nlink" },
	{ 0x8bf51fec, "setattr_prepare" },
	{ 0xc885951d, "generic_fillattr" },
	{ 0xabc65b7, "truncate_inode_pages" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C259F56F36EC8AF910E43DB");