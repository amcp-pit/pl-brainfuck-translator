if (*p) do {
  p += 2;
  if (*p) do {
    p -= 2;
  } while (*p);
} while (*p);
