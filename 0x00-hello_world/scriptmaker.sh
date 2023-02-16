#!/bin/bash
echo Enter Script Name:
read SCRIPTNAME
touch $SCRIPTNAME
chmod 755 $SCRIPTNAME
vi ./$SCRIPTNAME
