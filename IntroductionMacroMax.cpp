{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sl240\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'c8\'e7 \'eb\'e5\'ea\'f6\'e8\'e8 \'e2\'fb \'f3\'e7\'ed\'e0\'eb\'e8, \'f7\'f2\'ee \'e8\'f1\'ef\'ee\'eb\'fc\'e7\'ee\'e2\'e0\'ed\'e8\'e5 \'ec\'e0\'ea\'f0\'ee\'f1\'ee\'e2 \'e2\'ec\'e5\'f1\'f2\'ee \'f4\'f3\'ed\'ea\'f6\'e8\'e9 \emdash  \'fd\'f2\'ee \'e7\'eb\'ee. \'c4\'eb\'ff \'f2\'ee\'e3\'ee, \'f7\'f2\'ee\'e1\'fb \'eb\'f3\'f7\'f8\'e5 \'e2 \'f0\'e0\'e7\'ee\'e1\'f0\'e0\'f2\'fc\'f1\'ff, \'ef\'ee\'f7\'e5\'ec\'f3 \'f2\'e0\'ea \'ed\'e5\'ef\'f0\'ee\'f1\'f2\'ee \'ed\'e0\'ef\'e8\'f1\'e0\'f2\'fc \'f5\'ee\'f0\'ee\'f8\'e8\'e9 \'ec\'e0\'ea\'f0\'ee\'f1, \'e8 \'ef\'ee\'f7\'e5\'ec\'f3 \'ec\'e0\'ea\'f0\'ee\'f1\'fb \'eb\'f3\'f7\'f8\'e5 \'ed\'e5 \'e8\'f1\'ef\'ee\'eb\'fc\'e7\'ee\'e2\'e0\'f2\'fc, \'ec\'fb \'ef\'f0\'e5\'e4\'eb\'e0\'e3\'e0\'e5\'ec \'e2\'e0\'ec \'f1\'e0\'ec\'ee\'f1\'f2\'ee\'ff\'f2\'e5\'eb\'fc\'ed\'ee \'f0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'e0\'f2\'fc \'f2\'e0\'ea\'f3\'fe \'f4\'f3\'ed\'ea\'f6\'e8\'fe-\'ec\'e0\'ea\'f0\'ee\'f1.\par
\'d0\'e5\'e0\'eb\'e8\'e7\'f3\'e9\'f2\'e5 \'ec\'e0\'ea\'f0\'ee\'f1 MAX \'ee\'f2 \'f2\'f0\'b8\'f5 \'ef\'e0\'f0\'e0\'ec\'e5\'f2\'f0\'ee\'e2, \'ea\'ee\'f2\'ee\'f0\'fb\'e9 \'ef\'f0\'e8\'f1\'e2\'e0\'e8\'e2\'e0\'e5\'f2 \'f6\'e5\'eb\'ee\'f7\'e8\'f1\'eb\'e5\'ed\'ed\'ee\'e9 \'ef\'e5\'f0\'e5\'ec\'e5\'ed\'ed\'ee\'e9, \'ef\'e5\'f0\'e5\'e4\'e0\'ed\'ed\'ee\'e9 \'e2 \'ea\'e0\'f7\'e5\'f1\'f2\'e2\'e5 \'f2\'f0\'e5\'f2\'fc\'e5\'e3\'ee \'e0\'f0\'e3\'f3\'ec\'e5\'ed\'f2\'e0, \'ed\'e0\'e8\'e1\'ee\'eb\'fc\'f8\'e5\'e5 \'e8\'e7 \'e7\'ed\'e0\'f7\'e5\'ed\'e8\'e9, \'ef\'e5\'f0\'e5\'e4\'e0\'ed\'ed\'fb\'f5 \'e2 \'ef\'e5\'f0\'e2\'fb\'f5 \'e4\'e2\'f3\'f5 \'e0\'f0\'e3\'f3\'ec\'e5\'ed\'f2\'e0\'f5. \'cf\'f0\'e8\'ec\'e5\'f0 \'e2\'fb\'e7\'ee\'e2\'e0 \'ec\'e0\'ea\'f0\'ee\'f1\'e0:\par
\par
int a = 10;\par
int b = 20;\par
int c;\par
MAX(a, b, c); // \'f2\'e5\'ef\'e5\'f0\'fc c \'f0\'e0\'e2\'ed\'ee 20 \par
\'cf\'f0\'e8 \'ed\'e0\'ef\'e8\'f1\'e0\'ed\'e8\'e8 \'ec\'e0\'ea\'f0\'ee\'f1\'e0 \'ef\'ee\'f1\'f2\'e0\'f0\'e0\'e9\'f2\'e5\'f1\'fc \'f3\'f7\'e5\'f1\'f2\'fc \'ea\'e0\'ea \'ec\'ee\'e6\'ed\'ee \'e1\'ee\'eb\'fc\'f8\'e5 \'e2\'e0\'f0\'e8\'e0\'ed\'f2\'ee\'e2 \'e5\'e3\'ee \'e8\'f1\'ef\'ee\'eb\'fc\'e7\'ee\'e2\'e0\'ed\'e8\'ff. \par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'ee \'f0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'e0\'f2\'fc \'f2\'ee\'eb\'fc\'ea\'ee \'ec\'e0\'ea\'f0\'ee\'f1 MAX, \'f4\'f3\'ed\'ea\'f6\'e8\'fe main \'e8 \'ea\'e0\'ea\'e8\'e5-\'eb\'e8\'e1\'ee \'e4\'f0\'f3\'e3\'e8\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8 \'f0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'fb\'e2\'e0\'f2\'fc \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \'cf\'ee\'ef\'f0\'ee\'e1\'f3\'e9\'f2\'e5 \'f0\'e5\'f8\'e8\'f2\'fc \'fd\'f2\'f3 \'e7\'e0\'e4\'e0\'f7\'f3 \'e8\'f1\'ea\'eb\'fe\'f7\'e8\'f2\'e5\'eb\'fc\'ed\'ee \'f1\'f0\'e5\'e4\'f1\'f2\'e2\'e0\'ec\'e8 \'ec\'e0\'ea\'f0\'ee\'f1\'ee\'e2. \par
\'cf\'ee\'e4\'f1\'ea\'e0\'e7\'ea\'e0: \'e2\'ee\'e7\'ec\'ee\'e6\'ed\'ee \'e2\'e0\'ec \'ef\'ee\'f2\'f0\'e5\'e1\'f3\'e5\'f2\'f1\'ff \'ea\'e0\'ea\'e0\'ff-\'ed\'e8\'e1\'f3\'e4\'fc \'f1\'e8\'ed\'f2\'e0\'ea\'f1\'e8\'f7\'e5\'f1\'ea\'e0\'ff \'ea\'ee\'ed\'f1\'f2\'f0\'f3\'ea\'f6\'e8\'ff \'e4\'eb\'ff \'ee\'e1\'fa\'e5\'e4\'e8\'ed\'e5\'ed\'e8\'ff \'ed\'e5\'f1\'ea\'ee\'eb\'fc\'ea\'e8\'f5 \'e8\'ed\'f1\'f2\'f0\'f3\'ea\'f6\'e8\'e9.\par
*/\par
\par
#define MAX(x, y, r) \{ \\\par
    int temp1, temp2; \\\par
    int res = 0; \\\par
    temp1 = x; \\\par
    temp2 = y;\\\par
    temp1 > temp2 ? ( (res) = (res) + (temp1) ) : ( (res) = (res) + (temp2) ); \\\par
    r = res; \\\par
\}\par
}
 