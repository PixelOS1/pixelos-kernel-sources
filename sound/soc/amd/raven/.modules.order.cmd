cmd_sound/soc/amd/raven/modules.order := {   echo sound/soc/amd/raven/snd-pci-acp3x.ko;   echo sound/soc/amd/raven/snd-acp3x-pcm-dma.ko;   echo sound/soc/amd/raven/snd-acp3x-i2s.ko; :; } | awk '!x[$$0]++' - > sound/soc/amd/raven/modules.order