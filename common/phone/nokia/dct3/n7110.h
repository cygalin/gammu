
#ifndef n7110_h
#define n7110_h

#include "../ncommon.h"
#include "dct3comm.h"

typedef struct {
	GSM_NOKIASMSFolder		LastSMSFolder;
	GSM_SMSFolders			LastSMSFolders;
	GSM_NOKIACalendarLocations	LastCalendar;
	int				FirstCalendarPos;
	GSM_NOKIASMSFolder		LastPictureImageFolder;
	DCT3_WAPSettings_Locations	WAPLocations;
} GSM_Phone_N7110Data;

#ifndef GSM_USED_FBUS2
#  define GSM_USED_FBUS2
#endif
#ifndef GSM_USED_MBUS2
#  define GSM_USED_MBUS2
#endif
#ifndef GSM_USED_IRDA
#  define GSM_USED_IRDA
#endif
#ifndef GSM_USED_DLR3AT
#  define GSM_USED_DLR3AT
#endif
#ifndef GSM_USED_DLR3BLUETOOTH
#  define GSM_USED_DLR3BLUETOOTH
#endif

#endif
