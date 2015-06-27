#!/bin/sh

#================================
#=                              =
#=    Max's lazy commitscript   =
#=                              =
#================================

PROJECT_ROOT=~/Projects/K.N.King_C


cd $PROJECT_ROOT
git add *
git commit -m "$1"
git push
