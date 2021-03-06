{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'c2\'e0\'ec \'f2\'f0\'e5\'e1\'f3\'e5\'f2\'f1\'ff \'f0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'e0\'f2\'fc \'f4\'f3\'ed\'ea\'f6\'e8\'fe \'ea\'ee\'ed\'ea\'e0\'f2\'e5\'ed\'e0\'f6\'e8\'e8 (\'f1\'ea\'eb\'e5\'e9\'ea\'e8) \'e4\'e2\'f3\'f5 C-style \'f1\'f2\'f0\'ee\'ea. \'d4\'f3\'ed\'ea\'f6\'e8\'ff \'ea\'ee\'ed\'ea\'e0\'f2\'e5\'ed\'e0\'f6\'e8\'e8 \'ef\'f0\'e8\'ed\'e8\'ec\'e0\'e5\'f2 \'ed\'e0 \'e2\'f5\'ee\'e4 \'e4\'e2\'e5 C-style \'f1\'f2\'f0\'ee\'ea\'e8 \'e8 \'e4\'ee\'ef\'e8\'f1\'fb\'e2\'e0\'e5\'f2 \'e2\'f2\'ee\'f0\'f3\'fe \'e2 \'ea\'ee\'ed\'e5\'f6 \'ef\'e5\'f0\'e2\'ee\'e9 \'f2\'e0\'ea, \'f7\'f2\'ee\'e1\'fb \'ef\'e5\'f0\'e2\'e0\'ff \'f1\'f2\'f0\'ee\'ea\'e0 \'ef\'f0\'e5\'e4\'f1\'f2\'e0\'e2\'eb\'ff\'eb\'e0 \'e8\'e7 \'f1\'e5\'e1\'ff \'ee\'e4\'ed\'f3 C-style \'f1\'f2\'f0\'ee\'ea\'f3 \'f0\'e0\'e2\'ed\'f3\'fe \'ea\'ee\'ed\'ea\'e0\'f2\'e5\'ed\'e0\'f6\'e8\'e8 \'e4\'e2\'f3\'f5 \'e8\'f1\'f5\'ee\'e4\'ed\'fb\'f5. \par
\par
\'cd\'e5 \'e7\'e0\'e1\'f3\'e4\'fc\'f2\'e5, \'f7\'f2\'ee \'e2 \'f0\'e5\'e7\'f3\'eb\'fc\'f2\'e8\'f0\'f3\'fe\'f9\'e5\'e9 \'f1\'f2\'f0\'ee\'ea\'e5 \'e4\'ee\'eb\'e6\'e5\'ed \'e1\'fb\'f2\'fc \'f2\'ee\'eb\'fc\'ea\'ee \'ee\'e4\'e8\'ed \'ed\'f3\'eb\'e5\'e2\'ee\'e9 \'f1\'e8\'ec\'e2\'ee\'eb \emdash  \'f2\'ee\'f2, \'f7\'f2\'ee \'ff\'e2\'eb\'ff\'e5\'f2\'f1\'ff \'ec\'e0\'f0\'ea\'e5\'f0\'ee\'ec \'ea\'ee\'ed\'f6\'e0 \'f1\'f2\'f0\'ee\'ea\'e8. \par
\'c3\'e0\'f0\'e0\'ed\'f2\'e8\'f0\'f3\'e5\'f2\'f1\'ff, \'f7\'f2\'ee \'e2 \'ef\'e5\'f0\'e2\'ee\'e9 \'f1\'f2\'f0\'ee\'ea\'e5 \'e4\'ee\'f1\'f2\'e0\'f2\'ee\'f7\'ed\'ee \'ef\'e0\'ec\'ff\'f2\'e8 (\'f2.\'e5. \'ee\'ed\'e0 \'f0\'e0\'f1\'ef\'ee\'eb\'e0\'e3\'e0\'e5\'f2\'f1\'ff \'e2 \'ec\'e0\'f1\'f1\'e8\'e2\'e5 \'e4\'ee\'f1\'f2\'e0\'f2\'ee\'f7\'ed\'ee\'e9 \'e4\'eb\'e8\'ed\'fb), \'f7\'f2\'ee\'e1\'fb \'f0\'e0\'e7\'ec\'e5\'f1\'f2\'e8\'f2\'fc \'ea\'ee\'ed\'ea\'e0\'f2\'e5\'ed\'e0\'f6\'e8\'fe \'ee\'e1\'e5\'e8\'f5 \'f1\'f2\'f0\'ee\'ea, \'ed\'ee \'ed\'e5 \'e1\'ee\'eb\'fc\'f8\'e5.\par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'ef\'f0\'e8 \'e2\'fb\'ef\'ee\'eb\'ed\'e5\'ed\'e8\'e8 \'e7\'e0\'e4\'e0\'ed\'e8\'ff \'e2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'eb\'fe\'e1\'fb\'e5 \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8, \'e5\'f1\'eb\'e8 \'ee\'ed\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'fb. \'c2\'fb\'e2\'ee\'e4\'e8\'f2\'fc \'e8\'eb\'e8 \'e2\'e2\'ee\'e4\'e8\'f2\'fc \'f7\'f2\'ee-\'eb\'e8\'e1\'ee \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \'d4\'f3\'ed\'ea\'f6\'e8\'fe main \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'ed\'e5 \'ed\'f3\'e6\'ed\'ee.\par
*/\par
\par
\pard\sl240\slmult1 unsigned strlen(const char *str)\par
\{\par
    return (*str) ? strlen(++str) + 1 : 0;\par
\}\par
\par
void strcat(char *to, const char *from)\par
\{\par
    int first_length = strlen(to);\par
    for (int i = 0; i < strlen(from); i++) \{\par
        *(to + first_length + i) = *(from + i);\par
    \}\par
\}\par
}
 