#!/bin/bash
echo Enter Script Name:
read SCRIPTNAME
touch $SCRIPTNAME.sh
chmod $SCRIPTNAME.sh
vi ./$SCRIPTNAME.sh
