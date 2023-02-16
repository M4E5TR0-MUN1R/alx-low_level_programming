#!/bin/bash
echo Enter Script Name:
read SCRIPTNAME
touch $SCRIPTNAME
echo -e "#!/bin/bash" > $SCRIPTNAME
chmod 755 $SCRIPTNAME
vi ./$SCRIPTNAME
