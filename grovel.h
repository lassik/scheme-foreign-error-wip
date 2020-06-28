#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXERRORS 4096
#define GR(symbol) gr(symbol, #symbol)

struct error {
    long number;
    const char *symbol;
};

static const char *grovel_message(long number);
static const char *grovel_filename(void);
static void grovel(void);

static struct error errors[MAXERRORS];
static size_t nerror;

static int compare_errors(const void *a_void, const void *b_void) {
    const struct error *a = a_void;
    const struct error *b = b_void;
    if (a->number < b->number) return -1;
    if (a->number > b->number) return 1;
    return 0;
}

static void gr(int number, const char *symbol) {
    struct error *error;

    if (nerror >= MAXERRORS) exit(1);
    error = &errors[nerror++];
    error->number = number;
    error->symbol = symbol;
}

int main(void) {
    struct error *error;
    const char *filename;
    FILE *out;

    grovel();
    qsort(errors, nerror, sizeof(struct error), compare_errors);
    filename = grovel_filename();
    if ((out = fopen(filename, "wb")) == NULL) exit(1);
    fprintf(out, "(define error-vector (vector\n");
    for (error = errors; error < errors + nerror; error++) {
        fprintf(out, "%ld '%s \"%s\"\n",
                error->number, error->symbol, grovel_message(error->number));
    }
    fprintf(out, "))\n");
    fclose(out);
    fprintf(stderr, "wrote %s\n", filename);
    return 0;
}
