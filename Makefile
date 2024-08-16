CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++17 -pedantic

BUILD_PATH = ./build

all : goal_lab1 goal_lab1_2 goal_lab1_3 goal_lab1_4 goal_lab1_5 goal_lab1_6 goal_lab2 goal_lab3 goal_lab4

goal_lab1 :
	$(CC) $(CFLAGS) ./lab1/lab.cpp -o $(BUILD_PATH)/lab1.out

goal_lab1_2 :
	$(CC) $(CFLAGS) ./lab1_2/lab2.cpp -o $(BUILD_PATH)/lab1_2.out

goal_lab1_3 :
	$(CC) $(CFLAGS) ./lab1_3/lab3.cpp -o $(BUILD_PATH)/lab1_3.out

goal_lab1_4 :
	$(CC) $(CFLAGS) ./lab1_4/lab4.cpp -o $(BUILD_PATH)/lab1_4.out

goal_lab1_5 :
	$(CC) $(CFLAGS) ./lab1_5/lab5.cpp -o $(BUILD_PATH)/lab1_5.out

goal_lab1_6 :
	$(CC) $(CFLAGS) ./lab1_6/lab6_m.cpp ./lab1_6/lab6_count.cpp -o $(BUILD_PATH)/lab1_6.out

goal_lab2 :
	$(CC) $(CFLAGS) ./lab2/functions.cpp ./lab2/lab7_m.cpp -o $(BUILD_PATH)/lab2.out

goal_lab3 :
	$(CC) $(CFLAGS) ./lab3/laboratornaya3.cpp ./lab3/dowhile.cpp ./lab3/for.cpp ./lab3/while.cpp -o $(BUILD_PATH)/lab3.out

goal_lab4 :
	$(CC) $(CFLAGS) ./lab4/laboratornaya4.cpp ./lab4/dowhile1.cpp ./lab4/for.cpp ./lab4/while.cpp -o $(BUILD_PATH)/lab4.out

clean:
	rm -f $(BUILD_PATH)/*