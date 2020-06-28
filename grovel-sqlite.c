#include "grovel.h"

#include <sqlite3.h>

static const char *grovel_message(long number) {
    return sqlite3_errstr((int)number);
}

static const char *grovel_filename(void) {
    return "errno-sqlite.scm";
}

static void grovel(void) {
    GR(SQLITE_ABORT_ROLLBACK);
    GR(SQLITE_AUTH_USER);
    GR(SQLITE_BUSY_RECOVERY);
    GR(SQLITE_BUSY_SNAPSHOT);
#ifdef SQLITE_BUSY_TIMEOUT
    GR(SQLITE_BUSY_TIMEOUT);
#endif
    GR(SQLITE_CANTOPEN_CONVPATH);
    GR(SQLITE_CANTOPEN_DIRTYWAL);
    GR(SQLITE_CANTOPEN_FULLPATH);
    GR(SQLITE_CANTOPEN_ISDIR);
    GR(SQLITE_CANTOPEN_NOTEMPDIR);
#ifdef SQLITE_CANTOPEN_SYMLINK
    GR(SQLITE_CANTOPEN_SYMLINK);
#endif
    GR(SQLITE_CONSTRAINT_CHECK);
    GR(SQLITE_CONSTRAINT_COMMITHOOK);
    GR(SQLITE_CONSTRAINT_FOREIGNKEY);
    GR(SQLITE_CONSTRAINT_FUNCTION);
    GR(SQLITE_CONSTRAINT_NOTNULL);
#ifdef SQLITE_CONSTRAINT_PINNED
    GR(SQLITE_CONSTRAINT_PINNED);
#endif
    GR(SQLITE_CONSTRAINT_PRIMARYKEY);
    GR(SQLITE_CONSTRAINT_ROWID);
    GR(SQLITE_CONSTRAINT_TRIGGER);
    GR(SQLITE_CONSTRAINT_UNIQUE);
    GR(SQLITE_CONSTRAINT_VTAB);
#ifdef SQLITE_CORRUPT_INDEX
    GR(SQLITE_CORRUPT_INDEX);
#endif
    GR(SQLITE_CORRUPT_SEQUENCE);
    GR(SQLITE_CORRUPT_VTAB);
    GR(SQLITE_ERROR_MISSING_COLLSEQ);
    GR(SQLITE_ERROR_RETRY);
    GR(SQLITE_ERROR_SNAPSHOT);
    GR(SQLITE_IOERR_ACCESS);
    GR(SQLITE_IOERR_AUTH);
    GR(SQLITE_IOERR_BEGIN_ATOMIC);
    GR(SQLITE_IOERR_BLOCKED);
    GR(SQLITE_IOERR_CHECKRESERVEDLOCK);
    GR(SQLITE_IOERR_CLOSE);
    GR(SQLITE_IOERR_COMMIT_ATOMIC);
    GR(SQLITE_IOERR_CONVPATH);
#ifdef SQLITE_IOERR_DATA
    GR(SQLITE_IOERR_DATA);
#endif
    GR(SQLITE_IOERR_DELETE);
    GR(SQLITE_IOERR_DELETE_NOENT);
    GR(SQLITE_IOERR_DIR_CLOSE);
    GR(SQLITE_IOERR_DIR_FSYNC);
    GR(SQLITE_IOERR_FSTAT);
    GR(SQLITE_IOERR_FSYNC);
    GR(SQLITE_IOERR_GETTEMPPATH);
    GR(SQLITE_IOERR_LOCK);
    GR(SQLITE_IOERR_MMAP);
    GR(SQLITE_IOERR_NOMEM);
    GR(SQLITE_IOERR_RDLOCK);
    GR(SQLITE_IOERR_READ);
    GR(SQLITE_IOERR_ROLLBACK_ATOMIC);
    GR(SQLITE_IOERR_SEEK);
    GR(SQLITE_IOERR_SHMLOCK);
    GR(SQLITE_IOERR_SHMMAP);
    GR(SQLITE_IOERR_SHMOPEN);
    GR(SQLITE_IOERR_SHMSIZE);
    GR(SQLITE_IOERR_SHORT_READ);
    GR(SQLITE_IOERR_TRUNCATE);
    GR(SQLITE_IOERR_UNLOCK);
    GR(SQLITE_IOERR_VNODE);
    GR(SQLITE_IOERR_WRITE);
    GR(SQLITE_LOCKED_SHAREDCACHE);
    GR(SQLITE_LOCKED_VTAB);
    GR(SQLITE_NOTICE_RECOVER_ROLLBACK);
    GR(SQLITE_NOTICE_RECOVER_WAL);
    GR(SQLITE_OK_LOAD_PERMANENTLY);
#ifdef SQLITE_OK_SYMLINK
    GR(SQLITE_OK_SYMLINK);
#endif
    GR(SQLITE_READONLY_CANTINIT);
    GR(SQLITE_READONLY_CANTLOCK);
    GR(SQLITE_READONLY_DBMOVED);
    GR(SQLITE_READONLY_DIRECTORY);
    GR(SQLITE_READONLY_RECOVERY);
    GR(SQLITE_READONLY_ROLLBACK);
    GR(SQLITE_WARNING_AUTOINDEX);
}
