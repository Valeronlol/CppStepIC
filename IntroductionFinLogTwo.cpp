{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sl240\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'f3 \'e4\'eb\'ff \'e2\'fb\'f7\'e8\'f1\'eb\'e5\'ed\'e8\'ff \'f6\'e5\'eb\'ee\'f7\'e8\'f1\'eb\'e5\'ed\'ed\'ee\'e3\'ee \'eb\'ee\'e3\'e0\'f0\'e8\'f4\'ec\'e0 \'ef\'ee \'ee\'f1\'ed\'ee\'e2\'e0\'ed\'e8\'fe 2. \'cd\'e0 \'e2\'f5\'ee\'e4 \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'e5 \'e2 \'ef\'e5\'f0\'e2\'ee\'e9 \'f1\'f2\'f0\'ee\'ea\'e5 \'ef\'ee\'e4\'e0\'e5\'f2\'f1\'ff \'f7\'e8\'f1\'eb\'ee T, \'e4\'e0\'eb\'e5\'e5 \'f1\'eb\'e5\'e4\'f3\'e5\'f2 T \'f1\'f2\'f0\'ee\'ea \'f1 \'f2\'e5\'f1\'f2\'e0\'ec\'e8. \'ca\'e0\'e6\'e4\'fb\'e9 \'f2\'e5\'f1\'f2 \'f1\'ee\'f1\'f2\'ee\'e8\'f2 \'e8\'e7 \'ee\'e4\'ed\'ee\'e3\'ee \'f6\'e5\'eb\'ee\'e3\'ee \'ef\'ee\'eb\'ee\'e6\'e8\'f2\'e5\'eb\'fc\'ed\'ee\'e3\'ee \'f7\'e8\'f1\'eb\'e0 ai<109, \'e4\'eb\'ff \'ea\'e0\'e6\'e4\'ee\'e3\'ee ai \'ed\'f3\'e6\'ed\'ee \'e2\'fb\'e2\'e5\'f1\'f2\'e8 \'ed\'e0 \'ee\'f2\'e4\'e5\'eb\'fc\'ed\'ee\'e9 \'f1\'f2\'f0\'ee\'ea\'e5 \'f2\'e0\'ea\'ee\'e5 \'ed\'e0\'e8\'e1\'ee\'eb\'fc\'f8\'e5\'e5 \'f7\'e8\'f1\'eb\'ee p, \'f7\'f2\'ee 2p\u8804?ai. \'c3\'e0\'f0\'e0\'ed\'f2\'e8\'f0\'f3\'e5\'f2\'f1\'ff, \'f7\'f2\'ee ai\u8805?1 . \'cf\'f0\'e8 \'f0\'e5\'f8\'e5\'ed\'e8\'e8 \'e7\'e0\'e4\'e0\'f7\'e8 \'e2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'eb\'fe\'e1\'fb\'e5 \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8, \'e5\'f1\'eb\'e8 \'ee\'ed\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'fb, \'e1\'ee\'eb\'e5\'e5 \'f2\'ee\'e3\'ee \'f0\'e5\'ea\'ee\'ec\'e5\'ed\'e4\'f3\'e5\'f2\'f1\'ff \'e2\'fb\'ed\'e5\'f1\'f2\'e8 \'e2\'fb\'f7\'e8\'f1\'eb\'e5\'ed\'e8\'e5 \'eb\'ee\'e3\'e0\'f0\'e8\'f4\'ec\'e0 \'e2 \'ee\'f2\'e4\'e5\'eb\'fc\'ed\'f3\'fe \'f4\'f3\'ed\'ea\'f6\'e8\'fe.\par
*/\par
\par
#include <iostream>\par
using namespace std;\par
\par
unsigned power(unsigned value, unsigned power) \{\par
\tab unsigned result = 1;\par
\par
\tab for (unsigned i = 0; i < power; ++i) \{\par
\tab\tab result *= value;\par
\tab\}\par
\tab return (result);\par
\}\par
\par
int main() \{\par
    int T, a, p;\par
    int b;\par
    cin >> T;\par
    for (int i = 0; i < T; i++)\{\par
        cin >> a;\par
        p = 1;\par
        do \{\par
            b = power(2, p);\par
            p++;\par
        \} while ( (a - b) > 1);\par
        p-=2;\par
        cout << p << endl;\par
    \}    \par
  return 0;\par
\}\par
}
 