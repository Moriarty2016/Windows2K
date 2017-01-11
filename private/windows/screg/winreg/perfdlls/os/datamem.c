/*++ 

Copyright (c) 1996  Microsoft Corporation

Module Name:

    datamem.c

Abstract:
       
    a file containing the constant data structures used by the Performance
    Monitor data for the Memory performance data objects

Created:

    Bob Watson  20-Oct-1996

Revision History:

    None.

--*/
//
//  Include Files
//

#include <windows.h>
#include <winperf.h>
#include <ntprfctr.h>
#include <perfutil.h>
#include "datamem.h"

// dummy variable for field sizing.
static MEMORY_COUNTER_DATA  mcd;

//
//  Constant structure initializations 
//      defined in datagen.h
//
MEMORY_DATA_DEFINITION MemoryDataDefinition = {
    {   sizeof(MEMORY_DATA_DEFINITION) + sizeof(MEMORY_COUNTER_DATA),
        sizeof(MEMORY_DATA_DEFINITION),
        sizeof(PERF_OBJECT_TYPE),
        MEMORY_OBJECT_TITLE_INDEX,
        0,
        5,
        0,
        PERF_DETAIL_NOVICE,
        (sizeof(MEMORY_DATA_DEFINITION)-sizeof(PERF_OBJECT_TYPE))/
        sizeof(PERF_COUNTER_DEFINITION),
        8,
        -1,
        UNICODE_CODE_PAGE,
        {0L,0L},
        {0L,0L}        
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        28,
        0,
        29,
        0,
        -1,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.PageFaults),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->PageFaults
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        24,
        0,
        25,
        0,
        -6,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.AvailablePages),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->AvailablePages
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        26,
        0,
        27,
        0,
        -6,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.CommittedPages),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->CommittedPages
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        30,
        0,
        31,
        0,
        -6,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.CommitList),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->CommitList
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        32,
        0,
        33,
        0,
        0,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.WriteCopies),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->WriteCopies
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        34,
        0,
        35,
        0,
        -1,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.TransitionFaults),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->TransitionFaults
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        36,
        0,
        37,
        0,
        -1,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.CacheFaults),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->CacheFaults
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        38,
        0,
        39,
        0,
        -1,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.DemandZeroFaults),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->DemandZeroFaults
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        40,
        0,
        41,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.Pages),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->Pages
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
	822,
        0,
        823,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.PagesInput),
	(DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->PagesInput
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        42,
        0,
        43,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.PageReads),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->PageReads
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        48,
        0,
        49,
        0,
        0,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.DirtyPages),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->DirtyPages
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        56,
        0,
        57,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.PagedPool),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->PagedPool
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        58,
        0,
        59,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.NonPagedPool),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->NonPagedPool
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        50,
        0,
        51,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_COUNTER,
        sizeof(mcd.DirtyWrites),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->DirtyWrites
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        60,
        0,
        61,
        0,
        -2,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_RAWCOUNT,
        sizeof(mcd.PagedPoolAllocs),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->PagedPoolAllocs
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        64,
        0,
        65,
        0,
        -2,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_RAWCOUNT,
        sizeof(mcd.NonPagedPoolAllocs),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->NonPagedPoolAllocs
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        678,
        0,
        679,
        0,
        -2,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_RAWCOUNT,
        sizeof(mcd.FreeSystemPtes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->FreeSystemPtes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        818,
        0,
        819,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.CacheBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->CacheBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        820,
        0,
        821,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.PeakCacheBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->PeakCacheBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        66,
        0,
        63,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.ResidentPagedPoolBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->ResidentPagedPoolBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        68,
        0,
        69,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.TotalSysCodeBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->TotalSysCodeBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        70,
        0,
        71,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.ResidentSysCodeBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->ResidentSysCodeBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        72,
        0,
        73,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.TotalSysDriverBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->TotalSysDriverBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        74,
        0,
        75,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.ResidentSysDriverBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->ResidentSysDriverBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        76,
        0,
        77,
        0,
        -5,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.ResidentSysCacheBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->ResidentSysCacheBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1406,
        0,
        1407,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_RAW_FRACTION,
        sizeof(mcd.CommitBytesInUse),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->CommitBytesInUse
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1406,
        0,
        1407,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_RAW_BASE,
        sizeof(mcd.CommitBytesLimit),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->CommitBytesLimit
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1380,
        0,
        1381,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.AvailableKBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->AvailableKBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1382,
        0,
        1383,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.AvailableMBytes),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->AvailableMBytes
#if 0 	// these are no longer supported
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1374,
        0,
        1375,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.SystemVlmCommitCharge),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->SystemVlmCommitCharge
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1376,
        0,
        1377,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.SystemVlmPeakCommitCharge),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->SystemVlmPeakCommitCharge
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1378,
        0,
        1379,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof(mcd.SystemVlmSharedCommitCharge),
        (DWORD)(ULONG_PTR)&((PMEMORY_COUNTER_DATA)0)->SystemVlmSharedCommitCharge
#endif
    }
};



