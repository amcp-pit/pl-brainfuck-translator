p += 2;
*p = getchar();
if (*p) do {
  p += 2;
  *p = getchar();
} while (*p);
p -= 2;
if (*p) do {
  if (*p) do {
    p -= 2;
  } while (*p);
  p += 4;
  if (*p) do {
    p -= 2;
    if (*p) do {
      p += 1;
      *p += 1;
      p -= 2;
      *p += 1;
      p += 1;
      *p -= 1;
    } while (*p);
    p += 2;
    if (*p) do {
      p += 1;
      *p += 1;
      p -= 4;
      if (*p) do {
        *p -= 1;
        p += 1;
      } while (*p);
      p += 1;
      if (*p) do {
        p -= 1;
      } while (*p);
      p += 2;
      *p -= 1;
    } while (*p);
    p -= 3;
    if (*p) do {
      if (*p) do {
        *p -= 1;
      } while (*p);
      p += 2;
      if (*p) do {
        p += 1;
        *p += 1;
        p -= 1;
        *p -= 1;
      } while (*p);
      p += 2;
      if (*p) do {
        p -= 3;
        *p += 1;
        p += 3;
        *p -= 1;
      } while (*p);
    } while (*p);
    p += 2;
    if (*p) do {
      if (*p) do {
        p -= 1;
        *p += 1;
        p += 1;
        *p -= 1;
      } while (*p);
      p += 2;
    } while (*p);
    p -= 1;
  } while (*p);
  p -= 2;
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
  putchar(*p);
  p += 2;
} while (*p);
