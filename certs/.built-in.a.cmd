cmd_certs/built-in.a := echo >/dev/null; rm -f certs/built-in.a; x86_64-pc-linux-gnu-ar cDPrST certs/built-in.a certs/system_keyring.o certs/system_certificates.o certs/common.o certs/blacklist.o certs/blacklist_nohashes.o