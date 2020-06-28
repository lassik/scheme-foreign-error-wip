// This program is sensitive to the system locale, which should be set
// to US English in order to get the error messages in English.

#undef _UNICODE
#undef UNICODE

#include "grovel.h"

#include <winsock2.h>

static char message[256];

// A few error messages are multi-line, having embedded newlines.
// Most (all?) error messages have a trailing newline (CR or CR-LF).
static void convert_all_whitespace_to_spaces(void) {
    static const char whitespace[] = "\r\n\t ";
    char *p;

    for (p = message; *p; p++) {
        if (strchr(whitespace, *p)) {
            *p = ' ';
        }
    }
}

static void remove_trailing_spaces(void) {
    char *p;

    p = strchr(message, 0);
    while ((p > message) && (p[-1] == ' ')) {
        p--;
    }
    *p = 0;
}

static void remove_trailing_dot(void) {
    char *p;

    p = strchr(message, 0);
    if ((p > message) && (p[-1] == '.')) {
        p--;
    }
    *p = 0;
}

static const char *grovel_message(long number) {
    memset(message, 0, sizeof(message));
    if (FormatMessageA(
            FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
            0, number, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
            message, sizeof(message), 0)) {
        convert_all_whitespace_to_spaces();
        remove_trailing_spaces();
        remove_trailing_dot();
    } else {
        memset(message, 0, sizeof(message));
    }
    return message;
}

static const char *grovel_filename(void) {
    return "errno-winsock.scm";
}

static void grovel(void) {
    GR(WSA_E_CANCELLED);
    GR(WSA_E_NO_MORE);
    GR(WSA_INVALID_HANDLE);
    GR(WSA_INVALID_PARAMETER);
    GR(WSA_IO_INCOMPLETE);
    GR(WSA_IO_PENDING);
    GR(WSA_NOT_ENOUGH_MEMORY);
    GR(WSA_OPERATION_ABORTED);
    GR(WSA_QOS_ADMISSION_FAILURE);
    GR(WSA_QOS_BAD_OBJECT);
    GR(WSA_QOS_BAD_STYLE);
    GR(WSA_QOS_EFILTERCOUNT);
    GR(WSA_QOS_EFILTERSTYLE);
    GR(WSA_QOS_EFILTERTYPE);
    GR(WSA_QOS_EFLOWCOUNT);
    GR(WSA_QOS_EFLOWDESC);
    GR(WSA_QOS_EFLOWSPEC);
    GR(WSA_QOS_EOBJLENGTH);
    GR(WSA_QOS_EPOLICYOBJ);
    GR(WSA_QOS_EPROVSPECBUF);
    GR(WSA_QOS_EPSFILTERSPEC);
    GR(WSA_QOS_EPSFLOWSPEC);
    GR(WSA_QOS_ESDMODEOBJ);
    GR(WSA_QOS_ESERVICETYPE);
    GR(WSA_QOS_ESHAPERATEOBJ);
#ifdef WSA_QOS_EUNKOWNPSOBJ
    GR(WSA_QOS_EUNKOWNPSOBJ);
#endif
    GR(WSA_QOS_GENERIC_ERROR);
    GR(WSA_QOS_NO_RECEIVERS);
    GR(WSA_QOS_NO_SENDERS);
    GR(WSA_QOS_POLICY_FAILURE);
    GR(WSA_QOS_RECEIVERS);
    GR(WSA_QOS_REQUEST_CONFIRMED);
    GR(WSA_QOS_RESERVED_PETYPE);
    GR(WSA_QOS_SENDERS);
    GR(WSA_QOS_TRAFFIC_CTRL_ERROR);
    GR(WSAEACCES);
    GR(WSAEADDRINUSE);
    GR(WSAEADDRNOTAVAIL);
    GR(WSAEAFNOSUPPORT);
    GR(WSAEALREADY);
    GR(WSAEBADF);
    GR(WSAECANCELLED);
    GR(WSAECONNABORTED);
    GR(WSAECONNREFUSED);
    GR(WSAECONNRESET);
    GR(WSAEDESTADDRREQ);
    GR(WSAEDISCON);
    GR(WSAEDQUOT);
    GR(WSAEFAULT);
    GR(WSAEHOSTDOWN);
    GR(WSAEHOSTUNREACH);
    GR(WSAEINPROGRESS);
    GR(WSAEINTR);
    GR(WSAEINVAL);
    GR(WSAEINVALIDPROCTABLE);
    GR(WSAEINVALIDPROVIDER);
    GR(WSAEISCONN);
    GR(WSAELOOP);
    GR(WSAEMFILE);
    GR(WSAEMSGSIZE);
    GR(WSAENAMETOOLONG);
    GR(WSAENETDOWN);
    GR(WSAENETRESET);
    GR(WSAENETUNREACH);
    GR(WSAENOBUFS);
    GR(WSAENOMORE);
    GR(WSAENOPROTOOPT);
    GR(WSAENOTCONN);
    GR(WSAENOTEMPTY);
    GR(WSAENOTSOCK);
    GR(WSAEOPNOTSUPP);
    GR(WSAEPFNOSUPPORT);
    GR(WSAEPROCLIM);
    GR(WSAEPROTONOSUPPORT);
    GR(WSAEPROTOTYPE);
    GR(WSAEPROVIDERFAILEDINIT);
    GR(WSAEREFUSED);
    GR(WSAEREMOTE);
    GR(WSAESHUTDOWN);
    GR(WSAESOCKTNOSUPPORT);
    GR(WSAESTALE);
    GR(WSAETIMEDOUT);
    GR(WSAETOOMANYREFS);
    GR(WSAEUSERS);
    GR(WSAEWOULDBLOCK);
    GR(WSAHOST_NOT_FOUND);
    GR(WSANO_DATA);
    GR(WSANO_RECOVERY);
    GR(WSANOTINITIALISED);
    GR(WSASERVICE_NOT_FOUND);
    GR(WSASYSCALLFAILURE);
    GR(WSASYSNOTREADY);
    GR(WSATRY_AGAIN);
    GR(WSATYPE_NOT_FOUND);
    GR(WSAVERNOTSUPPORTED);
}
