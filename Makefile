#!/usr/bin/gmake -f

#----------------------------------------------------------------------
# Uncomment and replace the following to set the name of the executable;
# otherwise, the name of the directory will be used.
#---
MODULE=fisherYates.x

#----------------------------------------------------------------------
# Uncoment and set the following to specify which files consitute source
# files to be compiled into objects; otherwise, filenames matching *.cpp
# will be used.
#---
SRCS= fisherYates.cpp Bag.cpp 

WORK=.

.PHONY: all clean 

all:
	@echo "+++++++++++++++++++++++++++++++++"
	@echo "Compiling variables example in simple C++"
	$(CXX)  -O0 -g -ggdb -std=c++11 -Wno-deprecated -I$(WORK)/ -o $(WORK)/$(MODULE) $(WORK)/$(SRCS)
	@echo "+++ Executing +++++++++++++++++++"
	$(WORK)/$(MODULE)

clean:
	rm -fr *.o *.x *.deps dependencies.mk *~

