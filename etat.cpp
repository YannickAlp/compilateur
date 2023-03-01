#include "etat.h"

bool E0::transition(Automate &a, Symbole * s) {
    switch(*s) {
        case OPENPAR:
            break;

        case CLOSEPAR:
            break;

        case PLUS:
            break;

        case MULT:
            break;

        case INT:
            break;

        case FIN:
            break;

        case ERREUR:
            break;

        case EXPR:
            break;

        default:
            break;
    }
    return false;
}