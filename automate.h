#include <string>
#include "symbole.h"
#include "lexer.h"
#include <vector>

class Etat;
using namespace std;

class Automate{
   public:
      Automate() { }
      ~Automate() { }
      void decalage(Symbole * s, Etat * e);
      void reduction(Symbole * s, Etat * e);

   protected:
      vector <Symbole*> pileSymbole;
      vector <Etat*> pileEtat;
      Lexer * lexer;
};