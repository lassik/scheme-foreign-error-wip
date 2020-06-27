/* Generated by grovel.scm */

#include <errno.h>
#include <stdio.h>
#include <string.h>

#define PR(symbol) pr(#symbol, symbol)

static void pr(const char *symbol, int number) {
    printf("\"%s\" %d \"%s\"\n", symbol, number, strerror(number));
}

static void pr_all(void);

int main(void) {
    printf("(define errno-vector (vector\n");
    pr_all();
    printf("))\n");
    return 0;
}

static void pr_all(void) {
#ifdef E2BIG
    PR(E2BIG);
#endif
#ifdef EACCES
    PR(EACCES);
#endif
#ifdef EADDRINUSE
    PR(EADDRINUSE);
#endif
#ifdef EADDRNOTAVAIL
    PR(EADDRNOTAVAIL);
#endif
#ifdef EADV
    PR(EADV);
#endif
#ifdef EAFNOSUPPORT
    PR(EAFNOSUPPORT);
#endif
#ifdef EAGAIN
    PR(EAGAIN);
#endif
#ifdef EALREADY
    PR(EALREADY);
#endif
#ifdef EAUTH
    PR(EAUTH);
#endif
#ifdef EBADE
    PR(EBADE);
#endif
#ifdef EBADF
    PR(EBADF);
#endif
#ifdef EBADFD
    PR(EBADFD);
#endif
#ifdef EBADMSG
    PR(EBADMSG);
#endif
#ifdef EBADR
    PR(EBADR);
#endif
#ifdef EBADRPC
    PR(EBADRPC);
#endif
#ifdef EBADRQC
    PR(EBADRQC);
#endif
#ifdef EBADSLT
    PR(EBADSLT);
#endif
#ifdef EBFONT
    PR(EBFONT);
#endif
#ifdef EBUSY
    PR(EBUSY);
#endif
#ifdef ECANCELED
    PR(ECANCELED);
#endif
#ifdef ECAPMODE
    PR(ECAPMODE);
#endif
#ifdef ECHILD
    PR(ECHILD);
#endif
#ifdef ECHRNG
    PR(ECHRNG);
#endif
#ifdef ECOMM
    PR(ECOMM);
#endif
#ifdef ECONNABORTED
    PR(ECONNABORTED);
#endif
#ifdef ECONNREFUSED
    PR(ECONNREFUSED);
#endif
#ifdef ECONNRESET
    PR(ECONNRESET);
#endif
#ifdef EDEADLK
    PR(EDEADLK);
#endif
#ifdef EDEADLOCK
    PR(EDEADLOCK);
#endif
#ifdef EDESTADDRREQ
    PR(EDESTADDRREQ);
#endif
#ifdef EDOM
    PR(EDOM);
#endif
#ifdef EDOOFUS
    PR(EDOOFUS);
#endif
#ifdef EDOTDOT
    PR(EDOTDOT);
#endif
#ifdef EDQUOT
    PR(EDQUOT);
#endif
#ifdef EEXIST
    PR(EEXIST);
#endif
#ifdef EFAULT
    PR(EFAULT);
#endif
#ifdef EFBIG
    PR(EFBIG);
#endif
#ifdef EFTYPE
    PR(EFTYPE);
#endif
#ifdef EHOSTDOWN
    PR(EHOSTDOWN);
#endif
#ifdef EHOSTUNREACH
    PR(EHOSTUNREACH);
#endif
#ifdef EHWPOISON
    PR(EHWPOISON);
#endif
#ifdef EIDRM
    PR(EIDRM);
#endif
#ifdef EILSEQ
    PR(EILSEQ);
#endif
#ifdef EINPROGRESS
    PR(EINPROGRESS);
#endif
#ifdef EINTR
    PR(EINTR);
#endif
#ifdef EINVAL
    PR(EINVAL);
#endif
#ifdef EIO
    PR(EIO);
#endif
#ifdef EIPSEC
    PR(EIPSEC);
#endif
#ifdef EISCONN
    PR(EISCONN);
#endif
#ifdef EISDIR
    PR(EISDIR);
#endif
#ifdef EISNAM
    PR(EISNAM);
#endif
#ifdef EKEYEXPIRED
    PR(EKEYEXPIRED);
#endif
#ifdef EKEYREJECTED
    PR(EKEYREJECTED);
#endif
#ifdef EKEYREVOKED
    PR(EKEYREVOKED);
#endif
#ifdef EL2HLT
    PR(EL2HLT);
#endif
#ifdef EL2NSYNC
    PR(EL2NSYNC);
#endif
#ifdef EL3HLT
    PR(EL3HLT);
#endif
#ifdef EL3RST
    PR(EL3RST);
#endif
#ifdef ELAST
    PR(ELAST);
#endif
#ifdef ELIBACC
    PR(ELIBACC);
#endif
#ifdef ELIBBAD
    PR(ELIBBAD);
#endif
#ifdef ELIBEXEC
    PR(ELIBEXEC);
#endif
#ifdef ELIBMAX
    PR(ELIBMAX);
#endif
#ifdef ELIBSCN
    PR(ELIBSCN);
#endif
#ifdef ELNRNG
    PR(ELNRNG);
#endif
#ifdef ELOCKUNMAPPED
    PR(ELOCKUNMAPPED);
#endif
#ifdef ELOOP
    PR(ELOOP);
#endif
#ifdef EMEDIUMTYPE
    PR(EMEDIUMTYPE);
#endif
#ifdef EMFILE
    PR(EMFILE);
#endif
#ifdef EMLINK
    PR(EMLINK);
#endif
#ifdef EMSGSIZE
    PR(EMSGSIZE);
#endif
#ifdef EMULTIHOP
    PR(EMULTIHOP);
#endif
#ifdef ENAMETOOLONG
    PR(ENAMETOOLONG);
#endif
#ifdef ENAVAIL
    PR(ENAVAIL);
#endif
#ifdef ENEEDAUTH
    PR(ENEEDAUTH);
#endif
#ifdef ENETDOWN
    PR(ENETDOWN);
#endif
#ifdef ENETRESET
    PR(ENETRESET);
#endif
#ifdef ENETUNREACH
    PR(ENETUNREACH);
#endif
#ifdef ENFILE
    PR(ENFILE);
#endif
#ifdef ENOANO
    PR(ENOANO);
#endif
#ifdef ENOATTR
    PR(ENOATTR);
#endif
#ifdef ENOBUFS
    PR(ENOBUFS);
#endif
#ifdef ENOCSI
    PR(ENOCSI);
#endif
#ifdef ENODATA
    PR(ENODATA);
#endif
#ifdef ENODEV
    PR(ENODEV);
#endif
#ifdef ENOENT
    PR(ENOENT);
#endif
#ifdef ENOEXEC
    PR(ENOEXEC);
#endif
#ifdef ENOKEY
    PR(ENOKEY);
#endif
#ifdef ENOLCK
    PR(ENOLCK);
#endif
#ifdef ENOLINK
    PR(ENOLINK);
#endif
#ifdef ENOMEDIUM
    PR(ENOMEDIUM);
#endif
#ifdef ENOMEM
    PR(ENOMEM);
#endif
#ifdef ENOMSG
    PR(ENOMSG);
#endif
#ifdef ENONET
    PR(ENONET);
#endif
#ifdef ENOPKG
    PR(ENOPKG);
#endif
#ifdef ENOPROTOOPT
    PR(ENOPROTOOPT);
#endif
#ifdef ENOSPC
    PR(ENOSPC);
#endif
#ifdef ENOSR
    PR(ENOSR);
#endif
#ifdef ENOSTR
    PR(ENOSTR);
#endif
#ifdef ENOSYS
    PR(ENOSYS);
#endif
#ifdef ENOTACTIVE
    PR(ENOTACTIVE);
#endif
#ifdef ENOTBLK
    PR(ENOTBLK);
#endif
#ifdef ENOTCAPABLE
    PR(ENOTCAPABLE);
#endif
#ifdef ENOTCONN
    PR(ENOTCONN);
#endif
#ifdef ENOTDIR
    PR(ENOTDIR);
#endif
#ifdef ENOTEMPTY
    PR(ENOTEMPTY);
#endif
#ifdef ENOTNAM
    PR(ENOTNAM);
#endif
#ifdef ENOTRECOVERABLE
    PR(ENOTRECOVERABLE);
#endif
#ifdef ENOTSOCK
    PR(ENOTSOCK);
#endif
#ifdef ENOTSUP
    PR(ENOTSUP);
#endif
#ifdef ENOTTY
    PR(ENOTTY);
#endif
#ifdef ENOTUNIQ
    PR(ENOTUNIQ);
#endif
#ifdef ENXIO
    PR(ENXIO);
#endif
#ifdef EOPNOTSUPP
    PR(EOPNOTSUPP);
#endif
#ifdef EOVERFLOW
    PR(EOVERFLOW);
#endif
#ifdef EOWNERDEAD
    PR(EOWNERDEAD);
#endif
#ifdef EPERM
    PR(EPERM);
#endif
#ifdef EPFNOSUPPORT
    PR(EPFNOSUPPORT);
#endif
#ifdef EPIPE
    PR(EPIPE);
#endif
#ifdef EPROCLIM
    PR(EPROCLIM);
#endif
#ifdef EPROCUNAVAIL
    PR(EPROCUNAVAIL);
#endif
#ifdef EPROGMISMATCH
    PR(EPROGMISMATCH);
#endif
#ifdef EPROGUNAVAIL
    PR(EPROGUNAVAIL);
#endif
#ifdef EPROTO
    PR(EPROTO);
#endif
#ifdef EPROTONOSUPPORT
    PR(EPROTONOSUPPORT);
#endif
#ifdef EPROTOTYPE
    PR(EPROTOTYPE);
#endif
#ifdef ERANGE
    PR(ERANGE);
#endif
#ifdef EREMCHG
    PR(EREMCHG);
#endif
#ifdef EREMOTE
    PR(EREMOTE);
#endif
#ifdef EREMOTEIO
    PR(EREMOTEIO);
#endif
#ifdef ERESTART
    PR(ERESTART);
#endif
#ifdef ERFKILL
    PR(ERFKILL);
#endif
#ifdef EROFS
    PR(EROFS);
#endif
#ifdef ERPCMISMATCH
    PR(ERPCMISMATCH);
#endif
#ifdef ESHUTDOWN
    PR(ESHUTDOWN);
#endif
#ifdef ESOCKTNOSUPPORT
    PR(ESOCKTNOSUPPORT);
#endif
#ifdef ESPIPE
    PR(ESPIPE);
#endif
#ifdef ESRCH
    PR(ESRCH);
#endif
#ifdef ESRMNT
    PR(ESRMNT);
#endif
#ifdef ESTALE
    PR(ESTALE);
#endif
#ifdef ESTRPIPE
    PR(ESTRPIPE);
#endif
#ifdef ETIME
    PR(ETIME);
#endif
#ifdef ETIMEDOUT
    PR(ETIMEDOUT);
#endif
#ifdef ETOOMANYREFS
    PR(ETOOMANYREFS);
#endif
#ifdef ETXTBSY
    PR(ETXTBSY);
#endif
#ifdef EUCLEAN
    PR(EUCLEAN);
#endif
#ifdef EUNATCH
    PR(EUNATCH);
#endif
#ifdef EUSERS
    PR(EUSERS);
#endif
#ifdef EWOULDBLOCK
    PR(EWOULDBLOCK);
#endif
#ifdef EXDEV
    PR(EXDEV);
#endif
#ifdef EXFULL
    PR(EXFULL);
#endif
}
