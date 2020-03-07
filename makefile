CC = gcc
CXX = g++
LIBS =
CFLAGS = -I.
CXXFLAGS = -I.
ODIR = obj
DEPS = quanly.h#phanso.h
OBJ = quanly_main.cpp quanly.cpp
# OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# hellomake : main.c
# 	gcc -g main.c -o hellomake

 %.o: %.cpp $(DEPS)
	$(CXX) -c -g -Wall $@ $< $(CXXFLAGS)
all: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)
run:
	./all

# %.o: %.c $(DEPS)
# 	$(CC) -c -g -Wall -o $@ $< $(CFLAGS)
# hellomake: $(OBJ)
# 	$(CC) -o $@ $^ -g $(CFLAGS) $(LIBS)


.PHONY: clean
clean :
	rm *.o all