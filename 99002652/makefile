all: all.out
all.out : Guest.o Rooms.o test_file.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
test_file.o: test_file.cpp Rooms.h Rooms.cpp  
	g++ $< -c
Rooms.o: Rooms.cpp Rooms.h
	g++ $< -c
clean:
	rm -rf *.o *.out
