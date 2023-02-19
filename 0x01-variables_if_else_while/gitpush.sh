#!/bin/bash
echo Enter a commit message:
read COMMITMESSAGE
git add * && git add -A
git commit -m "$COMMITMESSAGE"
git push origin master
