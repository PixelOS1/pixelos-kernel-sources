cmd_drivers/video/modules.order := {   cat drivers/video/console/modules.order;   cat drivers/video/backlight/modules.order;   cat drivers/video/fbdev/modules.order;   echo drivers/video/vgastate.ko; :; } | awk '!x[$$0]++' - > drivers/video/modules.order