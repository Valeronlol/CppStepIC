{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sl240\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'c2\'e0\'ec \'f2\'f0\'e5\'e1\'f3\'e5\'f2\'f1\'ff \'ed\'e0\'ef\'e8\'f1\'e0\'f2\'fc \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'f3, \'ea\'ee\'f2\'ee\'f0\'e0\'ff "\'ef\'e5\'f0\'e5\'e2\'ee\'f0\'e0\'f7\'e8\'e2\'e0\'e5\'f2" \'ef\'ee\'f1\'eb\'e5\'e4\'ee\'e2\'e0\'f2\'e5\'eb\'fc\'ed\'ee\'f1\'f2\'fc \'ef\'ee\'eb\'ee\'e6\'e8\'f2\'e5\'eb\'fc\'ed\'fb\'f5 \'f6\'e5\'eb\'fb\'f5 \'f7\'e8\'f1\'e5\'eb. \'cd\'e0 \'e2\'f5\'ee\'e4 \'ef\'ee\'e4\'e0\'e5\'f2\'f1\'ff \'ef\'ee\'f1\'eb\'e5\'e4\'ee\'e2\'e0\'f2\'e5\'eb\'fc\'ed\'ee\'f1\'f2\'fc \'f0\'e0\'e7\'e4\'e5\'eb\'e5\'ed\'ed\'fb\'f5 \'ef\'f0\'ee\'e1\'e5\'eb\'e0\'ec\'e8 \'ef\'ee\'eb\'ee\'e6\'e8\'f2\'e5\'eb\'fc\'ed\'fb\'f5 \'f6\'e5\'eb\'fb\'f5 \'f7\'e8\'f1\'e5\'eb. \'cf\'ee\'f1\'eb\'e5\'e4\'ee\'e2\'e0\'f2\'e5\'eb\'fc\'ed\'ee\'f1\'f2\'fc \'e7\'e0\'ea\'e0\'ed\'f7\'e8\'e2\'e0\'e5\'f2\'f1\'ff \'ed\'f3\'eb\'e5\'ec. \'d2\'f0\'e5\'e1\'f3\'e5\'f2\'f1\'ff \'e2\'fb\'e2\'e5\'f1\'f2\'e8 \'fd\'f2\'f3 \'ef\'ee\'f1\'eb\'e5\'e4\'ee\'e2\'e0\'f2\'e5\'eb\'fc\'ed\'ee\'f1\'f2\'fc \'e2 \'ee\'e1\'f0\'e0\'f2\'ed\'ee\'ec \'ef\'ee\'f0\'ff\'e4\'ea\'e5. \par
\par
\'cd\'e0 \'e2\'fb\'e2\'ee\'e4\'e5 \'f7\'e8\'f1\'eb\'e0 \'ed\'f3\'e6\'ed\'ee \'f2\'e0\'ea \'e6\'e5 \'f0\'e0\'e7\'e4\'e5\'eb\'e8\'f2\'fc \'ef\'f0\'ee\'e1\'e5\'eb\'e0\'ec\'e8. \'c7\'e0\'e2\'e5\'f0\'f8\'e0\'fe\'f9\'e8\'e9 \'ed\'ee\'eb\'fc \emdash  \'fd\'f2\'ee \'ef\'f0\'ee\'f1\'f2\'ee \'e8\'ed\'e4\'e8\'ea\'e0\'f2\'ee\'f0 \'ea\'ee\'ed\'f6\'e0 \'ef\'ee\'f1\'eb\'e5\'e4\'ee\'e2\'e0\'f2\'e5\'eb\'fc\'ed\'ee\'f1\'f2\'e8, \'ee\'ed \'ed\'e5 \'ff\'e2\'eb\'ff\'e5\'f2\'f1\'ff \'e5\'e5 \'f7\'e0\'f1\'f2\'fc\'fe, \'f2.\'e5. \'e2\'fb\'e2\'ee\'e4\'e8\'f2\'fc \'e5\'e3\'ee \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \par
\par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'e2 \'e4\'e0\'ed\'ed\'ee\'ec \'e7\'e0\'e4\'e0\'ed\'e8\'e8 \'e7\'e0\'ef\'f0\'e5\'f9\'e5\'ed\'ee \'e8\'f1\'ef\'ee\'eb\'fc\'e7\'ee\'e2\'e0\'f2\'fc \'f6\'e8\'ea\'eb\'fb, \'e0 \'f2\'e0\'ea\'e6\'e5 \'e4\'ee\'ef\'ee\'eb\'ed\'e8\'f2\'e5\'eb\'fc\'ed\'f3\'fe \'ef\'e0\'ec\'ff\'f2\'fc: \'ec\'e0\'f1\'f1\'e8\'e2\'fb, \'f1\'f2\'f0\'ee\'ea\'e8 \'e8\'eb\'e8 \'ea\'ee\'ed\'f2\'e5\'e9\'ed\'e5\'f0\'fb (\'e4\'e0\'e6\'e5, \'e5\'f1\'eb\'e8 \'e2\'fb \'f1 \'ed\'e8\'ec\'e8 \'f3\'e6\'e5 \'e7\'ed\'e0\'ea\'ee\'ec\'fb). \'c2\'e0\'ec \'f0\'e0\'e7\'f0\'e5\'f8\'e5\'ed\'ee \'e7\'e0\'e2\'ee\'e4\'e8\'f2\'fc \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8, \'e5\'f1\'eb\'e8 \'ee\'ed\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'fb. \par
\par
\'cf\'ee\'e4\'f1\'ea\'e0\'e7\'ea\'e0: \'e8\'f1\'ef\'ee\'eb\'fc\'e7\'f3\'e9\'f2\'e5 \'f0\'e5\'ea\'f3\'f0\'f1\'e8\'fe.\par
\par
Sample Input:\par
15 26 1 42 0\par
Sample Output:\par
42 1 26 15\par
*/\par
\par
#include <iostream>\par
using namespace std;\par
\par
void foo();\par
\par
void foo() \{\par
    int x;\par
    cin >> x;\par
    if (x != 0) \{\par
        foo();\par
        cout << x << " ";\par
    \}\par
    \par
\}\par
    \par
\par
int main()\par
\{   \par
    foo();\par
\tab return 0;\par
\}\par
}
 