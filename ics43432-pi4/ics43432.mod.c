#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x826b8746, "module_layout" },
	{ 0x7b1d8007, "platform_driver_unregister" },
	{ 0x62907fd8, "__platform_driver_register" },
	{ 0xface5f83, "devm_snd_soc_register_component" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cinvensense,ics43432");
MODULE_ALIAS("of:N*T*Cinvensense,ics43432C*");
MODULE_ALIAS("of:N*T*Ccui,cmm-4030d-261");
MODULE_ALIAS("of:N*T*Ccui,cmm-4030d-261C*");

MODULE_INFO(srcversion, "F3EFCAB82BE4E3CFC27582B");
