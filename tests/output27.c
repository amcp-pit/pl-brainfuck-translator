*p += 8;
if (*p) do {
  p += 1;
  *p += 1;
  p += 1;
  *p += 4;
  p -= 2;
  *p -= 1;
} while (*p);
p += 1;
*p += 2;
p += 2;
*p += 1;
p -= 1;
if (*p) do {
  *p -= 1;
  if (*p) do {
    p += 2;
    *p += 1;
    p -= 2;
    *p -= 1;
  } while (*p);
  *p += 1;
  p += 2;
} while (*p);
p += 1;
*p += 1;
if (*p) do {
  *p -= 1;
  p -= 3;
  if (*p) do {
    *p -= 1;
    p += 1;
    if (*p) do {
      *p += 1;
      if (*p) do {
        *p -= 1;
      } while (*p);
      *p += 1;
      p += 1;
      *p += 2;
      p += 3;
      *p -= 1;
      p -= 2;
    } while (*p);
    p -= 1;
    if (*p) do {
      p -= 1;
    } while (*p);
    p += 2;
    *p += 6;
    if (*p) do {
      p -= 2;
      *p += 5;
      p += 2;
      *p -= 1;
    } while (*p);
    *p += 1;
    p -= 2;
    *p += 2;
    putchar(*p);
    if (*p) do {
      *p -= 1;
    } while (*p);
    p -= 2;
  } while (*p);
  p += 1;
  putchar(*p);
  p += 1;
  *p += 1;
  if (*p) do {
    p += 2;
  } while (*p);
  p += 1;
  *p += 1;
} while (*p);
