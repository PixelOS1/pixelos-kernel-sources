cmd_sound/soc/amd/modules.order := {   echo sound/soc/amd/acp_audio_dma.ko;   echo sound/soc/amd/snd-soc-acp-da7219mx98357-mach.ko;   echo sound/soc/amd/snd-soc-acp-rt5645-mach.ko;   cat sound/soc/amd/raven/modules.order;   cat sound/soc/amd/renoir/modules.order; :; } | awk '!x[$$0]++' - > sound/soc/amd/modules.order