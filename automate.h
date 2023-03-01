#include <string>
#include "symbole.h"
#include "lexer.h"
class Etat;
using namespace std;

class Automate{
   public:
      Automate() { }
      ~Automate() { }

   protected:
      vector <Symbole*> pileSymbole;
      vector <Etat*> pileEtat;
      Lexer lexer;
};