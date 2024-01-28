# FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

UBOOT_GIT = "git://github.com/prakash56755/uboot-qemu.git;protocol=https"
UBOOT_VAR_BRANCH = "uboot-2022.01/var-uboot"
SRC_URI_variscite-qemuarm64 = "${UBOOT_GIT};branch=${UBOOT_VAR_BRANCH}"

SRC_REV_variscite-qemuarm64 = "dcc855bdb1140e78fb2b4945b3a076e8fbc66e38"
