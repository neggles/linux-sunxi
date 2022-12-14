
/*
* Copyright (c) 2008-2016 Allwinner Technology Co. Ltd.
* All rights reserved.
*
* File : memoryAdapter.h
* Description :
* History :
*   Author  : xyliu <xyliu@allwinnertech.com>
*   Date    : 2016/04/13
*   Comment :
*
*
*/

#ifndef MEMORY_ADAPTER_H
#define MEMORY_ADAPTER_H

#ifdef __cplusplus
extern "C" {
#endif

//* get current ddr frequency, if it is too slow, we will cut some spec off.

struct mem_interface *MemAdapterGetOpsS(void);
struct mem_interface *SecureMemAdapterGetOpsS(void);

#ifdef __cplusplus
}
#endif

#endif /* MEMORY_ADAPTER_H */
