cmd_drivers/net/wireless/intel/ipw2x00/modules.order := {   echo drivers/net/wireless/intel/ipw2x00/ipw2100.ko;   echo drivers/net/wireless/intel/ipw2x00/ipw2200.ko;   echo drivers/net/wireless/intel/ipw2x00/libipw.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/intel/ipw2x00/modules.order