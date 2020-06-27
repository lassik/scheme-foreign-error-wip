(define errno-vector (vector
"E2BIG" 7 "Argument list too long"
"EACCES" 13 "Permission denied"
"EADDRINUSE" 48 "Address already in use"
"EADDRNOTAVAIL" 49 "Can't assign requested address"
"EAFNOSUPPORT" 47 "Address family not supported by protocol family"
"EAGAIN" 35 "Resource temporarily unavailable"
"EALREADY" 37 "Operation already in progress"
"EAUTH" 80 "Authentication error"
"EBADF" 9 "Bad file descriptor"
"EBADMSG" 94 "Bad message"
"EBADRPC" 72 "RPC struct is bad"
"EBUSY" 16 "Resource busy"
"ECANCELED" 89 "Operation canceled"
"ECHILD" 10 "No child processes"
"ECONNABORTED" 53 "Software caused connection abort"
"ECONNREFUSED" 61 "Connection refused"
"ECONNRESET" 54 "Connection reset by peer"
"EDEADLK" 11 "Resource deadlock avoided"
"EDESTADDRREQ" 39 "Destination address required"
"EDOM" 33 "Numerical argument out of domain"
"EDQUOT" 69 "Disc quota exceeded"
"EEXIST" 17 "File exists"
"EFAULT" 14 "Bad address"
"EFBIG" 27 "File too large"
"EFTYPE" 79 "Inappropriate file type or format"
"EHOSTDOWN" 64 "Host is down"
"EHOSTUNREACH" 65 "No route to host"
"EIDRM" 90 "Identifier removed"
"EILSEQ" 92 "Illegal byte sequence"
"EINPROGRESS" 36 "Operation now in progress"
"EINTR" 4 "Interrupted system call"
"EINVAL" 22 "Invalid argument"
"EIO" 5 "Input/output error"
"EISCONN" 56 "Socket is already connected"
"EISDIR" 21 "Is a directory"
"ELAST" 106 "Interface output queue is full"
"ELOOP" 62 "Too many levels of symbolic links"
"EMFILE" 24 "Too many open files"
"EMLINK" 31 "Too many links"
"EMSGSIZE" 40 "Message too long"
"EMULTIHOP" 95 "EMULTIHOP (Reserved)"
"ENAMETOOLONG" 63 "File name too long"
"ENEEDAUTH" 81 "Need authenticator"
"ENETDOWN" 50 "Network is down"
"ENETRESET" 52 "Network dropped connection on reset"
"ENETUNREACH" 51 "Network is unreachable"
"ENFILE" 23 "Too many open files in system"
"ENOATTR" 93 "Attribute not found"
"ENOBUFS" 55 "No buffer space available"
"ENODATA" 96 "No message available on STREAM"
"ENODEV" 19 "Operation not supported by device"
"ENOENT" 2 "No such file or directory"
"ENOEXEC" 8 "Exec format error"
"ENOLCK" 77 "No locks available"
"ENOLINK" 97 "ENOLINK (Reserved)"
"ENOMEM" 12 "Cannot allocate memory"
"ENOMSG" 91 "No message of desired type"
"ENOPROTOOPT" 42 "Protocol not available"
"ENOSPC" 28 "No space left on device"
"ENOSR" 98 "No STREAM resources"
"ENOSTR" 99 "Not a STREAM"
"ENOSYS" 78 "Function not implemented"
"ENOTBLK" 15 "Block device required"
"ENOTCONN" 57 "Socket is not connected"
"ENOTDIR" 20 "Not a directory"
"ENOTEMPTY" 66 "Directory not empty"
"ENOTRECOVERABLE" 104 "State not recoverable"
"ENOTSOCK" 38 "Socket operation on non-socket"
"ENOTSUP" 45 "Operation not supported"
"ENOTTY" 25 "Inappropriate ioctl for device"
"ENXIO" 6 "Device not configured"
"EOPNOTSUPP" 102 "Operation not supported on socket"
"EOVERFLOW" 84 "Value too large to be stored in data type"
"EOWNERDEAD" 105 "Previous owner died"
"EPERM" 1 "Operation not permitted"
"EPFNOSUPPORT" 46 "Protocol family not supported"
"EPIPE" 32 "Broken pipe"
"EPROCLIM" 67 "Too many processes"
"EPROCUNAVAIL" 76 "Bad procedure for program"
"EPROGMISMATCH" 75 "Program version wrong"
"EPROGUNAVAIL" 74 "RPC prog. not avail"
"EPROTO" 100 "Protocol error"
"EPROTONOSUPPORT" 43 "Protocol not supported"
"EPROTOTYPE" 41 "Protocol wrong type for socket"
"ERANGE" 34 "Result too large"
"EREMOTE" 71 "Too many levels of remote in path"
"EROFS" 30 "Read-only file system"
"ERPCMISMATCH" 73 "RPC version wrong"
"ESHUTDOWN" 58 "Can't send after socket shutdown"
"ESOCKTNOSUPPORT" 44 "Socket type not supported"
"ESPIPE" 29 "Illegal seek"
"ESRCH" 3 "No such process"
"ESTALE" 70 "Stale NFS file handle"
"ETIME" 101 "STREAM ioctl timeout"
"ETIMEDOUT" 60 "Operation timed out"
"ETOOMANYREFS" 59 "Too many references: can't splice"
"ETXTBSY" 26 "Text file busy"
"EUSERS" 68 "Too many users"
"EWOULDBLOCK" 35 "Resource temporarily unavailable"
"EXDEV" 18 "Cross-device link"
))
