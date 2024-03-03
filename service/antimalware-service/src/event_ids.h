//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: CATEGORY_SERVICE
//
// MessageText:
//
// Service
//
#define CATEGORY_SERVICE                 ((DWORD)0x00000001L)

//
// MessageId: MSG_STARTUP
//
// MessageText:
//
// Startup
//
#define MSG_STARTUP                      ((DWORD)0x4000000AL)

//
// MessageId: MSG_OPERATION
//
// MessageText:
//
// Running
//
#define MSG_OPERATION                    ((DWORD)0x4000000BL)

//
// MessageId: MSG_SHUTDOWN
//
// MessageText:
//
// Shutdown
//
#define MSG_SHUTDOWN                     ((DWORD)0x4000000CL)

//
// MessageId: MSG_SVC_FAILURE
//
// MessageText:
//
// Service Failure
//
#define MSG_SVC_FAILURE                  ((DWORD)0xC000000DL)

