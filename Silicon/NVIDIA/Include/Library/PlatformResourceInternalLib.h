/** @file
*
*  Copyright (c) 2020-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
*
**/

#ifndef __PLATFORM_RESOURCE_INTERNAL_LIB_H__
#define __PLATFORM_RESOURCE_INTERNAL_LIB_H__

#include <Uefi/UefiBaseType.h>

/**
  Retrieve Tegra UART Base Address

**/
BOOLEAN
EFIAPI
GetTegraUARTBaseAddressInternal (
  OUT EFI_PHYSICAL_ADDRESS  *TegraUARTBaseAddress
  );

/**
  Retrieve the type and address of UART based on the instance Number

**/
BOOLEAN
EFIAPI
GetUARTInstanceInfoInternal (
  OUT UINT32                *UARTInstanceType,
  OUT EFI_PHYSICAL_ADDRESS  *UARTInstanceAddress
  );

/**
  Retrieve chip specific info for GIC

**/
BOOLEAN
EFIAPI
GetGicInfoInternal (
  OUT TEGRA_GIC_INFO  *GicInfo
  );

/**
  Retrieve CPU BL Address

**/
BOOLEAN
EFIAPI
GetCPUBLBaseAddressInternal (
  OUT UINTN  *CpuBootloaderAddress
  );

/**
  Retrieve DTB Address

**/
BOOLEAN
EFIAPI
GetDTBBaseAddressInternal (
  OUT UINT64  *DTBBaseAddress
  );

/**
  Retrieve GR Blob Address

**/
BOOLEAN
EFIAPI
GetGRBlobBaseAddressInternal (
  OUT UINT64  *DTBBaseAddress
  );

/**
  Validate Active Boot Chain

**/
BOOLEAN
EFIAPI
ValidateActiveBootChainInternal (
  VOID
  );

/**
  Set next boot chain

**/
BOOLEAN
EFIAPI
SetNextBootChainInternal (
  IN  UINT32  BootChain
  );

/**
  Get Platform Resource Information

**/
BOOLEAN
EFIAPI
GetPlatformResourceInformationInternal (
  IN TEGRA_PLATFORM_RESOURCE_INFO  *PlatformResourceInfo
  );

#endif //__PLATFORM_RESOURCE_INTERNAL_LIB_H__
