cmd_drivers/modules.order := {   cat drivers/irqchip/modules.order;   cat drivers/bus/modules.order;   cat drivers/phy/modules.order;   cat drivers/pinctrl/modules.order;   cat drivers/gpio/modules.order;   cat drivers/pwm/modules.order;   cat drivers/pci/modules.order;   cat drivers/video/modules.order;   cat drivers/idle/modules.order;   cat drivers/char/ipmi/modules.order;   cat drivers/acpi/modules.order;   cat drivers/pnp/modules.order;   cat drivers/amba/modules.order;   cat drivers/clk/modules.order;   cat drivers/dma/modules.order;   cat drivers/soc/modules.order;   cat drivers/virtio/modules.order;   cat drivers/xen/modules.order;   cat drivers/regulator/modules.order;   cat drivers/reset/modules.order;   cat drivers/tty/modules.order;   cat drivers/char/modules.order;   cat drivers/iommu/modules.order;   cat drivers/connector/modules.order;   cat drivers/base/modules.order;   cat drivers/block/modules.order;   cat drivers/misc/modules.order;   cat drivers/mfd/modules.order;   cat drivers/nfc/modules.order;   cat drivers/dax/modules.order;   cat drivers/dma-buf/modules.order;   cat drivers/macintosh/modules.order;   cat drivers/scsi/modules.order;   cat drivers/nvme/modules.order;   cat drivers/ata/modules.order;   cat drivers/gpu/modules.order;   cat drivers/spi/modules.order;   cat drivers/net/modules.order;   cat drivers/message/modules.order;   cat drivers/firewire/modules.order;   cat drivers/cdrom/modules.order;   cat drivers/auxdisplay/modules.order;   cat drivers/usb/modules.order;   cat drivers/input/serio/modules.order;   cat drivers/input/modules.order;   cat drivers/rtc/modules.order;   cat drivers/i2c/modules.order;   cat drivers/i3c/modules.order;   cat drivers/media/modules.order;   cat drivers/pps/modules.order;   cat drivers/ptp/modules.order;   cat drivers/power/modules.order;   cat drivers/hwmon/modules.order;   cat drivers/thermal/modules.order;   cat drivers/watchdog/modules.order;   cat drivers/md/modules.order;   cat drivers/accessibility/modules.order;   cat drivers/edac/modules.order;   cat drivers/opp/modules.order;   cat drivers/cpufreq/modules.order;   cat drivers/cpuidle/modules.order;   cat drivers/mmc/modules.order;   cat drivers/leds/modules.order;   cat drivers/firmware/modules.order;   cat drivers/crypto/modules.order;   cat drivers/clocksource/modules.order;   cat drivers/hid/modules.order;   cat drivers/staging/modules.order;   cat drivers/platform/modules.order;   cat drivers/mailbox/modules.order;   cat drivers/virt/modules.order;   cat drivers/devfreq/modules.order;   cat drivers/extcon/modules.order;   cat drivers/powercap/modules.order;   cat drivers/perf/modules.order;   cat drivers/ras/modules.order;   cat drivers/hwtracing/intel_th/modules.order;   cat drivers/nvmem/modules.order;   cat drivers/parport/modules.order;   cat drivers/nvdimm/modules.order;   cat drivers/target/modules.order;   cat drivers/mtd/modules.order;   cat drivers/atm/modules.order;   cat drivers/uio/modules.order;   cat drivers/vfio/modules.order;   cat drivers/pcmcia/modules.order;   cat drivers/block/aoe/modules.order;   cat drivers/input/gameport/modules.order;   cat drivers/bluetooth/modules.order;   cat drivers/memstick/modules.order;   cat drivers/infiniband/modules.order;   cat drivers/dca/modules.order;   cat drivers/ssb/modules.order;   cat drivers/bcma/modules.order;   cat drivers/vhost/modules.order;   cat drivers/soundwire/modules.order;   cat drivers/iio/modules.order;   cat drivers/ntb/modules.order;   cat drivers/mux/modules.order; :; } | awk '!x[$$0]++' - > drivers/modules.order