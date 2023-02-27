#!/bin/bash
echo Enter a commit message:
COMMITMESSAGE=$(ls -t --ignore=*.backup | head -1)
git add * && git add -A
git commit -m "$COMMITMESSAGE"
git push origin master
echo -e "\nCommit message: $COMMITMESSAGE"
