{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'fe \'ef\'ee\'e8\'f1\'ea\'e0 \'ef\'e5\'f0\'e2\'ee\'e3\'ee \'e2\'f5\'ee\'e6\'e4\'e5\'ed\'e8\'ff \'f8\'e0\'e1\'eb\'ee\'ed\'e0 \'e2 \'f2\'e5\'ea\'f1\'f2. \'c2 \'ea\'e0\'f7\'e5\'f1\'f2\'e2\'e5 \'ef\'e5\'f0\'e2\'ee\'e3\'ee \'ef\'e0\'f0\'e0\'ec\'e5\'f2\'f0\'e0 \'f4\'f3\'ed\'ea\'f6\'e8\'ff \'ef\'f0\'e8\'ed\'e8\'ec\'e0\'e5\'f2 \'f2\'e5\'ea\'f1\'f2 (C-style \'f1\'f2\'f0\'ee\'ea\'e0), \'e2 \'ea\'ee\'f2\'ee\'f0\'ee\'e9 \'ed\'f3\'e6\'ed\'ee \'e8\'f1\'ea\'e0\'f2\'fc \'f8\'e0\'e1\'eb\'ee\'ed. \'c2 \'ea\'e0\'f7\'e5\'f1\'f2\'e2\'e5 \'e2\'f2\'ee\'f0\'ee\'e3\'ee \'ef\'e0\'f0\'e0\'ec\'e5\'f2\'f0\'e0 \'f1\'f2\'f0\'ee\'ea\'f3-\'f8\'e0\'e1\'eb\'ee\'ed (C-style \'f1\'f2\'f0\'ee\'ea\'e0), \'ea\'ee\'f2\'ee\'f0\'f3\'fe \'ed\'f3\'e6\'ed\'ee \'ed\'e0\'e9\'f2\'e8. \'d4\'f3\'ed\'ea\'f6\'e8\'ff \'e2\'ee\'e7\'e2\'f0\'e0\'f9\'e0\'e5\'f2 \'ef\'ee\'e7\'e8\'f6\'e8\'fe \'ef\'e5\'f0\'e2\'ee\'e3\'ee \'e2\'f5\'ee\'e6\'e4\'e5\'ed\'e8\'ff \'f1\'f2\'f0\'ee\'ea\'e8-\'f8\'e0\'e1\'eb\'ee\'ed\'e0, \'e5\'f1\'eb\'e8 \'ee\'ed \'ef\'f0\'e8\'f1\'f3\'f2\'f1\'f2\'e2\'f3\'e5\'f2 \'e2 \'f1\'f2\'f0\'ee\'ea\'e5 (\'ef\'ee\'ec\'ed\'e8\'f2\'e5, \'f7\'f2\'ee \'e2 C++ \'ef\'f0\'e8\'ed\'ff\'f2\'ee \'f1\'f7\'e8\'f2\'e0\'f2\'fc \'f1 0), \'e8 -1, \'e5\'f1\'eb\'e8 \'f8\'e0\'e1\'eb\'ee\'ed\'e0 \'e2 \'f2\'e5\'ea\'f1\'f2\'e5 \'ed\'e5\'f2. \par
\'d3\'f7\'f2\'e8\'f2\'e5, \'f7\'f2\'ee \'ef\'f3\'f1\'f2\'ee\'e9 \'f8\'e0\'e1\'eb\'ee\'ed (\'f1\'f2\'f0\'ee\'ea\'e0 \'e4\'eb\'e8\'ed\'fb 0) \'ec\'ee\'e6\'ed\'ee \'ed\'e0\'e9\'f2\'e8 \'e2 \'eb\'fe\'e1\'ee\'ec \'ec\'e5\'f1\'f2\'e5 \'f2\'e5\'ea\'f1\'f2\'e0. \par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'ef\'f0\'e8 \'e2\'fb\'ef\'ee\'eb\'ed\'e5\'ed\'e8\'e8 \'e4\'e0\'ed\'ed\'ee\'e3\'ee \'e7\'e0\'e4\'e0\'ed\'e8\'ff \'e2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'eb\'fe\'e1\'fb\'e5 \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8, \'e5\'f1\'eb\'e8 \'ee\'ed\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'fb. \'c2\'e2\'ee\'e4\'e8\'f2\'fc \'e8\'eb\'e8 \'e2\'fb\'e2\'ee\'e4\'e8\'f2\'fc \'f7\'f2\'ee-\'eb\'e8\'e1\'ee \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \'d0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'fb\'e2\'e0\'f2\'fc \'f4\'f3\'ed\'ea\'f6\'e8\'fe main \'ed\'e5 \'ed\'f3\'e6\'ed\'ee.\par
*/\par
\par
\pard\sl240\slmult1 unsigned my_strlen(const char *str)\par
\{\par
    return (*str) ? my_strlen(++str) + 1 : 0;\par
\}\par
\par
int strstr(const char *text, const char *pattern) \{\par
    \par
    \par
    int i;\par
    int j;\par
    int length1 = my_strlen(text);\par
    int length2 = my_strlen(pattern);\par
\lang1033\f0\tab\par
    \lang1049\f1 if ( !*pattern ) return 0;\par
    if (!*text) return -1;\par
    \par
\lang1033\f0     \lang1049\f1 if(length1 < length2) return -1;\par
    \par
    for(i = 0; i < length1; i++) \{\par
        for(j = 0; j < length2; j++) \{\par
            // The index to use access the element of text needs to be offset by i.\par
            if( text[i+j] != pattern[j] ) break;       \par
        \}    \par
        if ( j == length2 ) return i;   \par
    \}\par
    return -1;\par
\}\par
}
 