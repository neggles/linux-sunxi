#
# Makefile for the Linux proc filesystem routines.
#

obj-y   += proc.o

CFLAGS_task_mmu.o	+= $(call cc-option,-Wno-override-init,)
ifneq ($(CONFIG_MMU),y)
proc-y			:= nommu.o task_nommu.o
endif
proc-$(CONFIG_MMU)	:= task_mmu.o

proc-y       += inode.o root.o base.o generic.o array.o \
		fd.o
proc-$(CONFIG_TTY)      += proc_tty.o
proc-y	+= cmdline.o
proc-y	+= consoles.o
proc-y	+= interrupts.o
proc-y	+= meminfo.o
proc-y	+= version.o
ifneq ($(CONFIG_SUNXI_FASTBOOT),y)
proc-y	+= cpuinfo.o
proc-y	+= devices.o
proc-y	+= loadavg.o
proc-y	+= stat.o
proc-y	+= uptime.o
proc-y	+= softirqs.o
endif
proc-y	+= namespaces.o
proc-y	+= self.o
proc-y	+= thread_self.o
proc-$(CONFIG_PROC_UID)  += uid.o
proc-$(CONFIG_PROC_SYSCTL)	+= proc_sysctl.o
proc-$(CONFIG_NET)		+= proc_net.o
proc-$(CONFIG_PROC_KCORE)	+= kcore.o
proc-$(CONFIG_PROC_VMCORE)	+= vmcore.o
proc-$(CONFIG_PRINTK)	+= kmsg.o
proc-$(CONFIG_PROC_PAGE_MONITOR)	+= page.o
