all: greet.o libgreet.a
	ld -m elf_i386 greet.o -l greet -L . -o greet
greet.o: greet.asm
	nasm -f elf -dOS_LINUX $?
strlen.o: strlen.asm
	nasm -f elf -dOS_LINUX $?
putstr.o: putstr.asm
	nasm -f elf -dOS_LINUX $?
getstr.o: getstr.asm
	nasm -f elf -dOS_LINUX $?
quit.o: quit.asm
	nasm -f elf -dOS_LINUX $?
libgreet.a: strlen.o putstr.o getstr.o quit.o
	ar -rsc $@ $^
clean:
	rm -f *.o
fclean: clean
	rm -f greet libgreet.a
