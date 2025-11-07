*p += 5;
if (*p) do {
  p += 1;
  *p += 4;
  putchar(*p);
  p -= 1;
  *p -= 1;
} while (*p);
