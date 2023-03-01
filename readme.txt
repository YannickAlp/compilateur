CR dans 15 jours
binome
1 séance
automate LR en C++
table de transition et analyseur lexical fourni
consulter() : lire
avancer() : avancer la tete de lecture
LALR(1)
pour (etat,symbole) -> action : décalge ou réduction
décalage -> empiler un état
            empiler un symbole 
            avancer la tete de lecture (lexer)
reduction-> dépiler n  symbole (partie droite de la règle)
            nouveau symbole s à calculer (partie gauche de la règle)
    ex: E->val n=1
        E->E+E n=3
            dépiler n états
            état.top()->transition(automate,s)
            

