cmd_drivers/net/phy/modules.order := {   echo drivers/net/phy/mdio_devres.ko;   echo drivers/net/phy/phylink.ko;   echo drivers/net/phy/libphy.ko;   echo drivers/net/phy/sfp.ko;   echo drivers/net/phy/adin.ko;   echo drivers/net/phy/amd.ko;   echo drivers/net/phy/aquantia.ko;   echo drivers/net/phy/at803x.ko;   echo drivers/net/phy/ax88796b.ko;   echo drivers/net/phy/bcm54140.ko;   echo drivers/net/phy/bcm7xxx.ko;   echo drivers/net/phy/bcm87xx.ko;   echo drivers/net/phy/bcm-phy-lib.ko;   echo drivers/net/phy/broadcom.ko;   echo drivers/net/phy/cicada.ko;   echo drivers/net/phy/cortina.ko;   echo drivers/net/phy/davicom.ko;   echo drivers/net/phy/dp83640.ko;   echo drivers/net/phy/dp83822.ko;   echo drivers/net/phy/dp83848.ko;   echo drivers/net/phy/dp83869.ko;   echo drivers/net/phy/fixed_phy.ko;   echo drivers/net/phy/icplus.ko;   echo drivers/net/phy/intel-xway.ko;   echo drivers/net/phy/et1011c.ko;   echo drivers/net/phy/lxt.ko;   echo drivers/net/phy/marvell10g.ko;   echo drivers/net/phy/marvell.ko;   echo drivers/net/phy/mediatek-ge.ko;   echo drivers/net/phy/micrel.ko;   echo drivers/net/phy/microchip.ko;   cat drivers/net/phy/mscc/modules.order;   echo drivers/net/phy/national.ko;   echo drivers/net/phy/qsemi.ko;   echo drivers/net/phy/realtek.ko;   echo drivers/net/phy/smsc.ko;   echo drivers/net/phy/ste10Xp.ko;   echo drivers/net/phy/teranetics.ko;   echo drivers/net/phy/vitesse.ko;   echo drivers/net/phy/xilinx_gmii2rgmii.ko; :; } | awk '!x[$$0]++' - > drivers/net/phy/modules.order