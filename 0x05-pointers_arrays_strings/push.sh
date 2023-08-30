#!/bin/bash


# Demande à l'utilisateur d'entrer un message de commit
read -p "Entrez le message de commit : " commit_message

# Exécute les commandes git en utilisant les variables d'environnement
git add .
git commit -m "$commit_message"
git push https://$GITHUB_TOKEN@github.com/adoumasseo/alx-low_level_programming.git
