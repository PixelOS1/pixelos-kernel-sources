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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x9cf59e7a, "allow_smaller_maxphyaddr" },
	{ 0x808a8088, "handle_guest_split_lock" },
	{ 0xf42fbcfa, "kvm_apic_write_nodecode" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x72664247, "kvm_complete_insn_gp" },
	{ 0x43941bc4, "kvm_vcpu_write_guest" },
	{ 0x7991fd8d, "crash_vmclear_loaded_vmcss" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x91788909, "kvm_cpu_get_interrupt" },
	{ 0x473b7ee5, "kvm_handle_invalid_op" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5bf7cde0, "kvm_mmu_set_ept_masks" },
	{ 0xd0546966, "kvm_inject_page_fault" },
	{ 0xd5b50e3d, "kvm_skip_emulated_instruction" },
	{ 0xf4ad124a, "kvm_require_dr" },
	{ 0x7ff2a104, "__SCT__tp_func_kvm_page_fault" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x41d2f8eb, "__tracepoint_kvm_nested_vmexit_inject" },
	{ 0xee111615, "param_ops_int" },
	{ 0x93a3e40e, "__SCT__tp_func_kvm_ple_window_update" },
	{ 0xcf761ffb, "kvm_emulate_rdpmc" },
	{ 0xf1cd8929, "kvm_read_and_reset_apf_flags" },
	{ 0x17add64b, "gdt_page" },
	{ 0x3f510ff5, "kvm_has_noapic_vcpu" },
	{ 0x2564967a, "kvm_apic_has_interrupt" },
	{ 0xec5fe6e6, "perf_event_release_kernel" },
	{ 0x200f29e2, "kvm_intr_is_single_vcpu" },
	{ 0x707019a, "context_tracking" },
	{ 0x56b86b7f, "__SCK__tp_func_kvm_nested_vmexit_inject" },
	{ 0xe93dfc8c, "__SCT__tp_func_kvm_nested_vmenter_failed" },
	{ 0x6af29021, "kvm_set_msr_common" },
	{ 0xaf2b2931, "__SCK__tp_func_kvm_ple_window_update" },
	{ 0xb6607d8d, "kvm_fast_pio" },
	{ 0x8909e630, "kvm_emulate_invd" },
	{ 0xe95a07e3, "kvm_mmu_invlpg" },
	{ 0x8d50f9e7, "kvm_inject_realmode_interrupt" },
	{ 0x67b85e04, "kvm_vcpu_kick" },
	{ 0x59387ba3, "__SCT__kvm_x86_cache_reg" },
	{ 0x50c61940, "__context_tracking_exit" },
	{ 0x273e2382, "__context_tracking_enter" },
	{ 0x76dc031e, "asm_exc_nmi_noist" },
	{ 0x3ec39da5, "kvm_apic_set_eoi_accelerated" },
	{ 0xccebe892, "__SCK__tp_func_kvm_inj_virq" },
	{ 0x31349c26, "kvm_emulate_wrmsr" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x65f1c7c8, "kvm_emulate_cpuid" },
	{ 0x1f29592e, "__tracepoint_kvm_exit" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x6becaded, "__SCT__tp_func_kvm_inj_virq" },
	{ 0xd2a01246, "kvm_queue_exception_e" },
	{ 0xfdf3c854, "kvm_get_rflags" },
	{ 0x485cd7f6, "kvm_rebooting" },
	{ 0x5faf25, "kvm_vcpu_wake_up" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0x14b653f, "kvm_write_guest_cached" },
	{ 0x46030074, "__hrtimer_get_remaining" },
	{ 0x1d8362ab, "kvm_read_guest" },
	{ 0xcfd0110a, "__SCK__tp_func_kvm_fast_mmio" },
	{ 0x8737531e, "kvm_vcpu_on_spin" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc2ceeb34, "kvm_vcpu_read_guest" },
	{ 0x50b03f5d, "l1tf_vmx_mitigation" },
	{ 0xc3ebe4ac, "__tracepoint_read_msr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xaa319f13, "kvm_get_apic_mode" },
	{ 0x2e011bfa, "kvm_mmu_reset_context" },
	{ 0x3ce7bc8c, "kvm_pmu_trigger_event" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xc1d6a5c4, "kvm_mtrr_get_guest_memory_type" },
	{ 0xb22cb3a2, "__SCK__tp_func_kvm_pml_full" },
	{ 0xef14fd98, "kvm_calc_nested_tsc_multiplier" },
	{ 0xccea4e34, "perf_get_x86_pmu_capability" },
	{ 0x6e841389, "cpu_info" },
	{ 0xe59d77de, "kvm_emulate_instruction" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x18b3d1e, "intel_pt_validate_cap" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9024f443, "mds_user_clear" },
	{ 0xeb7916f8, "__SCK__tp_func_kvm_nested_vmexit" },
	{ 0xd108b12a, "kvm_mmu_page_fault" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc575c737, "debug_locks_off" },
	{ 0xb637410, "cr4_update_irqsoff" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x25c7d678, "kvm_get_dr" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x6a7f84b0, "kvm_set_cr8" },
	{ 0x5012a70, "pv_ops" },
	{ 0xf7767d5f, "kvm_mmu_free_guest_mode_roots" },
	{ 0x48f7ae49, "kvm_set_cr0" },
	{ 0xe43a87b, "kvm_load_guest_xsave_state" },
	{ 0x7b787f44, "__x86_set_memory_region" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x3263c908, "kvm_apic_clear_irr" },
	{ 0x4ceae601, "get_cpu_entry_area" },
	{ 0x616e6c95, "__SCT__tp_func_kvm_exit" },
	{ 0x2d82cc24, "kvm_spec_ctrl_test_value" },
	{ 0x26d4bb26, "kvm_cpu_caps" },
	{ 0x6303c089, "kvm_calc_nested_tsc_offset" },
	{ 0x95609b26, "context_tracking_key" },
	{ 0xb11a0c6f, "kvm_handle_page_fault" },
	{ 0xb06c62a, "kvm_release_page_clean" },
	{ 0xfb08c57f, "__SCK__tp_func_kvm_exit" },
	{ 0xb40b3815, "kvm_set_cr4" },
	{ 0x9d4894c8, "x2apic_mode" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf2df48f3, "__SCT__tp_func_kvm_pml_full" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x28411ed7, "kvm_max_tsc_scaling_ratio" },
	{ 0x159b8d5e, "host_efer" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x5d996b31, "kvm_set_cpu_caps" },
	{ 0x2dcd3213, "kvm_vcpu_read_guest_page" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xe3e88acb, "__get_current_cr3_fast" },
	{ 0x2fd90171, "kvm_get_running_vcpu" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xad351651, "load_pdptrs" },
	{ 0x178e6b8a, "kvm_get_msr" },
	{ 0x68952493, "rcu_note_context_switch" },
	{ 0xb58a11d, "kvm_nr_uret_msrs" },
	{ 0xc23477d, "current_task" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0x3fc3bd72, "kvm_prepare_emulation_failure_exit" },
	{ 0x14d36182, "kvm_get_linear_rip" },
	{ 0xd0459e67, "kvm_has_tsc_control" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x709cd8cb, "kvm_spurious_fault" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x293e69fb, "kvm_emulate_hypercall" },
	{ 0x85d9b73b, "kvm_set_msi_irq" },
	{ 0xefe71b1, "kvm_set_dr" },
	{ 0x682c30f8, "kvm_handle_memory_failure" },
	{ 0x34209e91, "vcpu_load" },
	{ 0x388e0e10, "__SCT__tp_func_kvm_pi_irte_update" },
	{ 0xd9e00f2, "kvm_x86_ops" },
	{ 0x6636c3c9, "irq_set_vcpu_affinity" },
	{ 0x56a4d019, "kvm_get_cr8" },
	{ 0x676109e6, "__SCK__tp_func_kvm_page_fault" },
	{ 0x3b91db5b, "intel_pt_handle_vmx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf5aa85df, "__SCK__kvm_x86_get_cs_db_l_bits" },
	{ 0x51d118a6, "kvm_update_cpuid_runtime" },
	{ 0x696d7e0b, "l1tf_mitigation" },
	{ 0x9b6c0f0, "kvm_set_cr3" },
	{ 0x16cf5268, "kvm_emulate_wbinvd" },
	{ 0x3ce7234, "sched_smt_present" },
	{ 0xbd5c882a, "kvm_init_mmu" },
	{ 0x78330a30, "kvm_apic_update_irr" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0xd35feb8d, "kvm_make_all_cpus_request" },
	{ 0x2410c338, "x86_virt_spec_ctrl" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x6cdc8d1, "kvm_configure_mmu" },
	{ 0x878577df, "kvm_apic_update_ppr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xefa46efe, "handle_fastpath_set_msr_irqoff" },
	{ 0x6243ac82, "__kvm_apic_update_irr" },
	{ 0x83308067, "kvm_cpu_has_interrupt" },
	{ 0x60abf243, "__tracepoint_kvm_inj_virq" },
	{ 0x312d5f8, "kvm_vcpu_deliver_sipi_vector" },
	{ 0x8c341c48, "current_save_fsgs" },
	{ 0xe5b031e8, "kvm_read_l1_tsc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc14c2df4, "kvm_queue_exception_p" },
	{ 0x2e2df7f4, "irq_remapping_cap" },
	{ 0x8f55c4d5, "irq_stat" },
	{ 0x55a090e7, "kvm_mmu_free_roots" },
	{ 0x220a882, "__tracepoint_kvm_page_fault" },
	{ 0x5b71a442, "kvm_load_host_xsave_state" },
	{ 0x17829c1c, "__tracepoint_kvm_entry" },
	{ 0x6d32026b, "kvm_handle_invpcid" },
	{ 0xc04fdf76, "kvm_read_guest_offset_cached" },
	{ 0xd8f4740, "kvm_mce_cap_supported" },
	{ 0x1235000a, "kvm_tsc_scaling_ratio_frac_bits" },
	{ 0xb0adce2, "__SCK__tp_func_kvm_entry" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9283088d, "__SCK__tp_func_kvm_apicv_accept_irq" },
	{ 0x75b30f4a, "__SCK__tp_func_kvm_pi_irte_update" },
	{ 0xe9674a16, "supported_xcr0" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xd9a543ec, "kvm_valid_efer" },
	{ 0x7fe19488, "kvm_add_user_return_msr" },
	{ 0xbaf9d785, "__tss_limit_invalid" },
	{ 0x21075824, "__free_pages" },
	{ 0xc287d96a, "kvm_set_posted_intr_wakeup_handler" },
	{ 0xc475f583, "kvm_write_guest_page" },
	{ 0xd7b4495f, "kvm_vcpu_unmap" },
	{ 0x8b618aa6, "__SCT__tp_func_kvm_nested_vmexit_inject" },
	{ 0x618911fc, "numa_node" },
	{ 0xcdf7b3da, "__tracepoint_kvm_pi_irte_update" },
	{ 0x2115c574, "__tracepoint_kvm_apicv_accept_irq" },
	{ 0xec0f8a4f, "kvm_emulate_rdmsr" },
	{ 0xe4b99951, "kvm_emulate_halt_noskip" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfeaf4cec, "kvm_queue_exception" },
	{ 0xc96d35f4, "report_ignored_msrs" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x26f5017d, "kvm_lapic_set_eoi" },
	{ 0xccf396a3, "x86_perf_get_lbr" },
	{ 0xb23351ae, "kvm_lmsw" },
	{ 0xa2970e65, "kvm_gfn_to_hva_cache_init" },
	{ 0x5c7e9f84, "__SCT__tp_func_kvm_apicv_accept_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x8a9f1fe7, "kvm_requeue_exception_e" },
	{ 0x1e6ca973, "__tracepoint_kvm_pml_full" },
	{ 0x16ac93f6, "kvm_emulate_monitor" },
	{ 0x16c84301, "kvm_init_shadow_ept_mmu" },
	{ 0x778e30b9, "__SCT__tp_func_kvm_cr" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x53614ec, "kvm_set_user_return_msr" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x278d9af2, "kvm_io_bus_write" },
	{ 0xf7b0b405, "__tracepoint_kvm_cr" },
	{ 0xff6c93ea, "kvm_vcpu_gfn_to_page" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x691639a3, "kvm_read_guest_virt" },
	{ 0x39e3c030, "do_trace_read_msr" },
	{ 0xea5cda33, "__SCT__tp_func_kvm_fast_mmio" },
	{ 0x102cca9e, "kvm_task_switch" },
	{ 0x3d5bc601, "kvm_find_cpuid_entry" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2807f101, "kvm_write_guest_virt_system" },
	{ 0x9493fc86, "node_states" },
	{ 0x613a36c1, "perf_event_read_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x91605c4e, "reprogram_gp_counter" },
	{ 0x54c85f47, "kvm_wait_lapic_expire" },
	{ 0xbe51561e, "kvm_lapic_find_highest_irr" },
	{ 0xc4f318a8, "kvm_service_local_tlb_flush_requests" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x52e683bd, "kvm_msr_allowed" },
	{ 0xa802b8fb, "kvm_vcpu_map" },
	{ 0x3dd57207, "kvm_emulate_mwait" },
	{ 0x130fd155, "supported_xss" },
	{ 0xf34dc2ff, "kvm_emulate_halt" },
	{ 0x6340434e, "x86_model" },
	{ 0x205b463d, "kvm_hv_get_assist_page" },
	{ 0x172d809e, "kvm_arch_has_noncoherent_dma" },
	{ 0xbb12fe41, "perf_event_period" },
	{ 0x3ea8b352, "__tracepoint_kvm_fast_mmio" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f5f1527, "kvm_get_msr_common" },
	{ 0xed8832f0, "__tracepoint_kvm_nested_vmenter_failed" },
	{ 0x7cd01777, "reprogram_fixed_counter" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xf518897a, "kvm_mmu_new_pgd" },
	{ 0xd34c5cba, "handle_ud" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x8db74eed, "kvm_read_guest_cached" },
	{ 0xce576a13, "enable_apicv" },
	{ 0x7915cee5, "do_machine_check" },
	{ 0x92364de8, "kvm_vcpu_write_guest_page" },
	{ 0x97de2b83, "debug_locks_silent" },
	{ 0xcb96bf39, "__SCK__tp_func_kvm_cr" },
	{ 0x75a93dbb, "gfn_to_page" },
	{ 0x2d1df5d2, "kvm_fixup_and_inject_pf_error" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x69dddf10, "kvm_emulate_xsetbv" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xa354ca9a, "kvm_lapic_expired_hv_timer" },
	{ 0xd242e2bf, "__kvm_request_immediate_exit" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefad16d, "perf_event_create_kernel_counter" },
	{ 0x2510fc6d, "__SCT__tp_func_kvm_nested_vmexit" },
	{ 0xf881cecd, "load_fixmap_gdt" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x1d013832, "kvm_enable_efer_bits" },
	{ 0x1db1c372, "enable_vmware_backdoor" },
	{ 0xc3329c64, "apic" },
	{ 0x126089cf, "__tracepoint_kvm_nested_vmexit" },
	{ 0x305a916c, "__x86_indirect_thunk_rdi" },
	{ 0x63270977, "kvm_default_tsc_scaling_ratio" },
	{ 0xc071e99f, "__SCT__tp_func_kvm_entry" },
	{ 0x9cb30e9e, "kvm_deliver_exception_payload" },
	{ 0xaa5df6e7, "kvm_set_msr" },
	{ 0xf767ca35, "fixed_percpu_data" },
	{ 0x594aa17f, "kvm_init" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x27046576, "kvm_exit" },
	{ 0x1afd0f3e, "__SCK__tp_func_kvm_nested_vmenter_failed" },
	{ 0x53d9f927, "__SCT__kvm_x86_get_cs_db_l_bits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8840b122, "reprogram_counter" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x2aff68f9, "perf_guest_get_msrs" },
	{ 0x253c5b6d, "kvm_requeue_exception" },
	{ 0xb82c0987, "enable_pmu" },
	{ 0x6988d0ca, "cpu_dr7" },
	{ 0x3ab2794c, "kvm_find_user_return_msr" },
	{ 0x9d14205c, "cr4_read_shadow" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x944882ed, "kvm_has_bus_lock_exit" },
	{ 0xe8afc5a0, "kvm_vcpu_mark_page_dirty" },
	{ 0x84a9629c, "kvm_arch_has_assigned_device" },
	{ 0xef864684, "vcpu_put" },
	{ 0x6bf9f544, "__tracepoint_kvm_ple_window_update" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xd5f8522d, "__SCK__kvm_x86_cache_reg" },
};

MODULE_INFO(depends, "kvm");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0085*");

MODULE_INFO(srcversion, "2353D5F0C999D01F7F0327D");