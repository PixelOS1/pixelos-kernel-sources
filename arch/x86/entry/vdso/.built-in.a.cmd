cmd_arch/x86/entry/vdso/built-in.a := echo >/dev/null; rm -f arch/x86/entry/vdso/built-in.a; x86_64-pc-linux-gnu-ar cDPrST arch/x86/entry/vdso/built-in.a arch/x86/entry/vdso/vma.o arch/x86/entry/vdso/extable.o arch/x86/entry/vdso/vdso32-setup.o arch/x86/entry/vdso/vdso-image-64.o arch/x86/entry/vdso/vdso-image-x32.o arch/x86/entry/vdso/vdso-image-32.o