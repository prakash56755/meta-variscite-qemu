LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=5a7450c57ffe5ae63fd732446b988025"

UBOOT_GIT = "git://github.com/prakash56755/uboot-qemu.git;protocol=https"
UBOOT_VAR_BRANCH = "uboot-2022.01/var-uboot"

SRCREV:variscite-qemuarm64 = "dcc855bdb1140e78fb2b4945b3a076e8fbc66e38"
SRC_URI:variscite-qemuarm64 = "${UBOOT_GIT};branch=${UBOOT_VAR_BRANCH}"
