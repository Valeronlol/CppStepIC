{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sl240\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'fe power, \'f0\'e5\'e0\'eb\'e8\'e7\'f3\'fe\'f9\'f3\'fe \'e2\'ee\'e7\'e2\'e5\'e4\'e5\'ed\'e8\'e5 \'f6\'e5\'eb\'ee\'e3\'ee \'f7\'e8\'f1\'eb\'e0 \'e2 \'ed\'e5\'ee\'f2\'f0\'e8\'f6\'e0\'f2\'e5\'eb\'fc\'ed\'f3\'fe \'f6\'e5\'eb\'f3\'fe \'f1\'f2\'e5\'ef\'e5\'ed\'fc. \'d4\'f3\'ed\'ea\'f6\'e8\'ff power \'e4\'ee\'eb\'e6\'ed\'e0 \'ef\'f0\'e8\'ed\'e8\'ec\'e0\'f2\'fc \'ed\'e0 \'e2\'f5\'ee\'e4 \'e4\'e2\'e0 \'f6\'e5\'eb\'fb\'f5 \'f7\'e8\'f1\'eb\'e0 \'e8 \'e2\'ee\'e7\'e2\'f0\'e0\'f9\'e0\'f2\'fc \'f6\'e5\'eb\'ee\'e5 \'f7\'e8\'f1\'eb\'ee (\'f1\'ec\'ee\'f2\'f0\'e8\'f2\'e5 \'f8\'e0\'e1\'eb\'ee\'ed \'ea\'ee\'e4\'e0). \'cf\'f0\'e8 \'e2\'fb\'ef\'ee\'eb\'ed\'e5\'ed\'e8\'e8 \'e7\'e0\'e4\'e0\'ed\'e8\'ff \'f3\'f7\'f2\'e8\'f2\'e5, \'f7\'f2\'ee \'f4\'f3\'ed\'ea\'f6\'e8\'ff \'ee\'e1\'ff\'e7\'e0\'f2\'e5\'eb\'fc\'ed\'ee \'e4\'ee\'eb\'e6\'ed\'e0 \'ed\'e0\'e7\'fb\'e2\'e0\'f2\'fc\'f1\'ff power, \'f4\'f3\'ed\'ea\'f6\'e8\'ff \'ed\'e8\'f7\'e5\'e3\'ee \'ed\'e5 \'e4\'ee\'eb\'e6\'ed\'e0 \'f7\'e8\'f2\'e0\'f2\'fc \'f1\'ee \'e2\'f5\'ee\'e4\'e0 \'e8\'eb\'e8 \'e2\'fb\'e2\'ee\'e4\'e8\'f2\'fc. \par
\par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'e2 \'fd\'f2\'ee\'ec \'e7\'e0\'e4\'e0\'ed\'e8\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'ee \'f0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'e0\'f2\'fc \'f2\'ee\'eb\'fc\'ea\'ee \'f4\'f3\'ed\'ea\'f6\'e8\'fe power. \'c2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8, \'e5\'f1\'eb\'e8 \'ee\'ed\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'fb. \'d0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'fb\'e2\'e0\'f2\'fc \'f4\'f3\'ed\'ea\'f6\'e8\'e8 main \'ed\'e5 \'ed\'f3\'e6\'ed\'ee.\par
*/\par
\par
// \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'e8\'f2\'e5 \'f2\'ee\'eb\'fc\'ea\'ee \'f4\'f3\'ed\'ea\'f6\'e8\'fe power, \'e3\'e4\'e5\par
//    x - \'f7\'e8\'f1\'eb\'ee, \'ea\'ee\'f2\'ee\'f0\'ee\'e5 \'ed\'f3\'e6\'ed\'ee \'e2\'ee\'e7\'e2\'e5\'f1\'f2\'e8 \'e2 \'f1\'f2\'e5\'ef\'e5\'ed\'fc\par
//    p - \'f1\'f2\'e5\'ef\'e5\'ed\'fc, \'e2 \'ea\'ee\'f2\'ee\'f0\'f3\'fe \'ed\'f3\'e6\'ed\'ee \'e2\'ee\'e7\'e2\'e5\'f1\'f2\'e8 x\par
//\par
\par
int power(int x, unsigned p) \{\par
    int answer = 1;\par
    /* \'f1\'f7\'e8\'f2\'e0\'e5\'ec answer */\par
    for (int i = 0; i < p; i++)\par
    \{\par
        answer *= x;\par
    \}\par
    return answer;\par
\}\par
}
 