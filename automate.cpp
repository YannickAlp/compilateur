#include <iostream>
#include "automate.h"

void Automate::decalage(Symbole * s, Etat * e) {
    pileSymbole.push_back(s);
    pileEtat.push_back(e);
    if (s->isTerminal()) {
        lexer->Avancer();
    }
}

void Automate::reduction(int n,Symbole * s) {
    for (int i=0;i<n;i++)
    {
        delete(pileEtat.back());
        pileEtat.pop_back();
    }
    pileEtat.back()->transition(*this,s);
}
