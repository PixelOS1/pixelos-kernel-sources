cmd_net/vmw_vsock/modules.order := {   echo net/vmw_vsock/vsock.ko;   echo net/vmw_vsock/vsock_diag.ko;   echo net/vmw_vsock/vmw_vsock_vmci_transport.ko;   echo net/vmw_vsock/vmw_vsock_virtio_transport_common.ko;   echo net/vmw_vsock/vsock_loopback.ko; :; } | awk '!x[$$0]++' - > net/vmw_vsock/modules.order