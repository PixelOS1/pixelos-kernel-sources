cmd_drivers/video/backlight/modules.order := {   echo drivers/video/backlight/lcd.ko;   echo drivers/video/backlight/platform_lcd.ko;   echo drivers/video/backlight/apple_bl.ko;   echo drivers/video/backlight/backlight.ko;   echo drivers/video/backlight/lp855x_bl.ko;   echo drivers/video/backlight/pwm_bl.ko;   echo drivers/video/backlight/arcxcnn_bl.ko; :; } | awk '!x[$$0]++' - > drivers/video/backlight/modules.order