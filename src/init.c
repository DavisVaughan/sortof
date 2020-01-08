// File generated automatically by cbuild - please do not modify by hand

#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <stdbool.h> // for bool
#include <R_ext/Rdynload.h>

// .Call declarations
extern SEXP warp_warp_is_sorted(SEXP, SEXP, SEXP, SEXP);

// .Call entries
static const R_CallMethodDef CallEntries[] = {
  {"warp_warp_is_sorted", (DL_FUNC) &warp_warp_is_sorted, 4},
  {NULL, NULL, 0}
};

void R_init_sortof(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

