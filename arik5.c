#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct fn {
  struct fn (*f) (void);
} fn_t;
fn_t a (void);
fn_t b (void);
fn_t c (void);
fn_t a (void)
{
  fn_t f = {b};
  (void) printf ("a()\n");
  return f;
}
fn_t b (void)
{
  fn_t f = {c};
  (void) printf ("b()\n");
  return f;
}
fn_t c (void)
{
  fn_t f = {a};
  (void) printf ("c()\n");
  return f;
}
int main (void)
{
  fn_t state = {a};
  for (;;(void)sleep(1))state =state.f();
  return EXIT_SUCCESS;
}
