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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x7549c36, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x55248fd5, "regulator_set_voltage" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x6607ca2b, "gpiod_set_consumer_name" },
	{ 0xe4345174, "single_open" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x754d539c, "strlen" },
	{ 0x1cb040d4, "led_trigger_event" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x9b02585d, "single_release" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x9f98429, "gpiod_is_active_low" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5e9a3b01, "gpiod_cansleep" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc86972e, "regulator_is_supported_voltage" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x59fe69ed, "regulator_list_voltage" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xbd2f0cc7, "regulator_count_voltages" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x339c0a66, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x3ebd1582, "devm_gpiod_get_index" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x5a921311, "strncmp" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5d842481, "wakeup_source_unregister" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xdd2dbd24, "pm_generic_suspend" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x39ce92c9, "pm_generic_runtime_suspend" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3a3fc050, "dev_pm_domain_detach" },
	{ 0x22160c22, "gpiod_set_debounce" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x761527a1, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa174f0b, "acpi_find_child_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x9872f12b, "pm_wakeup_ws_event" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0xb5ca6cc6, "pm_generic_resume" },
	{ 0x582a8a4a, "pm_generic_runtime_resume" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x68462f0f, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xeba914dc, "sched_set_fifo_low" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x955c295f, "led_trigger_unregister_simple" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcddf54df, "dev_pm_domain_attach" },
	{ 0x37675f2, "gpiod_toggle_active_low" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0xab1063ca, "led_trigger_register_simple" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xef62ad82, "wakeup_source_register" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D84DB853EEF27AD6B4923F");