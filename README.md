# TP Git & GitHub — Introduction à l'Ingénierie Digitale

## 👤 Informations Étudiant
- **Nom & Prénom :** SOLAH IMANE
- **Rôle dans le binôme :** Étudiant B
- **Binôme :** SOLAH IMANE & FATIMAEZZAHRAA BASKE

---

## 🔗 Liens vers les dépôts réalisés

| Dépôt | Description | URL |
| :--- | :--- | :--- |
| **calcul-c** | Exercice 1 : Du dépôt local à GitHub | [https://github.com/imane-solah6/calcul-c](https://github.com/imane-solah6/calcul-c) |
| **calcul-c-equipe** | Exercice 2 : Collaboration en binôme | [https://github.com/FatimaezzahraaBaske/calcul-c-equipe](https://github.com/FatimaezzahraaBaske/calcul-c-equipe) |

### 📎 Pull Request Fusionnée
- **Titre :** Ajouter la fonction produit
- **Lien PR :** [Voir la PR #1 fusionnée](https://github.com/FatimaezzahraaBaske/calcul-c-equipe/pull/1)

---

## 📊 Bilan Technique

Ce bilan présente les commandes essentielles utilisées pour vérifier l'état du projet collaboratif `calcul-c-equipe` après résolution du conflit contrôlé.

### 1. Vérification de l'état (`git status`)
Permet de s'assurer que le répertoire de travail est propre après la fusion et qu'aucun fichier n'est en attente.

```bash
$ git status
On branch main
Your branch is up to date with 'origin/main'.
nothing to commit, working tree clean

$ git remote -v
origin  https://github.com/FatimaezzahraaBaske/calcul-c-equipe.git (fetch)
origin  https://github.com/FatimaezzahraaBaske/calcul-c-equipe.git (push)

$ git log --oneline --graph --all
*   436b514 (HEAD -> main, origin/main, origin/HEAD) Resoudre le conflit de fusion
|\  
| * a761603 (feature/message) modification du message dans feature
* | 1668a89 Modification conflictuelle sur main
|/  
* 7c95b8e Ajout de la fonction moyenne
*   27bf1e0 Merge pull request #1 from FatimaezzahraaBaske/feature/produit
|\  
| * 3e208f3 (origin/feature/produit, feature/produit) Ajouter la fonction produit
|/  
* a5683de Ajout du fichier main.c initial
* 3fe85c8 Initial commit

