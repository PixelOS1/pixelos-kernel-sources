cmd_drivers/thermal/intel/modules.order := {   echo drivers/thermal/intel/intel_powerclamp.ko;   echo drivers/thermal/intel/x86_pkg_temp_thermal.ko;   echo drivers/thermal/intel/intel_soc_dts_iosf.ko;   echo drivers/thermal/intel/intel_soc_dts_thermal.ko;   cat drivers/thermal/intel/int340x_thermal/modules.order;   echo drivers/thermal/intel/intel_pch_thermal.ko; :; } | awk '!x[$$0]++' - > drivers/thermal/intel/modules.order