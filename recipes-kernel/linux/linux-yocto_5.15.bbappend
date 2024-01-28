require recipes-kernel/linux/linux-var-qemu64.inc


KERNEL_FEATURES:append:variscite-qemuarm64=" cfg/debug-kselftest.scc features/i2c/i2cdev.scc features/i2c/i2cdbg.scc"
KERNEL_FEATURES:append:variscite-qemuarm64 = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", "cfg/systemd.scc", "", d)}"

#COPY_DEFCONFIG:variscite-qemuarm64 = "no"

#VAR_QEMU_DEFCONFIG = "var_qemu_arm64_defconfig"
#KBUILD_DEFCONFIG:variscite-qemuarm64= "$(VAR_QEMU_DEFCONFIG)"


#do_copy_defconfig_variscite-qemuarm64 () {
#    install -d ${B}
#    if [ ${COPY_DEFCONFIG} = "yes" ]; then
#        mkdir -p ${B}
#       cp ${S}/arch/arm/configs/${VAR_QEMU_DEFCONFIG} ${B}/.config
#   fi
#}