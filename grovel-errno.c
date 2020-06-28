#include "grovel.h"

#include <sys/utsname.h>

#include <ctype.h>
#include <errno.h>

static const char *grovel_message(long number) {
    return strerror((int)number);
}

static const char *grovel_filename(void) {
    static struct utsname names;
    static char buf[64];
    char *p;

    if (uname(&names) == -1) exit(1);
    snprintf(buf, sizeof(buf), "errors-errno-%s.scm", names.sysname);
    for (p = buf; *p; p++) {
        *p = (char)tolower(*p);
    }
    return buf;
}

static void grovel(void) {
#ifdef E2BIG
    GR(E2BIG);
#endif
#ifdef EACCES
    GR(EACCES);
#endif
#ifdef EADDRINUSE
    GR(EADDRINUSE);
#endif
#ifdef EADDRNOTAVAIL
    GR(EADDRNOTAVAIL);
#endif
#ifdef EADV
    GR(EADV);
#endif
#ifdef EAFNOSUPPORT
    GR(EAFNOSUPPORT);
#endif
#ifdef EAGAIN
    GR(EAGAIN);
#endif
#ifdef EALREADY
    GR(EALREADY);
#endif
#ifdef EAUTH
    GR(EAUTH);
#endif
#ifdef EBADARCH
    GR(EBADARCH);
#endif
#ifdef EBADE
    GR(EBADE);
#endif
#ifdef EBADEXEC
    GR(EBADEXEC);
#endif
#ifdef EBADF
    GR(EBADF);
#endif
#ifdef EBADFD
    GR(EBADFD);
#endif
#ifdef EBADMACHO
    GR(EBADMACHO);
#endif
#ifdef EBADMSG
    GR(EBADMSG);
#endif
#ifdef EBADR
    GR(EBADR);
#endif
#ifdef EBADRPC
    GR(EBADRPC);
#endif
#ifdef EBADRQC
    GR(EBADRQC);
#endif
#ifdef EBADSLT
    GR(EBADSLT);
#endif
#ifdef EBFONT
    GR(EBFONT);
#endif
#ifdef EBUSY
    GR(EBUSY);
#endif
#ifdef ECANCELED
    GR(ECANCELED);
#endif
#ifdef ECAPMODE
    GR(ECAPMODE);
#endif
#ifdef ECHILD
    GR(ECHILD);
#endif
#ifdef ECHRNG
    GR(ECHRNG);
#endif
#ifdef ECOMM
    GR(ECOMM);
#endif
#ifdef ECONNABORTED
    GR(ECONNABORTED);
#endif
#ifdef ECONNREFUSED
    GR(ECONNREFUSED);
#endif
#ifdef ECONNRESET
    GR(ECONNRESET);
#endif
#ifdef EDEADLK
    GR(EDEADLK);
#endif
#ifdef EDEADLOCK
    GR(EDEADLOCK);
#endif
#ifdef EDESTADDRREQ
    GR(EDESTADDRREQ);
#endif
#ifdef EDEVERR
    GR(EDEVERR);
#endif
#ifdef EDOM
    GR(EDOM);
#endif
#ifdef EDOOFUS
    GR(EDOOFUS);
#endif
#ifdef EDOTDOT
    GR(EDOTDOT);
#endif
#ifdef EDQUOT
    GR(EDQUOT);
#endif
#ifdef EEXIST
    GR(EEXIST);
#endif
#ifdef EFAULT
    GR(EFAULT);
#endif
#ifdef EFBIG
    GR(EFBIG);
#endif
#ifdef EFTYPE
    GR(EFTYPE);
#endif
#ifdef EHOSTDOWN
    GR(EHOSTDOWN);
#endif
#ifdef EHOSTUNREACH
    GR(EHOSTUNREACH);
#endif
#ifdef EHWPOISON
    GR(EHWPOISON);
#endif
#ifdef EIDRM
    GR(EIDRM);
#endif
#ifdef EILSEQ
    GR(EILSEQ);
#endif
#ifdef EINPROGRESS
    GR(EINPROGRESS);
#endif
#ifdef EINTEGRITY
    GR(EINTEGRITY);
#endif
#ifdef EINTR
    GR(EINTR);
#endif
#ifdef EINVAL
    GR(EINVAL);
#endif
#ifdef EIO
    GR(EIO);
#endif
#ifdef EIPSEC
    GR(EIPSEC);
#endif
#ifdef EISCONN
    GR(EISCONN);
#endif
#ifdef EISDIR
    GR(EISDIR);
#endif
#ifdef EISNAM
    GR(EISNAM);
#endif
#ifdef EKEYEXPIRED
    GR(EKEYEXPIRED);
#endif
#ifdef EKEYREJECTED
    GR(EKEYREJECTED);
#endif
#ifdef EKEYREVOKED
    GR(EKEYREVOKED);
#endif
#ifdef EL2HLT
    GR(EL2HLT);
#endif
#ifdef EL2NSYNC
    GR(EL2NSYNC);
#endif
#ifdef EL3HLT
    GR(EL3HLT);
#endif
#ifdef EL3RST
    GR(EL3RST);
#endif
#ifdef ELIBACC
    GR(ELIBACC);
#endif
#ifdef ELIBBAD
    GR(ELIBBAD);
#endif
#ifdef ELIBEXEC
    GR(ELIBEXEC);
#endif
#ifdef ELIBMAX
    GR(ELIBMAX);
#endif
#ifdef ELIBSCN
    GR(ELIBSCN);
#endif
#ifdef ELNRNG
    GR(ELNRNG);
#endif
#ifdef ELOCKUNMAPPED
    GR(ELOCKUNMAPPED);
#endif
#ifdef ELOOP
    GR(ELOOP);
#endif
#ifdef EMEDIUMTYPE
    GR(EMEDIUMTYPE);
#endif
#ifdef EMFILE
    GR(EMFILE);
#endif
#ifdef EMLINK
    GR(EMLINK);
#endif
#ifdef EMSGSIZE
    GR(EMSGSIZE);
#endif
#ifdef EMULTIHOP
    GR(EMULTIHOP);
#endif
#ifdef ENAMETOOLONG
    GR(ENAMETOOLONG);
#endif
#ifdef ENAVAIL
    GR(ENAVAIL);
#endif
#ifdef ENEEDAUTH
    GR(ENEEDAUTH);
#endif
#ifdef ENETDOWN
    GR(ENETDOWN);
#endif
#ifdef ENETRESET
    GR(ENETRESET);
#endif
#ifdef ENETUNREACH
    GR(ENETUNREACH);
#endif
#ifdef ENFILE
    GR(ENFILE);
#endif
#ifdef ENOANO
    GR(ENOANO);
#endif
#ifdef ENOATTR
    GR(ENOATTR);
#endif
#ifdef ENOBUFS
    GR(ENOBUFS);
#endif
#ifdef ENOCSI
    GR(ENOCSI);
#endif
#ifdef ENODATA
    GR(ENODATA);
#endif
#ifdef ENODEV
    GR(ENODEV);
#endif
#ifdef ENOENT
    GR(ENOENT);
#endif
#ifdef ENOEXEC
    GR(ENOEXEC);
#endif
#ifdef ENOKEY
    GR(ENOKEY);
#endif
#ifdef ENOLCK
    GR(ENOLCK);
#endif
#ifdef ENOLINK
    GR(ENOLINK);
#endif
#ifdef ENOMEDIUM
    GR(ENOMEDIUM);
#endif
#ifdef ENOMEM
    GR(ENOMEM);
#endif
#ifdef ENOMSG
    GR(ENOMSG);
#endif
#ifdef ENONET
    GR(ENONET);
#endif
#ifdef ENOPKG
    GR(ENOPKG);
#endif
#ifdef ENOPOLICY
    GR(ENOPOLICY);
#endif
#ifdef ENOPROTOOPT
    GR(ENOPROTOOPT);
#endif
#ifdef ENOSPC
    GR(ENOSPC);
#endif
#ifdef ENOSR
    GR(ENOSR);
#endif
#ifdef ENOSTR
    GR(ENOSTR);
#endif
#ifdef ENOSYS
    GR(ENOSYS);
#endif
#ifdef ENOTACTIVE
    GR(ENOTACTIVE);
#endif
#ifdef ENOTBLK
    GR(ENOTBLK);
#endif
#ifdef ENOTCAPABLE
    GR(ENOTCAPABLE);
#endif
#ifdef ENOTCONN
    GR(ENOTCONN);
#endif
#ifdef ENOTDIR
    GR(ENOTDIR);
#endif
#ifdef ENOTEMPTY
    GR(ENOTEMPTY);
#endif
#ifdef ENOTNAM
    GR(ENOTNAM);
#endif
#ifdef ENOTRECOVERABLE
    GR(ENOTRECOVERABLE);
#endif
#ifdef ENOTSOCK
    GR(ENOTSOCK);
#endif
#ifdef ENOTSUP
    GR(ENOTSUP);
#endif
#ifdef ENOTTY
    GR(ENOTTY);
#endif
#ifdef ENOTUNIQ
    GR(ENOTUNIQ);
#endif
#ifdef ENXIO
    GR(ENXIO);
#endif
#ifdef EOPNOTSUPP
    GR(EOPNOTSUPP);
#endif
#ifdef EOVERFLOW
    GR(EOVERFLOW);
#endif
#ifdef EOWNERDEAD
    GR(EOWNERDEAD);
#endif
#ifdef EPERM
    GR(EPERM);
#endif
#ifdef EPFNOSUPPORT
    GR(EPFNOSUPPORT);
#endif
#ifdef EPIPE
    GR(EPIPE);
#endif
#ifdef EPROCLIM
    GR(EPROCLIM);
#endif
#ifdef EPROCUNAVAIL
    GR(EPROCUNAVAIL);
#endif
#ifdef EPROGMISMATCH
    GR(EPROGMISMATCH);
#endif
#ifdef EPROGUNAVAIL
    GR(EPROGUNAVAIL);
#endif
#ifdef EPROTO
    GR(EPROTO);
#endif
#ifdef EPROTONOSUPPORT
    GR(EPROTONOSUPPORT);
#endif
#ifdef EPROTOTYPE
    GR(EPROTOTYPE);
#endif
#ifdef EPWROFF
    GR(EPWROFF);
#endif
#ifdef EQFULL
    GR(EQFULL);
#endif
#ifdef ERANGE
    GR(ERANGE);
#endif
#ifdef EREMCHG
    GR(EREMCHG);
#endif
#ifdef EREMOTE
    GR(EREMOTE);
#endif
#ifdef EREMOTEIO
    GR(EREMOTEIO);
#endif
#ifdef ERESTART
    GR(ERESTART);
#endif
#ifdef ERFKILL
    GR(ERFKILL);
#endif
#ifdef EROFS
    GR(EROFS);
#endif
#ifdef ERPCMISMATCH
    GR(ERPCMISMATCH);
#endif
#ifdef ESHLIBVERS
    GR(ESHLIBVERS);
#endif
#ifdef ESHUTDOWN
    GR(ESHUTDOWN);
#endif
#ifdef ESOCKTNOSUPPORT
    GR(ESOCKTNOSUPPORT);
#endif
#ifdef ESPIPE
    GR(ESPIPE);
#endif
#ifdef ESRCH
    GR(ESRCH);
#endif
#ifdef ESRMNT
    GR(ESRMNT);
#endif
#ifdef ESTALE
    GR(ESTALE);
#endif
#ifdef ESTRPIPE
    GR(ESTRPIPE);
#endif
#ifdef ETIME
    GR(ETIME);
#endif
#ifdef ETIMEDOUT
    GR(ETIMEDOUT);
#endif
#ifdef ETOOMANYREFS
    GR(ETOOMANYREFS);
#endif
#ifdef ETXTBSY
    GR(ETXTBSY);
#endif
#ifdef EUCLEAN
    GR(EUCLEAN);
#endif
#ifdef EUNATCH
    GR(EUNATCH);
#endif
#ifdef EUSERS
    GR(EUSERS);
#endif
#ifdef EWOULDBLOCK
    GR(EWOULDBLOCK);
#endif
#ifdef EXDEV
    GR(EXDEV);
#endif
#ifdef EXFULL
    GR(EXFULL);
#endif
}
