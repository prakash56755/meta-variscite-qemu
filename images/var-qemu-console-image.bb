SUMMARY = "A console lite image for variscite qemu"
LICENSE = "MIT"

inherit core-image

## Select Image Features
IMAGE_FEATURES += " \
    ssh-server-openssh \
    debug-tweaks \
    tools-debug \
    eclipse-debug \
    nfs-server \
    nfs-client \
"

CORE_IMAGE_EXTRA_INSTALL += " \
    packagegroup-core-full-cmdline \
    sudo \
    bash \
    git \
    evtest \
    apt \
    dhcpcd \
"