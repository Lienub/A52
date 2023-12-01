# A52

## Revue de Code

### Forme
- Nom de la fonction n'est pas clair
- Pas de commentaire
- Nom des arguments pas clair
- Pas de macro pour les returns

### Fond
- Problème de taille au niveau du malloc. Prendre la taille du input
- Il manque un free
- Il faut utiliser strlen au lieux du sizeof
- La fonction retourne rien pour savoir si cela a fonctionné
- Pas de vérification sur la fonction appelée pour savoir si elle se termine correctement.

