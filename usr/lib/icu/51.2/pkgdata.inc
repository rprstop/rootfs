GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.51.2
COMPILE=arm-poky-linux-gnueabi-gcc  -march=armv7-a -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/htkim84/work/fsl-release-bsp/build/tmp/sysroots/imx6dlsabresd -D_REENTRANT   -DU_ATTRIBUTE_DEPRECATED= -O2 -pipe -g -feliminate-unused-debug-types -Wall -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings  -c
LIBFLAGS=-I/usr/include -DPIC -fPIC
GENLIB=arm-poky-linux-gnueabi-gcc  -march=armv7-a -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/htkim84/work/fsl-release-bsp/build/tmp/sysroots/imx6dlsabresd -O2 -pipe -g -feliminate-unused-debug-types -Wall -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings  -Wl,-O1 -Wl,--hash-style=gnu   -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=arm-poky-linux-gnueabi-ar
ARFLAGS=r
RANLIB=arm-poky-linux-gnueabi-ranlib
INSTALL_CMD=/usr/bin/install -c
