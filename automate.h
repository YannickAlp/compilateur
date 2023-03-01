#include <string>
#include "symbole.h"
class Etat;
using namespace std;

class Automate{
   public:
      Automate() { }
      ~Automate() { }

   protected:
      string flux;
      int tete;
      Symbole * tampon;
};