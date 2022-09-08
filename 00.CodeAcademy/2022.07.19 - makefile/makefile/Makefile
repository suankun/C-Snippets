all: talk 
# The executable 
talk: main.o speak.o shout.o 
	gcc -Wall -std=c11 -g -o talk main.o speak.o shout.o 

# Individual source files 
speak.o: speak.c speak.h 
	gcc -Wall -std=c11 -g -c speak.c 
shout.o: shout.c shout.h speak.h 
	gcc -Wall -std=c11 -g -c shout.c 
main.o: main.c speak.h shout.h 
	gcc -Wall -std=c11 -g -c main.c 

# A "phony" target to remove built files and backups 
clean:
	rm -f *.o talk *~
