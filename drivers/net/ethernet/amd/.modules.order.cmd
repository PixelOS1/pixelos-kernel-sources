cmd_drivers/net/ethernet/amd/modules.order := {   echo drivers/net/ethernet/amd/amd8111e.ko;   echo drivers/net/ethernet/amd/nmclan_cs.ko;   echo drivers/net/ethernet/amd/pcnet32.ko;   cat drivers/net/ethernet/amd/xgbe/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/amd/modules.order