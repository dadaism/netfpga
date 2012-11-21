#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8495e121, "module_layout" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0xc6d08280, "kmalloc_caches" },
	{ 0x5948d9a2, "pci_bus_read_config_byte" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x3b529938, "skb_pad" },
	{ 0x1e16bf1e, "dev_set_drvdata" },
	{ 0x5c176503, "dma_set_mask" },
	{ 0xe4bde001, "pci_disable_device" },
	{ 0x8e0bc35e, "netif_carrier_on" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0x314fc766, "netif_carrier_off" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa5add5ae, "netif_rx" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x707ffd49, "pci_set_master" },
	{ 0xb485052c, "dev_alloc_skb" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x9105f863, "ethtool_op_get_link" },
	{ 0xc9c104d2, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x301fd4a0, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x3b662007, "dev_kfree_skb_irq" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xfd1e5d75, "alloc_netdev_mqs" },
	{ 0xdd189ee, "eth_type_trans" },
	{ 0x7c61340c, "__release_region" },
	{ 0xf541b3ed, "pci_unregister_driver" },
	{ 0xcbcc685e, "ether_setup" },
	{ 0x24f41ee7, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0x71e3cecb, "up" },
	{ 0x3ac990db, "__pci_register_driver" },
	{ 0xc6b77109, "unregister_netdev" },
	{ 0xa86deb5d, "__netif_schedule" },
	{ 0x3c339f27, "consume_skb" },
	{ 0x436c2179, "iowrite32" },
	{ 0xf64deedd, "skb_put" },
	{ 0xf8d7663c, "pci_enable_device" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x1b19af65, "dev_get_drvdata" },
	{ 0x31948a14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000FEEDd00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E9391D3AC606401CB26571");
