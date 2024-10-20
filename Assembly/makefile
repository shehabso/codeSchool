all: Assembly

Assembly:Assembly.o
	gcc -o $@ $+

Assembly.o:Assembly.s
	as -o $@ $<

clean:
	rm -vf Assembly*.o

