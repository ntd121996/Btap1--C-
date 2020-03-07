CUR_DIR = QuanLyCanBo
CC = gcc
CXX = g++
LIBS =
CXXFLAGS = -g -Wall
#Include Direction
INCLUDE_DIR = ../$(CUR_DIR)/include

#Source File Direction
SOURCEC_DIR = ../$(CUR_DIR)/source

INCLUDE_BUILD = -I$(INCLUDE_DIR) \
-I.

#Include file dependency
DEPS = quanly.h
#Include file full path to build
DEPS_BUILD = $(patsubst %,$(INCLUDE_DIR)/%,$(DEPS))

#Source File .cpp
SOURCE = quanly_main.cpp quanly.cpp

#Change File.cpp to File.o
OBJECT = $(patsubst %.cpp,%.o,$(SOURCE))

#Source fullpath to build
SOURCE_BUILD = $(patsubst %,$(SOURCEC_DIR)/%,$(OBJECT))
# patsubst( pattern ,replacement, text)

EXE = main
REMOVE = rm -rf


#Suffix Rule
%.o : %.cpp $(DEPS_BUILD)
	$(CXX) -c $(CXXFLAGS) -o $@ $< $(INCLUDE_BUILD)

$(EXE): $(SOURCE_BUILD)
	@echo Processing ...
	$(CXX) $(CXXFLAGS) -o $@ $^ $(INCLUDE_BUILD)$(LIBS)
	@echo Build Success !!!

test:
	@echo $(SOURCE_BUILD)
	@echo $(DEPS_BUILD)

run:
	./$(EXE)

.PHONY: clean
clean :
	$(REMOVE) $(SOURCEC_DIR)/*.o $(EXE)
	@echo Remove Success