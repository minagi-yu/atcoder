#include <stdio.h>
#include <string.h>

int my_strcmp(char *s, char *t);
void my_strcpy (char *s, char *t);
void fill_a (char *s);

int main(void) {
    char s[51], s_[51], t[51], s2[51];
    int i;
    int unrestorable = 1;

    scanf("%s", s_);
    scanf("%s", t);

    for (i = 0; s_[i] != '\0'; i++) {
        // printf("%d\n", my_strcmp(&s_[i], t));
        if (my_strcmp(&s_[i], t)) {
            strcpy(s2, s_);
            my_strcpy(&s2[i], t);
            fill_a(s2);
            // puts(s2);
            if (unrestorable == 1) {
                strcpy(s, s2);
            } else {
                if (strcmp(s, s2) > 0) {
                    strcpy(s, s2);
                }
            }

            unrestorable = 0;
        }
    }

    if (unrestorable == 1) {
        puts("UNRESTORABLE");
    } else {
        puts(s);
    }
    return 0;
}

int my_strcmp (char *s, char *t) {
    char *cs, *ct;
    cs = s; ct = t;
    for (; *ct != '\0'; cs++, ct++) {
        // putchar(*cs);
        // putchar(*ct);
        if (*cs == '\0') return 0;
        if (*cs != *ct && *cs != '?') {
            return 0;
        }
    }
    return 1;
}

void my_strcpy (char *s, char *t) {
    int i;
    for(i = 0; t[i] != '\0'; i++) {
        s[i] = t[i];
    }
}

void fill_a (char *s) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '?') {
            s[i] = 'a';
        }
    }
}

/*
int strcmp(const char *s1, const char *s2)
{
  const unsigned char *_s1, *_s2;
  _s1 = *s1; _s2 = *s2;
  for (;*_s1 != '\0' && *_s2 != '\0'; _s1++, _s2++) {

  }

  return ;
}
*/