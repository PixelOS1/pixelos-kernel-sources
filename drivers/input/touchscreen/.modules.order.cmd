cmd_drivers/input/touchscreen/modules.order := {   echo drivers/input/touchscreen/atmel_mxt_ts.ko;   echo drivers/input/touchscreen/auo-pixcir-ts.ko;   echo drivers/input/touchscreen/chipone_icn8505.ko;   echo drivers/input/touchscreen/dynapro.ko;   echo drivers/input/touchscreen/edt-ft5x06.ko;   echo drivers/input/touchscreen/gunze.ko;   echo drivers/input/touchscreen/eeti_ts.ko;   echo drivers/input/touchscreen/elants_i2c.ko;   echo drivers/input/touchscreen/elo.ko;   echo drivers/input/touchscreen/egalax_ts_serial.ko;   echo drivers/input/touchscreen/fujitsu_ts.ko;   echo drivers/input/touchscreen/goodix_ts.ko;   echo drivers/input/touchscreen/ili210x.ko;   echo drivers/input/touchscreen/inexio.ko;   echo drivers/input/touchscreen/mcs5000_ts.ko;   echo drivers/input/touchscreen/mms114.ko;   echo drivers/input/touchscreen/mtouch.ko;   echo drivers/input/touchscreen/mk712.ko;   echo drivers/input/touchscreen/usbtouchscreen.ko;   echo drivers/input/touchscreen/penmount.ko;   echo drivers/input/touchscreen/pixcir_i2c_ts.ko;   echo drivers/input/touchscreen/raydium_i2c_ts.ko;   echo drivers/input/touchscreen/silead.ko;   echo drivers/input/touchscreen/sis_i2c.ko;   echo drivers/input/touchscreen/st1232.ko;   echo drivers/input/touchscreen/surface3_spi.ko;   echo drivers/input/touchscreen/touchit213.ko;   echo drivers/input/touchscreen/touchright.ko;   echo drivers/input/touchscreen/touchwin.ko;   echo drivers/input/touchscreen/tsc40.ko;   echo drivers/input/touchscreen/tsc2007.ko;   echo drivers/input/touchscreen/wacom_w8001.ko;   echo drivers/input/touchscreen/wacom_i2c.ko;   echo drivers/input/touchscreen/zet6223.ko;   echo drivers/input/touchscreen/zforce_ts.ko;   echo drivers/input/touchscreen/iqs5xx.ko; :; } | awk '!x[$$0]++' - > drivers/input/touchscreen/modules.order