#include <string>
#include "automate.h"
#include "symbole.h"
using namespace std;

class Etat {
    public:
        Etat() { }
        virtual ~Etat() { }
        virtual bool transition(Automate &a, Symbole * s)=0;

    protected:
        string name;
};

class E0 : public Etat {
    public:
        E0() : name("E0"){ }
        ~E0() { }
};

