/*
 *  arch/arm/mach-sun6i/include/mach/io.h
 *
 * Copyright(c) 2012-2016 Allwinnertech Co., Ltd.
 * Author: Benn Huang <benn@allwinnertech.com>
 *	   Sugar <shuge@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.
 */
#ifndef __ASM_ARM_ARCH_IO_H
#define __ASM_ARM_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

/*
 * We don't actually have real ISA nor PCI buses, but there is so many
 * drivers out there that might just work if we fake them...
 */
#define __io(a)		__typesafe_io(a)

#if !defined(SUNXI_IO_PBASE)
#define SUNXI_IO_PBASE		UL(0x01000000)

#if defined(CONFIG_ARCH_SUN8IW11)
#define SUNXI_IO_SIZE		SZ_16M
#elif defined(CONFIG_ARCH_SUN8IW7) || defined(CONFIG_ARCH_SUN8IW6) || defined(CONFIG_ARCH_SUN8IW8P1)
#define SUNXI_IO_SIZE		UL(0x01000000)
#else
#define SUNXI_IO_SIZE		UL(0x0a000000 - 0x01000000)
#endif

#endif

#if !defined(SUNXI_UART_PBASE)
#if defined(CONFIG_ARCH_SUN8IW11) || defined(CONFIG_ARCH_SUN8IW8) || defined(CONFIG_ARCH_SUN8IW7)
#define SUNXI_UART_PBASE		UL(0x01c28000)
#elif defined (CONFIG_ARCH_SUN8IW21)
#define SUNXI_UART_PBASE		UL(0x02500000)
#else
#define SUNXI_UART_PBASE		UL(0x05000000)
#endif
#define SUNXI_UART_SIZE			UL(0x2000)
#endif

#if !defined(UARTIO_ADDRESS)
#define UARTIO_ADDRESS(x)  IOMEM((x) + 0xf0000000)
#endif

#endif /* __ASM_ARM_ARCH_IO_H */
