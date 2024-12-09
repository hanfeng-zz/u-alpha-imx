/* SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause */
/*
 * Copyright (C) 2020-2023 Intel Corporation <www.intel.com>
 */

#ifndef	_CLK_MEM_N5X_
#define	_CLK_MEM_N5X_

#ifndef __ASSEMBLY__
#include <linux/bitops.h>
#endif

/* Clock Manager registers */
#define MEMCLKMGR_STAT					4
#define MEMCLKMGR_INTRGEN				8
#define MEMCLKMGR_INTRMSK				0x0c
#define MEMCLKMGR_INTRCLR				0x10
#define MEMCLKMGR_INTRSTS				0x14
#define MEMCLKMGR_INTRSTK				0x18
#define MEMCLKMGR_INTRRAW				0x1c

/* Memory Clock Manager PPL group registers */
#define MEMCLKMGR_MEMPLL_EN				0x20
#define MEMCLKMGR_MEMPLL_ENS				0x24
#define MEMCLKMGR_MEMPLL_ENR				0x28
#define MEMCLKMGR_MEMPLL_BYPASS				0x2c
#define MEMCLKMGR_MEMPLL_BYPASSS			0x30
#define MEMCLKMGR_MEMPLL_BYPASSR			0x34
#define MEMCLKMGR_MEMPLL_MEMDIV				0x38
#define MEMCLKMGR_MEMPLL_PLLGLOB			0x3c
#define MEMCLKMGR_MEMPLL_PLLCTRL			0x40
#define MEMCLKMGR_MEMPLL_PLLDIV				0x44
#define MEMCLKMGR_MEMPLL_PLLOUTDIV			0x48
#define MEMCLKMGR_MEMPLL_EXTCNTRST			0x4c

#define MEMCLKMGR_CTRL_BOOTMODE				BIT(0)

#define MEMCLKMGR_STAT_MEMPLL_LOCKED			BIT(8)

#define MEMCLKMGR_STAT_ALLPLL_LOCKED_MASK		\
	(MEMCLKMGR_STAT_MEMPLL_LOCKED)

#define MEMCLKMGR_INTER_MEMPLLLOCKED_MASK		BIT(0)
#define MEMCLKMGR_INTER_MEMPLLLOST_MASK			BIT(2)

#define MEMCLKMGR_BYPASS_MEMPLL_ALL			0x1

#define MEMCLKMGR_MEMDIV_MPFEDIV_OFFSET			0
#define MEMCLKMGR_MEMDIV_APBDIV_OFFSET			4
#define MEMCLKMGR_MEMDIV_DFICTRLDIV_OFFSET		8
#define MEMCLKMGR_MEMDIV_DFIDIV_OFFSET			12
#define MEMCLKMGR_MEMDIV_DFICTRLDIV_MASK		BIT(0)
#define MEMCLKMGR_MEMDIV_DIVIDER_MASK			GENMASK(1, 0)

#define MEMCLKMGR_PLLGLOB_PSRC_MASK			GENMASK(17, 16)
#define MEMCLKMGR_PLLGLOB_PSRC_OFFSET			16
#define MEMCLKMGR_PLLGLOB_LOSTLOCK_BYPASS_EN_MASK	BIT(28)
#define MEMCLKMGR_PLLGLOB_CLR_LOSTLOCK_BYPASS_MASK	BIT(29)

#define MEMCLKMGR_PSRC_EOSC1				0
#define MEMCLKMGR_PSRC_INTOSC				1
#define MEMCLKMGR_PSRC_F2S				2

#define MEMCLKMGR_PLLCTRL_BYPASS_MASK			BIT(0)
#define MEMCLKMGR_PLLCTRL_RST_N_MASK			BIT(1)

#define MEMCLKMGR_PLLDIV_DIVR_MASK			GENMASK(5, 0)
#define MEMCLKMGR_PLLDIV_DIVF_MASK			GENMASK(16, 8)
#define MEMCLKMGR_PLLDIV_DIVQ_MASK			GENMASK(26, 24)
#define MEMCLKMGR_PLLDIV_RANGE_MASK			GENMASK(30, 28)

#define MEMCLKMGR_PLLDIV_DIVR_OFFSET			0
#define MEMCLKMGR_PLLDIV_DIVF_OFFSET			8
#define MEMCLKMGR_PLLDIV_DIVQ_QDIV_OFFSET		24
#define MEMCLKMGR_PLLDIV_RANGE_OFFSET			28

#define MEMCLKMGR_PLLOUTDIV_C0CNT_MASK			GENMASK(4, 0)
#define MEMCLKMGR_PLLOUTDIV_C0CNT_OFFSET		0

#define MEMCLKMGR_EXTCNTRST_C0CNTRST			BIT(0)
#define MEMCLKMGR_EXTCNTRST_ALLCNTRST			\
	(MEMCLKMGR_EXTCNTRST_C0CNTRST)

#endif /* _CLK_MEM_N5X_ */
