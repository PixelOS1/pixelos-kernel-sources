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
	{ 0x2d3385d3, "system_wq" },
	{ 0xabdb3a26, "drm_release" },
	{ 0xd67dfe8f, "sync_file_create" },
	{ 0x1de5879d, "drm_gem_ttm_print_info" },
	{ 0x930341e2, "drm_atomic_get_connector_state" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8342b575, "ttm_bo_eviction_valuable" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa6bb50d7, "ttm_device_fini" },
	{ 0x3b509e53, "ttm_tt_fini" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0xeb5b55ef, "drm_atomic_helper_suspend" },
	{ 0x4dca08ee, "sync_file_get_fence" },
	{ 0x53b954a2, "up_read" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0xd050d01e, "drm_atomic_helper_update_plane" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4823704e, "ttm_bo_move_memcpy" },
	{ 0x18177ab4, "ttm_resource_free" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xe4345174, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xee111615, "param_ops_int" },
	{ 0xbd5f04b4, "ttm_bo_put" },
	{ 0xc563402c, "ttm_resource_init" },
	{ 0x754d539c, "strlen" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xbb525c35, "framebuffer_release" },
	{ 0x2abf640, "drm_atomic_helper_resume" },
	{ 0xf0e02cc6, "drm_mode_config_cleanup" },
	{ 0x582ee7de, "drm_modeset_drop_locks" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x33f3e269, "ttm_bo_vm_open" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x1e0ce865, "ttm_bo_move_to_lru_tail" },
	{ 0xd350b3df, "drm_gem_ttm_dumb_map_offset" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x1c21ecf9, "drm_atomic_helper_page_flip" },
	{ 0x1d4fb5bb, "ttm_sg_tt_init" },
	{ 0x9b02585d, "single_release" },
	{ 0x6727802e, "drm_mode_destroy" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xa2aae103, "ttm_bo_validate" },
	{ 0x79728442, "drm_property_create_range" },
	{ 0xb03f8eaf, "ttm_bo_mmap_obj" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0x1210e335, "ttm_device_init" },
	{ 0x12b843bd, "drm_modeset_backoff" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x79b037b, "__drm_atomic_helper_crtc_reset" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xf8d68b3f, "ttm_resource_manager_init" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x9829ab20, "ttm_resource_compat" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x5cd43d7a, "drm_event_reserve_init" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x4306ced5, "cfb_fillrect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x27e2f863, "dma_map_sgtable" },
	{ 0xf0f41864, "drm_get_unmapped_area" },
	{ 0x999e8297, "vfree" },
	{ 0x28779e52, "drm_printf" },
	{ 0x44c9d63, "drm_vblank_init" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe197eb5e, "drm_encoder_init" },
	{ 0x6758b3b7, "drm_modeset_acquire_fini" },
	{ 0x4cf863fe, "drm_object_property_set_value" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x17660511, "drm_connector_list_iter_next" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0xa3596918, "wp_shared_mapping_range" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x42999e92, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xc7910e38, "drm_vma_offset_lookup_locked" },
	{ 0x8522d6bc, "strncpy_from_user" },
	{ 0x7205ce73, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x94216657, "seq_read" },
	{ 0x6d3587b7, "drm_universal_plane_init" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0x668b19a1, "down_read" },
	{ 0xce77cc63, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x18aad025, "ttm_bo_init_reserved" },
	{ 0x94a7add8, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4226beb7, "drm_atomic_helper_set_config" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa6a7f4da, "unpin_user_page" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x7fb449a, "drm_vma_offset_manager_destroy" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9bef8cb0, "sg_alloc_table_from_pages_segment" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x64dbad54, "drm_dev_unregister" },
	{ 0x379675b9, "cfb_imageblit" },
	{ 0xe7aba2ea, "drm_send_event_locked" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xd2f65d17, "drm_prime_pages_to_sg" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x499c1d15, "__drm_atomic_helper_plane_reset" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x58fec7b4, "drm_helper_mode_fill_fb_struct" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2dd00f02, "drm_object_attach_property" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf6b031bb, "drm_mode_duplicate" },
	{ 0x6e6d333, "drm_crtc_init_with_planes" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc6c981d, "drm_atomic_helper_check_plane_state" },
	{ 0xc4f8bafa, "drm_gem_handle_create" },
	{ 0x82aa5f7a, "dma_buf_fd" },
	{ 0xffb7c514, "ida_free" },
	{ 0xfdde547c, "ttm_bo_kmap" },
	{ 0x10958611, "dma_buf_put" },
	{ 0x85adfc97, "register_framebuffer" },
	{ 0xcbf620d5, "ttm_tt_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x53425a69, "dma_buf_get" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x178cc369, "ttm_eu_fence_buffer_objects" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb881338a, "drm_gem_object_release" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xf7962fc0, "ttm_bo_vm_fault_reserved" },
	{ 0x9954de41, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xdb84d981, "__drm_atomic_helper_connector_reset" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xd690f4b2, "pid_task" },
	{ 0xce727fc8, "drm_event_cancel_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x27310e1a, "drm_file_get_master" },
	{ 0x55bda7c6, "ttm_bo_wait" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1a9ba1, "__task_pid_nr_ns" },
	{ 0x36ab3c2d, "drm_modeset_lock" },
	{ 0x6c72110, "drm_atomic_helper_dirtyfb" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x979cdc87, "ttm_eu_backoff_reservation" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4ca80989, "drm_dev_printk" },
	{ 0x397399da, "drm_plane_cleanup" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xde0a91fe, "drm_connector_list_iter_end" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0x3bc3fd46, "dma_buf_export" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa9227c5e, "drm_gem_private_object_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa3839ec5, "ttm_device_swapout" },
	{ 0x807ef12e, "ww_mutex_trylock" },
	{ 0xefaaa550, "drm_atomic_helper_damage_iter_init" },
	{ 0x69d19772, "ttm_bo_kunmap" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xccc81c03, "drm_sysfs_hotplug_event" },
	{ 0xcb0da58c, "drm_master_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc89a344a, "pin_user_pages" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0xaeb69fbf, "drm_gem_ttm_mmap" },
	{ 0x66cb9ee5, "drm_crtc_send_vblank_event" },
	{ 0xd6fdddea, "drm_gem_object_lookup" },
	{ 0x8784c66, "drm_gem_handle_delete" },
	{ 0x301872de, "drm_mode_object_put" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x41b24a5, "ttm_resource_manager_evict_all" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x57b6efe3, "drm_ioctl_flags" },
	{ 0x2b13688f, "ttm_eu_reserve_buffers" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8812868e, "drm_modeset_acquire_init" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe48beb7e, "drm_connector_unregister" },
	{ 0x508fcdcf, "drm_encoder_cleanup" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xca1b5ed8, "framebuffer_alloc" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9737b73a, "fb_deferred_io_cleanup" },
	{ 0xea7b5b12, "fb_deferred_io_init" },
	{ 0x3f0ab966, "drm_connector_list_iter_begin" },
	{ 0x622fb4dd, "drm_crtc_cleanup" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x30be25a0, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x92569bce, "ttm_range_man_fini_nocheck" },
	{ 0x37a0cba, "kfree" },
	{ 0x22467add, "drm_mode_create_suggested_offset_properties" },
	{ 0x1c4ced47, "unmap_mapping_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x1c4150c0, "fd_install" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x98783514, "unpin_user_pages" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x81e6eb78, "drm_framebuffer_lookup" },
	{ 0x76a31ec1, "ttm_bo_vm_reserve" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0x5738bde2, "drm_modeset_lock_all" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0xe7186c1a, "ttm_pool_alloc" },
	{ 0xbd60321, "ttm_io_prot" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2387097b, "ttm_pool_free" },
	{ 0x99a2a48b, "clean_record_shared_mapping_range" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x72ad465, "dma_resv_wait_timeout" },
	{ 0xf97ddb2a, "cfb_copyarea" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x50aa3fb, "drm_atomic_helper_disable_plane" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x1e83ee0a, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9593710b, "drm_modeset_unlock_all" },
	{ 0x6677e9d6, "drm_dev_dbg" },
	{ 0x2ca2a84e, "ttm_bo_vm_close" },
	{ 0x92cfb348, "devm_memremap" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x9097c3a, "drm_plane_enable_fb_damage_clips" },
	{ 0x56b48e53, "drm_framebuffer_init" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x24cf437a, "drm_vma_node_is_allowed" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3c22a4d8, "drm_vma_offset_manager_init" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x2493f1c0, "drm_gem_ttm_vunmap" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0xb23c0578, "drm_connector_register" },
	{ 0x20978fb9, "idr_find" },
	{ 0xbc1e4729, "dma_resv_add_excl_fence" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xbe94e383, "drm_mode_crtc_set_gamma_size" },
	{ 0xe03a689d, "dma_fence_array_ops" },
	{ 0xb047f4, "drm_mode_object_find" },
	{ 0xfa351c19, "drm_connector_list_update" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd1b2a9b8, "ww_mutex_lock_interruptible" },
	{ 0x213cd84c, "drm_poll" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4017b255, "drm_is_current_master" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xebcd316c, "drm_open" },
	{ 0xe4f6bac8, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xd2f9bc7, "drm_gem_ttm_vmap" },
	{ 0x7c51be4a, "drm_atomic_helper_plane_destroy_state" },
	{ 0x3d1f51f3, "drm_framebuffer_cleanup" },
	{ 0x2db492ac, "ttm_range_man_init_nocheck" },
	{ 0xd5f6d7cc, "unregister_framebuffer" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm,drm_ttm_helper,ttm,drm_kms_helper");

MODULE_ALIAS("pci:v000015ADd00000405sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015ADd00000406sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7CFDC27C690B7C78721C63B");