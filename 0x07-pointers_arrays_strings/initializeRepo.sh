#!/bin/bash
echo "Initialized Repo" >> README.md
echo *.sh >> .gitignore
echo *.backup >> .gitignore
echo *~ >> .gitignore
git rm -r --cached .
git add .
git commit -m "Removed all .gitignore files and folders"
