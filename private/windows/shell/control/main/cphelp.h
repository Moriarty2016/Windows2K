//
//  NOTE:  The NetUI group is responsible for a number of applets
//         that are shipped with the base system.  This includes the
//         Network Control Panel Applet (NCPA.CPL), the Server Manager
//         and Services Applets (SRVMGR.CPL), and the UPS Applet (UPS.CPL).
//
//         To prevent help context conflicts between the NetUI applets
//         and the "standard" system applets, the NetUI group hereby
//         reserves the help contexts in the range 40000 - 59999.  This
//         will provide plenty of breathing room for future NetUI applets.
//

#define IDH_NETUI_FIRST 40000
#define IDH_NETUI_LAST  59999

#define IDH_HELPFIRST        5000
#define IDH_SYSMENU     (IDH_HELPFIRST + 2000)
#define IDH_MBFIRST     (IDH_HELPFIRST + 2001)
#define IDH_DLG_FONT2   (IDH_HELPFIRST + 2002)
#define IDH_MBLAST      (IDH_HELPFIRST + 2099)
#define IDH_DLGFIRST    (IDH_HELPFIRST + 3000)
#define IDH_SCRNSAVE    (IDH_HELPFIRST + 4000)


#define IDH_SPOOLER_OFFSET 5000
#define IDH_DISPLAY_OFFSET 6000

#define IDH_MENU_SCHHELP    (IDH_HELPFIRST + MENU_SCHHELP)
#define IDH_MENU_INDHELP    (IDH_HELPFIRST + MENU_INDHELP)
#define IDH_MENU_USEHELP    (IDH_HELPFIRST + MENU_USEHELP)
#define IDH_MENU_ABOUT      (IDH_HELPFIRST + MENU_ABOUT )
#define IDH_MENU_EXIT       (IDH_HELPFIRST + MENU_EXIT)
#define IDH_CHILD_COLOR     (IDH_HELPFIRST + CHILD_COLOR)
#define IDH_CHILD_PRINTER   (IDH_HELPFIRST + CHILD_PRINTER)
#define IDH_CHILD_FONT      (IDH_HELPFIRST + CHILD_FONT )
#define IDH_CHILD_INTL      (IDH_HELPFIRST + CHILD_INTL )
#define IDH_CHILD_PORTS     (IDH_HELPFIRST + CHILD_PORTS)
#define IDH_CHILD_KEYBOARD  (IDH_HELPFIRST + CHILD_KEYBOARD )
#define IDH_CHILD_MOUSE     (IDH_HELPFIRST + CHILD_MOUSE)
#define IDH_CHILD_DATETIME  (IDH_HELPFIRST + CHILD_DATETIME )
#define IDH_CHILD_DESKTOP   (IDH_HELPFIRST + CHILD_DESKTOP)
#define IDH_CHILD_SOUND     (IDH_HELPFIRST + CHILD_SOUND)
#define IDH_CHILD_NETWORK   (IDH_HELPFIRST + CHILD_NETWORK)
#define IDH_CHILD_SYSTEM    (IDH_HELPFIRST + CHILD_SYSTEM)
#define IDH_CHILD_MIDI      (IDH_HELPFIRST + 122)           // MM midi
#define IDH_CHILD_SND       (IDH_HELPFIRST + 121)           // MM sound
#define IDH_CHILD_DRIVERS   (IDH_HELPFIRST + 120)           // MM drivers
#define IDH_CHILD_CURSORS   (IDH_HELPFIRST + 119)
#define IDH_DLG_CURBROWSE   (IDH_HELPFIRST + 118)

#define IDH_DLG_CONFLICT    (IDH_DLGFIRST + DLG_CONFLICT)
#define IDH_DLG_ADDFILE     (IDH_DLGFIRST + DLG_ADDFILE)
#define IDH_DLG_INTLDATE    (IDH_DLGFIRST + DLG_INTLDATE)
#define IDH_DLG_INTLTIME    (IDH_DLGFIRST + DLG_INTLTIME)
#define IDH_DLG_INTLNUM     (IDH_DLGFIRST + DLG_INTLNUM)
#define IDH_DLG_INTLCUR     (IDH_DLGFIRST + DLG_INTLCUR)
#define IDH_DLG_NETPRINT    (IDH_DLGFIRST + DLG_NETPRN)

#define IDH_DLG_PATTERN     (IDH_DLGFIRST + DLG_PATTERN)
#define IDH_DLG_PORTS2      (IDH_DLGFIRST + DLG_PORTS2)
#define IDH_DLG_PORTS3      (IDH_DLGFIRST + DLG_PORTS3)
#define IDH_DLG_MOUSE       (IDH_DLGFIRST + DLG_MOUSE)

#define IDH_DLG_COLORSAVE   (IDH_DLGFIRST + DLG_COLORSAVE)
#define IDH_DLG_COLORDEFINE (IDH_DLGFIRST + DLG_COLORDEFINE)
#define IDH_DLG_CONFIGURE   (IDH_DLGFIRST + DLG_CONFIGURE)
#define IDH_DLG_INSTALL     (IDH_DLGFIRST + DLG_INSTALL)
#define IDH_DLG_UNLIST      (IDH_DLGFIRST + DLG_UNLIST)
#define IDH_DLG_REMOVEFONT  (IDH_DLGFIRST + DLG_REMOVEFONT)
#define IDH_DLG_TRUETYPE    (IDH_DLGFIRST + DLG_TRUETYPE)
#define IDH_DLG_BROWSE      (IDH_DLGFIRST + DLG_BROWSE)

#define IDH_DLG_INSTALL_PS     (IDH_DLGFIRST + DLG_INSTALL_PS)
#define IDH_DLG_REMOVEFONT_PS  (IDH_DLGFIRST + DLG_REMOVEFONT_PS)


#define IDH_DLG_SYSTEM      (IDH_DLGFIRST + DLG_SYSTEM)
#define IDH_DLG_ADDOS       (IDH_DLGFIRST + DLG_ADDOS)

#define IDH_DLG_VIRTUALMEM  (IDH_DLGFIRST + DLG_VIRTUALMEM)

#define IDH_DLG_PREVIOUSCON (IDH_DLGFIRST + DLG_PREVIOUSCON)
#define IDH_DLG_TASKING     (IDH_DLGFIRST + DLG_TASKING)

#define IDH_DLG_COREDUMP    (IDH_DLGFIRST + DLG_COREDUMP)

// pen win help constants

#define IDH_DLG_ROT              (IDH_DLGFIRST + 200)
#define IDH_DLG_CAL              (IDH_DLGFIRST + 201)
#define IDH_DLG_CAL_ACCEPT       (IDH_DLGFIRST + 202)


// MM midi  dialogs
#define IDH_DLG_MIDI_SETUPEDIT  (IDH_DLGFIRST + 404)
#define IDH_DLG_MIDI_PATCHEDIT  (IDH_DLGFIRST + 504)
#define IDH_DLG_MIDI_KEYEDIT    (IDH_DLGFIRST + 604)
#define IDH_DLG_MIDI_SETUPNEW   (IDH_DLGFIRST + 704)
#define IDH_DLG_MIDI_PATCHNEW   (IDH_DLGFIRST + 804)
#define IDH_DLG_MIDI_KEYNEW     (IDH_DLGFIRST + 904)

// MM sound dialogs
#define IDH_DLG_NEWSND          (IDH_DLGFIRST + 503)

// MM drivers dialogs
#define IDH_DLG_ADD_DRIVERS     (IDH_DLGFIRST + 403)
#define IDH_DLG_INSERT_DISK     (IDH_DLGFIRST + 703)
#define IDH_DLG_ADD_UNKNOWN     (IDH_DLGFIRST + 803)
#define IDH_DLG_FILE_ERROR      (IDH_DLGFIRST + 903)

// Screen Saver dialogs
#define IDH_DLG_CHANGEPASS      (IDH_SCRNSAVE)
#define IDH_DLG_MARQUE          (IDH_SCRNSAVE + 1)
#define IDH_DLG_MYSTIFY         (IDH_SCRNSAVE + 2)
#define IDH_DLG_STARSIM         (IDH_SCRNSAVE + 3)
#define IDH_DLG_MARQUEE_FONT    (IDH_SCRNSAVE + 4)
#define IDH_DLG_FLYWIN          (IDH_SCRNSAVE + 5)
#define IDH_DLG_BEZIER          (IDH_SCRNSAVE + 6)

#define IDH_DLG_PRINTER         (IDH_DLGFIRST + DLG_PRINTER)

// We need to change the help stuff when called by the spooler.
#define IDH_PRINTER               (IDH_DLG_PRINTER + IDH_SPOOLER_OFFSET)
#define IDH_DLG_CONNECT           (IDH_DLG_CONFIGURE + IDH_SPOOLER_OFFSET)
#define IDH_DLG_NETCONNECT        (IDH_DLG_NETPRINT + IDH_SPOOLER_OFFSET)
#define IDH_DLG_PREVCON           (IDH_DLG_PREVIOUSCON + IDH_SPOOLER_OFFSET)
#define IDH_DLG_UNLISTED_PRINTER  (IDH_DLG_UNLIST + IDH_SPOOLER_OFFSET)
// #define IDH_DLG_INSTALL_PRINTER   (IDH_DLG_INSTALL + IDH_SPOOLER_OFFSET)
#define IDH_DLG_COM_SET           (IDH_DLG_PORTS2 + IDH_SPOOLER_OFFSET)
#define IDH_DLG_ADVANCED_COMSET   (IDH_DLG_PORTS3 + IDH_SPOOLER_OFFSET)
#define IDH_DLG_PRINTER_BROWSE    (IDH_DLG_BROWSE + IDH_SPOOLER_OFFSET)
#define IDH_DLG_INS_PRINTER_DISK  (IDH_DLG_INSERT_DISK + IDH_SPOOLER_OFFSET)


