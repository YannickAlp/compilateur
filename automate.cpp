#include <iostream>
#include <vector>
#include "automate.h"

void Automate::decalage(Symbole * s, Etat * e) {
    pileSymbole.push_back(s);
    pileEtat.push_back(e);
    if (s->isTerminal()) {
        lexer->Avancer();
    }
}

void Automate::reduction(Symbole * s, Etat * e) {
    int n = 5;
    for (int i = 0; i < n; i++) {
        cout << pileSymbole[pileSymbole.size()-1] << endl;
        pileSymbole.pop_back();
        pileEtat.pop_back();
    }
    if (s->isTerminal()) {
        lexer->Avancer();
    }
}