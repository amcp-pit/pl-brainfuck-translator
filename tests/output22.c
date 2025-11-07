*p = getchar();
*p += 1;
if (*p) do {
  *p -= 1;
  putchar(*p);
  *p = getchar();
  *p += 1;
} while (*p);
