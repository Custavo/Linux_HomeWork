test:main.o func.o func2.o usort.o
	gcc main.o func.o func2.o usort.o -o test
main.o:main.c
	gcc main.c -c
func.o:func.c
	gcc func.c -c
func2.o:func2.c
	gcc func2.c -c
usort.o:usort.c
	gcc usort.c -c
clean:
	rm -f *.o
