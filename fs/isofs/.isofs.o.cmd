cmd_fs/isofs/isofs.o := x86_64-pc-linux-gnu-ld -m elf_x86_64   -r -o fs/isofs/isofs.o fs/isofs/namei.o fs/isofs/inode.o fs/isofs/dir.o fs/isofs/util.o fs/isofs/rock.o fs/isofs/export.o fs/isofs/joliet.o fs/isofs/compress.o