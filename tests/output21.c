p += 3;
*p -= 8;
p -= 1;
*p = getchar();
if (*p) do {
  p -= 1;
  if (*p) do {
    p += 1;
    *p += 10;
    p -= 1;
    *p -= 1;
  } while (*p);
  p += 2;
  if (*p) do {
    p -= 1;
    *p -= 6;
    p += 2;
    *p -= 1;
    p -= 1;
    *p += 1;
  } while (*p);
  *p = getchar();
} while (*p);
*p += 2;
p += 2;
*p += 2;
p -= 1;
*p -= 2;
if (*p) do {
  p -= 1;
  *p += 2;
  if (*p) do {
    *p += 1;
    p += 1;
  } while (*p);
  p += 1;
  *p += 1;
  p -= 2;
  *p += 3;
  p -= 1;
} while (*p);
p -= 2;
if (*p) do {
  p += 2;
  *p += 1;
  if (*p) do {
    if (*p) do {
      p += 2;
      *p += 1;
      p -= 2;
      *p -= 1;
    } while (*p);
    p -= 2;
  } while (*p);
  p += 4;
  if (*p) do {
    if (*p) do {
      p -= 2;
      *p += 1;
      p += 1;
      putchar(*p);
      p += 1;
      *p -= 1;
    } while (*p);
    p += 2;
  } while (*p);
  p -= 1;
  putchar(*p);
  p -= 3;
  *p += 1;
  p -= 2;
  *p -= 1;
} while (*p);
p += 2;
if (*p) do {
  p -= 1;
  putchar(*p);
  p += 1;
  *p -= 2;
} while (*p);
p += 1;
putchar(*p);
p += 2;
putchar(*p);
