/*++ BUILD Version: 0001
 *
 *  WOW v1.0
 *
 *  Copyright (c) 1991, Microsoft Corporation
 *
 *  WMSGBM.H
 *  WOW32 16-bit message thunks
 *
 *  History:
 *  Created 11-Mar-1991 by Jeff Parsons (jeffpar)
--*/



/* Function prototypes
 */
PSZ GetBMMsgName(WORD wMsg);

BOOL FASTCALL    ThunkBMMsg16(LPMSGPARAMEX lpmpex); 
VOID FASTCALL    UnThunkBMMsg16(LPMSGPARAMEX lpmpex); 

#define WIN31_BM_CLICK  (WM_USER + 99)

#ifndef BM_CLICK
#define BM_CLICK        0x00F5     // user\server\usersrv.h
#endif
