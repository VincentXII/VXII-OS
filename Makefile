include Makefile.config

LIBRARY_SOURCES=$(wildcard library/*.c)
LIBRARY_HEADERS=$(wildcard library/*.h)
USER_SOURCES=$(wildcard user/*.c)
USER_PROGRAMS=$(USER_SOURCES:c=exe)
KERNEL_SOURCES=$(wildcard kernel/*.[chS])

all: VXII-OS.iso

run: VXII-OS.iso disk.img
	qemu-system-i386 -cdrom VXII-OS.iso -hda disk.img

debug: VXII-OS.iso disk.img
	qemu-system-i386 -cdrom VXII-OS.iso -hda disk.img -s -S &

disk.img:
	qemu-img create disk.img 10M

library/baselib.a: $(LIBRARY_SOURCES) $(LIBRARY_HEADERS)
	cd library && make

$(USER_PROGRAMS): $(USER_SOURCES) library/baselib.a $(LIBRARY_HEADERS)
	cd user && make

kernel/vxii-os.img: $(KERNEL_SOURCES) $(LIBRARY_HEADERS)
	cd kernel && make

image: kernel/vxii-os.img $(USER_PROGRAMS)
	rm -rf image
	mkdir image image/boot image/bin image/data
	cp kernel/vxii-os.img image/boot
	cp $(USER_PROGRAMS) image/bin
	head -2000 /usr/share/dict/words > image/data/words

VXII-OS.iso: image
	${ISOGEN} -input-charset utf-8 -iso-level 2 -J -R -o $@ -b boot/vxii-os.img image

clean:
	rm -rf VXII-OS.iso image
	cd kernel && make clean
	cd library && make clean
	cd user && make clean
