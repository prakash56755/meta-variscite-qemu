FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

KBRANCH:variscite-qemuarm64 ?= "5.15/variscite-qemuarm64"
SRCREV_machine:variscite-qemuarm64 ?= "33502658ecd9703791427e07a8d2882eaf866d08"
SRCREV_meta:variscite-qemuarm64 ?= "0b4eaee3f5e19fee0f4365f9ff8ff93c905baa5c"


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

KERNEL_DEVICETREE:variscite-qemuarm64 = "variscite/var-qemu-arm64.dtb"

#To use Yocto defconfig method
#KCONFIG_MODE:variscite-qemuarm64 = "--alldefconfig"
#KBUILD_DEFCONFIG:variscite-qemuarm64 = "var_qemu_arm64_defconfig"

SRC_URI:append:variscite-qemuarm64 = " \
                 file://0001-disable-bluetooth-on-varsom.patch \
                 file://kernel-debug.cfg \
                 file://var-driver-enable.cfg"


