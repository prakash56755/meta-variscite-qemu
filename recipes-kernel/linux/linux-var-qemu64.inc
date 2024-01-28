FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

KBRANCH:variscite-qemuarm64 ?= "5.15/variscite-qemuarm64"
SRCREV_machine:variscite-qemuarm64 ?= "6e4190960a4b24d60336ff5d9c632bbf886dd72e"
SRCREV_meta:variscite-qemuarm64 ?= "feb21d2da563f9bf31c3e8074625d162d9241248"


KERNEL_SRC ?= "git://github.com/prakash56755/linux-qemu.git;protocol=https"
KERNEL_META_SRC ?= "git://github.com/prakash56755/yocto-kernel-cache.git;protocol=https"

SRC_URI = "${KERNEL_SRC};name=machine;branch=${KBRANCH}; \
           ${KERNEL_META_SRC};type=kmeta;name=meta;branch=yocto-5-15/var-kernel-cache;destsuffix=${KMETA}"

LINUX_VERSION = "5.15.124"
KMETA = "kernel-meta"

#To use Yocto kernel cache fragments
COMPATIBLE_MACHINE:variscite-qemuarm64 = "variscite-qemuarm64"
KMACHINE:variscite-qemuarm64 = "variscite-qemuarm64"
LINUX_KERNEL_TYPE:variscite-qemuarm64 = "standard"

#To use Yocto defconfig method
#KCONFIG_MODE:variscite-qemuarm64 = "--alldefconfig"
#KBUILD_DEFCONFIG:variscite-qemuarm64 = "var_qemu_arm64_defconfig"

SRC_URI:append:variscite-qemuarm64 = " \
                 file://0001-disable-bluetooth-on-varsom.patch \
                 file://kernel-debug.cfg"


