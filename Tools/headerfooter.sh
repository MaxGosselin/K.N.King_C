# A simple script to create a new file, add the header and foote, and open
# it in Vim.
#
# USAGE : ./headerfoooter.sh FILENAME -p [projects] -e [excercises]*optional

TARGET=`pwd`
CHAPT=`basename $TARGET`
CHAPTNUM=${CHAPT:0:1}


if [ $2 = "-p" ]; then
    TYPE="projects"
else
    TYPE="exercises"
fi

#echo $TARGET
#echo $CHAPT
#echo $CHAPTNUM

touch $TARGET/$1
echo "/* Chapt $CHAPTNUM $TYPE */" >> $TARGET/$1
echo >> $TARGET/$1
echo "#include<stdio.h>" >> $TARGET/$1
echo >> $TARGET/$1
echo >> $TARGET/$1
echo "/* Maxime Gosselin `date`*/" >> $TARGET/$1

vim $TARGET/$1
