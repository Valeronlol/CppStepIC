{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'fe, \'ea\'ee\'f2\'ee\'f0\'e0\'ff \'ef\'f0\'e8\'ed\'e8\'ec\'e0\'e5\'f2 \'ed\'e0 \'e2\'f5\'ee\'e4 \'f6\'e5\'eb\'ee\'f7\'e8\'f1\'eb\'e5\'ed\'ed\'f3\'fe \'ec\'e0\'f2\'f0\'e8\'f6\'f3 M (\'e4\'f0\'f3\'e3\'e8\'ec\'e8 \'f1\'eb\'ee\'e2\'e0\'ec\'e8, \'ef\'f0\'ee\'f1\'f2\'ee \'e4\'e2\'f3\'ec\'e5\'f0\'ed\'fb\'e9 \'f6\'e5\'eb\'ee\'f7\'e8\'f1\'eb\'e5\'ed\'ed\'fb\'e9 \'ec\'e0\'f1\'f1\'e8\'e2) \'f0\'e0\'e7\'ec\'e5\'f0\'e0 rows\lang1033\f0\'d7cols, \lang1049\f1\'e8 \'e2\'ee\'e7\'e2\'f0\'e0\'f9\'e0\'e5\'f2 \'f2\'f0\'e0\'ed\'f1\'ef\'ee\'ed\'e8\'f0\'ee\'e2\'e0\'ed\'ed\'f3\'fe \'ec\'e0\'f2\'f0\'e8\'f6\'f3 MT (\'f2\'ee\'e6\'e5 \'e4\'e2\'f3\'ec\'e5\'f0\'ed\'fb\'e9 \'f6\'e5\'eb\'ee\'f7\'e8\'f1\'eb\'e5\'ed\'ed\'fb\'e9 \'ec\'e0\'f1\'f1\'e8\'e2) \'f0\'e0\'e7\'ec\'e5\'f0\'e0 cols\lang1033\f0\'d7rows. \lang1049\f1\'c5\'f1\'eb\'e8 \'e2 M \'ed\'e0 \'ef\'e5\'f0\'e5\'f1\'e5\'f7\'e5\'ed\'e8\'e8 i-\'ee\'e9 \'f1\'f2\'f0\'ee\'ea\'e8 \'e8 j-\'ee\'e3\'ee \'f1\'f2\'ee\'eb\'e1\'f6\'e0 \'f1\'f2\'ee\'ff\'eb\'ee \'f7\'e8\'f1\'eb\'ee x, \'f2\'ee \'ed\'e0 \'ef\'e5\'f0\'e5\'f1\'e5\'f7\'e5\'ed\'e8\'e8  j-\'ee\'e9 \'f1\'f2\'f0\'ee\'ea\'e8 \'e8 i-\'ee\'e3\'ee \'f1\'f2\'ee\'eb\'e1\'f6\'e0 \'e2 \'ec\'e0\'f2\'f0\'e8\'f6\'e5 MT \'f2\'ee\'e6\'e5 \'e1\'f3\'e4\'e5\'f2 \'f1\'f2\'ee\'ff\'f2\'fc \'f7\'e8\'f1\'eb\'ee x, \'e8\'eb\'e8 \'e4\'f0\'f3\'e3\'e8\'ec\'e8 \'f1\'eb\'ee\'e2\'e0\'ec\'e8 MT[j][i]=M[i][j].\par
\par
\'ce\'e1\'f0\'e0\'f2\'e8\'f2\'e5 \'e2\'ed\'e8\'ec\'e0\'ed\'e8\'e5, \'f7\'f2\'ee \'e2\'e0\'ec \'ed\'e5\'e8\'e7\'e2\'e5\'f1\'f2\'ed\'ee, \'ea\'e0\'ea\'e8\'ec \'e8\'ec\'e5\'ed\'ed\'ee \'f1\'ef\'ee\'f1\'ee\'e1\'ee\'ec \'e2\'fb\'e4\'e5\'eb\'ff\'eb\'e0\'f1\'fc \'ef\'e0\'ec\'ff\'f2\'fc \'e4\'eb\'ff \'ec\'e0\'f1\'f1\'e8\'e2\'e0 M. \'c2\'fb\'e4\'e5\'eb\'ff\'f2\'fc \'ef\'e0\'ec\'ff\'f2\'fc \'ef\'ee\'e4 \'ec\'e0\'f1\'f1\'e8\'e2 MT \'ec\'ee\'e6\'e5\'f2\'e5 \'eb\'fe\'e1\'fb\'ec \'f3\'e4\'ee\'e1\'ed\'fb\'ec \'e2\'e0\'ec \'f1\'ef\'ee\'f1\'ee\'e1\'ee\'ec. \'c8\'e7\'ec\'e5\'ed\'ff\'f2\'fc \'e8\'f1\'f5\'ee\'e4\'ed\'f3\'fe \'ec\'e0\'f2\'f0\'e8\'f6\'f3 \'ed\'e5\'eb\'fc\'e7\'ff. \par
\par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'ef\'f0\'e8 \'e2\'fb\'ef\'ee\'eb\'ed\'e5\'ed\'e8\'e8 \'fd\'f2\'ee\'e3\'ee \'e7\'e0\'e4\'e0\'ed\'e8\'ff \'e2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'eb\'fe\'e1\'fb\'e5 \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8. \'c2\'e2\'ee\'e4\'e8\'f2\'fc \'e8\'eb\'e8 \'e2\'fb\'e2\'ee\'e4\'e8\'f2\'fc \'f7\'f2\'ee-\'eb\'e8\'e1\'ee \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \'d0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'fb\'e2\'e0\'f2\'fc \'f4\'f3\'ed\'ea\'f6\'e8\'fe main \'ed\'e5 \'ed\'f3\'e6\'ed\'ee.\par
*/\par
\par
\pard\sl240\slmult1 int ** transpose(const int * const * m, unsigned rows, unsigned cols)\par
\{\par
        \par
    // dynamically allocate an array\par
    int **result;\par
    result = new int *[cols]; //creates a new array of pointers to int objects\par
    for (int i = 0; i < cols; i++)\par
        result[i] = new int[rows];\par
    \par
    // transposing\par
    for (int i = 0; i<rows; i++)\par
        for (int j = 0; j<cols; j++)\par
            result[j][i] = m[i][j];\par
    \par
    return result;\par
\}\lang9\f0\par
}
 