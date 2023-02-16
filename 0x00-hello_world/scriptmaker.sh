#!/bin/bash
echo Enter Script Name:
read SCRIPTNAME
touch $SCRIPTNAME
chmod $SCRIPTNAME
vi ./$SCRIPTNAME
